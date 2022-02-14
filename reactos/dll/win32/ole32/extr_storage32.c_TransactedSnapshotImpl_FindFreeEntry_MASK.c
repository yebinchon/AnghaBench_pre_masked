
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {size_t firstFreeEntry; size_t entries_size; TYPE_2__* entries; } ;
typedef TYPE_1__ TransactedSnapshotImpl ;
struct TYPE_9__ {scalar_t__ inuse; } ;
typedef TYPE_2__ TransactedDirEntry ;
typedef size_t DirRef ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static DirRef FUNC_4(TransactedSnapshotImpl *VAR_3)
{
  DirRef VAR_4=VAR_3->firstFreeEntry;

  while (VAR_4 < VAR_3->entries_size && VAR_3->entries[VAR_4].inuse)
    VAR_4++;

  if (VAR_4 == VAR_3->entries_size)
  {
    ULONG VAR_5 = VAR_3->entries_size * 2;
    TransactedDirEntry *VAR_6;

    VAR_6 = FUNC_1(FUNC_0(), VAR_1, sizeof(TransactedDirEntry) * VAR_5);
    if (!VAR_6) return VAR_0;

    FUNC_3(VAR_6, VAR_3->entries, sizeof(TransactedDirEntry) * VAR_3->entries_size);
    FUNC_2(FUNC_0(), 0, VAR_3->entries);

    VAR_3->entries = VAR_6;
    VAR_3->entries_size = VAR_5;
  }

  VAR_3->entries[VAR_4].inuse = VAR_2;

  VAR_3->firstFreeEntry = VAR_4+1;

  return VAR_4;
}
