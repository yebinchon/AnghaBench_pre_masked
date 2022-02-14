
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {size_t storageDirEntry; } ;
struct TYPE_18__ {TYPE_5__* entries; int transactedParent; int scratch; TYPE_1__ base; } ;
typedef TYPE_4__ TransactedSnapshotImpl ;
struct TYPE_17__ {scalar_t__ QuadPart; } ;
struct TYPE_21__ {size_t dirRootEntry; size_t leftChild; size_t rightChild; TYPE_3__ size; } ;
struct TYPE_19__ {size_t parent; size_t newTransactedParentEntry; size_t transactedParentEntry; TYPE_8__ data; int stream_entry; scalar_t__ stream_dirty; int dirty; int read; } ;
typedef TYPE_5__ TransactedDirEntry ;
struct TYPE_16__ {scalar_t__ QuadPart; } ;
struct TYPE_20__ {size_t leftChild; size_t rightChild; size_t dirRootEntry; int startingBlock; TYPE_2__ size; } ;
typedef int HRESULT ;
typedef size_t DirRef ;
typedef TYPE_6__ DirEntry ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,size_t,int ,int ) ;
 int FUNC_2 (int ,TYPE_6__*,size_t*) ;
 int FUNC_3 (int ,size_t,size_t) ;
 int FUNC_4 (TYPE_4__*,size_t) ;
 size_t FUNC_5 (TYPE_4__*,size_t) ;
 size_t FUNC_6 (TYPE_4__*,size_t) ;
 int FUNC_7 (TYPE_4__*,size_t) ;
 int FUNC_8 (TYPE_6__*,TYPE_8__*,int) ;

__attribute__((used)) static HRESULT FUNC_9(TransactedSnapshotImpl* VAR_3)
{
  DirRef VAR_4;
  TransactedDirEntry *VAR_5;
  HRESULT VAR_6 = VAR_2;

  VAR_4 = VAR_3->base.storageDirEntry;
  VAR_5 = &VAR_3->entries[VAR_4];
  VAR_5->parent = VAR_1;
  VAR_5->newTransactedParentEntry = VAR_5->transactedParentEntry;

  if (VAR_5->data.dirRootEntry == VAR_1)
    return VAR_2;

  VAR_3->entries[VAR_5->data.dirRootEntry].parent = VAR_1;

  VAR_4 = FUNC_5(VAR_3, VAR_5->data.dirRootEntry);
  VAR_5 = &VAR_3->entries[VAR_4];

  while (VAR_4 != VAR_1)
  {

    if (!VAR_5->read ||
        (!VAR_5->dirty && !VAR_5->stream_dirty &&
         !FUNC_7(VAR_3, VAR_5->data.leftChild) &&
         !FUNC_7(VAR_3, VAR_5->data.rightChild) &&
         !FUNC_7(VAR_3, VAR_5->data.dirRootEntry)))
      VAR_5->newTransactedParentEntry = VAR_5->transactedParentEntry;
    else
    {
      DirEntry VAR_7;

      FUNC_8(&VAR_7, &VAR_5->data, sizeof(DirEntry));

      VAR_7.size.QuadPart = 0;
      VAR_7.startingBlock = VAR_0;

      if (VAR_7.leftChild != VAR_1)
        VAR_7.leftChild = VAR_3->entries[VAR_7.leftChild].newTransactedParentEntry;

      if (VAR_7.rightChild != VAR_1)
        VAR_7.rightChild = VAR_3->entries[VAR_7.rightChild].newTransactedParentEntry;

      if (VAR_7.dirRootEntry != VAR_1)
        VAR_7.dirRootEntry = VAR_3->entries[VAR_7.dirRootEntry].newTransactedParentEntry;

      VAR_6 = FUNC_2(VAR_3->transactedParent, &VAR_7,
        &VAR_5->newTransactedParentEntry);
      if (FUNC_0(VAR_6))
      {
        FUNC_4(VAR_3, VAR_4);
        return VAR_6;
      }

      if (VAR_5->stream_dirty)
      {
        VAR_6 = FUNC_1(
          VAR_3->transactedParent, VAR_5->newTransactedParentEntry,
          VAR_3->scratch, VAR_5->stream_entry);
      }
      else if (VAR_5->data.size.QuadPart)
      {
        VAR_6 = FUNC_3(
          VAR_3->transactedParent, VAR_5->newTransactedParentEntry,
          VAR_5->transactedParentEntry);
      }

      if (FUNC_0(VAR_6))
      {
        VAR_4 = FUNC_6(VAR_3, VAR_4);
        FUNC_4(VAR_3, VAR_4);
        return VAR_6;
      }
    }

    VAR_4 = FUNC_6(VAR_3, VAR_4);
    VAR_5 = &VAR_3->entries[VAR_4];
  }

  return VAR_6;
}
