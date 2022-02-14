
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* entries; } ;
typedef TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_6__ {size_t dirRootEntry; size_t rightChild; } ;
struct TYPE_8__ {size_t parent; TYPE_1__ data; } ;
typedef TYPE_3__ TransactedDirEntry ;
typedef size_t DirRef ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_2__*,size_t) ;

__attribute__((used)) static DirRef FUNC_1(
  TransactedSnapshotImpl* VAR_1, DirRef VAR_2)
{
  DirRef VAR_3;
  TransactedDirEntry *VAR_4;

  VAR_3 = VAR_1->entries[VAR_2].parent;
  VAR_4 = &VAR_1->entries[VAR_3];

  if (VAR_3 != VAR_0 && VAR_4->data.dirRootEntry != VAR_2)
  {
    if (VAR_4->data.rightChild != VAR_2 && VAR_4->data.rightChild != VAR_0)
    {
      VAR_1->entries[VAR_4->data.rightChild].parent = VAR_3;
      return FUNC_0(VAR_1, VAR_4->data.rightChild);
    }

    if (VAR_4->data.dirRootEntry != VAR_0)
    {
      VAR_1->entries[VAR_4->data.dirRootEntry].parent = VAR_3;
      return FUNC_0(VAR_1, VAR_4->data.dirRootEntry);
    }
  }

  return VAR_3;
}
