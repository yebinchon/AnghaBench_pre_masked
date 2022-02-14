
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* entries; } ;
typedef TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_5__ {size_t leftChild; size_t rightChild; size_t dirRootEntry; } ;
struct TYPE_7__ {size_t parent; TYPE_1__ data; scalar_t__ read; } ;
typedef TYPE_3__ TransactedDirEntry ;
typedef size_t DirRef ;


 size_t VAR_0 ;

__attribute__((used)) static DirRef FUNC_0(
  TransactedSnapshotImpl* VAR_1, DirRef VAR_2)
{
  DirRef VAR_3, VAR_4;
  TransactedDirEntry *VAR_5;

  VAR_3 = VAR_2;
  VAR_5 = &VAR_1->entries[VAR_3];
  while (VAR_5->read)
  {
    if (VAR_5->data.leftChild != VAR_0)
    {
      VAR_4 = VAR_3;
      VAR_3 = VAR_5->data.leftChild;
      VAR_5 = &VAR_1->entries[VAR_3];
      VAR_5->parent = VAR_4;
    }
    else if (VAR_5->data.rightChild != VAR_0)
    {
      VAR_4 = VAR_3;
      VAR_3 = VAR_5->data.rightChild;
      VAR_5 = &VAR_1->entries[VAR_3];
      VAR_5->parent = VAR_4;
    }
    else if (VAR_5->data.dirRootEntry != VAR_0)
    {
      VAR_4 = VAR_3;
      VAR_3 = VAR_5->data.dirRootEntry;
      VAR_5 = &VAR_1->entries[VAR_3];
      VAR_5->parent = VAR_4;
    }
    else
      break;
  }

  return VAR_3;
}
