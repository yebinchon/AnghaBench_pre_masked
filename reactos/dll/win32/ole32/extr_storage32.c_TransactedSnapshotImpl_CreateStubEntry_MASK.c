
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* entries; } ;
typedef TYPE_1__ TransactedSnapshotImpl ;
struct TYPE_6__ {size_t newTransactedParentEntry; size_t transactedParentEntry; int read; } ;
typedef TYPE_2__ TransactedDirEntry ;
typedef size_t DirRef ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static DirRef FUNC_1(
  TransactedSnapshotImpl *VAR_2, DirRef VAR_3)
{
  DirRef VAR_4;
  TransactedDirEntry *VAR_5;

  VAR_4 = FUNC_0(VAR_2);

  if (VAR_4 != VAR_0)
  {
    VAR_5 = &VAR_2->entries[VAR_4];

    VAR_5->newTransactedParentEntry = VAR_5->transactedParentEntry = VAR_3;

    VAR_5->read = VAR_1;
  }

  return VAR_4;
}
