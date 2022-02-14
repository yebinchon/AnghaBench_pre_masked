
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ QuadPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
struct TYPE_12__ {size_t storageDirEntry; } ;
struct TYPE_14__ {int transactedParent; TYPE_5__* entries; TYPE_2__ base; } ;
typedef TYPE_4__ TransactedSnapshotImpl ;
struct TYPE_11__ {size_t dirRootEntry; } ;
struct TYPE_15__ {int transactedParentEntry; int newTransactedParentEntry; scalar_t__ stream_dirty; TYPE_1__ data; int read; } ;
typedef TYPE_5__ TransactedDirEntry ;
typedef size_t DirRef ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_3__) ;
 size_t FUNC_2 (TYPE_4__*,size_t) ;
 size_t FUNC_3 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_4__*,size_t) ;

__attribute__((used)) static void FUNC_5(
  TransactedSnapshotImpl* VAR_1, DirRef VAR_2)
{
  DirRef VAR_3;
  TransactedDirEntry *VAR_4;
  ULARGE_INTEGER VAR_5;

  VAR_5.QuadPart = 0;

  if (!VAR_1->entries[VAR_1->base.storageDirEntry].read)
    return;

  VAR_3 = VAR_1->entries[VAR_1->base.storageDirEntry].data.dirRootEntry;

  if (VAR_3 == VAR_0)
    return;

  VAR_3 = FUNC_2(VAR_1, VAR_3);

  while (VAR_3 != VAR_0 && VAR_3 != VAR_2)
  {
    if (FUNC_4(VAR_1, VAR_3))
    {
      VAR_4 = &VAR_1->entries[VAR_3];

      if (VAR_4->stream_dirty)
        FUNC_1(VAR_1->transactedParent,
          VAR_4->newTransactedParentEntry, VAR_5);

      FUNC_0(VAR_1->transactedParent,
        VAR_4->newTransactedParentEntry);

      VAR_4->newTransactedParentEntry = VAR_4->transactedParentEntry;
    }

    VAR_3 = FUNC_3(VAR_1, VAR_3);
  }
}
