
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* entries; int scratch; int transactedParent; } ;
typedef TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_10__ {char* name; int sizeOfNameString; scalar_t__ dirRootEntry; scalar_t__ rightChild; scalar_t__ leftChild; int startingBlock; int stgType; } ;
struct TYPE_8__ {scalar_t__ transactedParentEntry; scalar_t__ newTransactedParentEntry; void* deleted; void* stream_dirty; int stream_entry; } ;
typedef int HRESULT ;
typedef size_t DirRef ;
typedef TYPE_3__ DirEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ) ;
 void* VAR_4 ;
 size_t FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_7(
  TransactedSnapshotImpl *VAR_5, DirRef VAR_6)
{
  HRESULT VAR_7 = VAR_3;

  if (!VAR_5->entries[VAR_6].stream_dirty)
  {
    DirEntry VAR_8;

    FUNC_6(&VAR_8, 0, sizeof(DirEntry));
    VAR_8.name[0] = 'S';
    VAR_8.sizeOfNameString = 1;
    VAR_8.stgType = VAR_2;
    VAR_8.startingBlock = VAR_0;
    VAR_8.leftChild = VAR_1;
    VAR_8.rightChild = VAR_1;
    VAR_8.dirRootEntry = VAR_1;

    VAR_7 = FUNC_3(VAR_5->scratch, &VAR_8,
      &VAR_5->entries[VAR_6].stream_entry);

    if (FUNC_1(VAR_7) && VAR_5->entries[VAR_6].transactedParentEntry != VAR_1)
    {
      VAR_7 = FUNC_2(
        VAR_5->scratch, VAR_5->entries[VAR_6].stream_entry,
        VAR_5->transactedParent, VAR_5->entries[VAR_6].transactedParentEntry);

      if (FUNC_0(VAR_7))
        FUNC_4(VAR_5->scratch, VAR_5->entries[VAR_6].stream_entry);
    }

    if (FUNC_1(VAR_7))
      VAR_5->entries[VAR_6].stream_dirty = VAR_4;

    if (VAR_5->entries[VAR_6].transactedParentEntry != VAR_1)
    {


      DirRef VAR_9;
      VAR_9 = FUNC_5(VAR_5, VAR_5->entries[VAR_6].transactedParentEntry);

      if (VAR_9 != VAR_1)
        VAR_5->entries[VAR_9].deleted = VAR_4;

      VAR_5->entries[VAR_6].transactedParentEntry = VAR_5->entries[VAR_6].newTransactedParentEntry = VAR_1;
    }
  }

  return VAR_7;
}
