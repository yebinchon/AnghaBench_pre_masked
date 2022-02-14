
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* entries; int transactedParent; } ;
typedef TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_10__ {scalar_t__ leftChild; scalar_t__ rightChild; scalar_t__ dirRootEntry; } ;
struct TYPE_8__ {scalar_t__ read; int data; int transactedParentEntry; } ;
typedef int HRESULT ;
typedef size_t DirRef ;
typedef TYPE_3__ DirEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 void* FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;

__attribute__((used)) static HRESULT FUNC_4(
  TransactedSnapshotImpl *VAR_4, DirRef VAR_5)
{
  HRESULT VAR_6=VAR_2;
  DirEntry VAR_7;

  if (!VAR_4->entries[VAR_5].read)
  {
    VAR_6 = FUNC_1(VAR_4->transactedParent,
        VAR_4->entries[VAR_5].transactedParentEntry,
        &VAR_7);

    if (FUNC_0(VAR_6) && VAR_7.leftChild != VAR_0)
    {
      VAR_7.leftChild = FUNC_2(VAR_4, VAR_7.leftChild);

      if (VAR_7.leftChild == VAR_0)
        VAR_6 = VAR_1;
    }

    if (FUNC_0(VAR_6) && VAR_7.rightChild != VAR_0)
    {
      VAR_7.rightChild = FUNC_2(VAR_4, VAR_7.rightChild);

      if (VAR_7.rightChild == VAR_0)
        VAR_6 = VAR_1;
    }

    if (FUNC_0(VAR_6) && VAR_7.dirRootEntry != VAR_0)
    {
      VAR_7.dirRootEntry = FUNC_2(VAR_4, VAR_7.dirRootEntry);

      if (VAR_7.dirRootEntry == VAR_0)
        VAR_6 = VAR_1;
    }

    if (FUNC_0(VAR_6))
    {
      FUNC_3(&VAR_4->entries[VAR_5].data, &VAR_7, sizeof(DirEntry));
      VAR_4->entries[VAR_5].read = VAR_3;
    }
  }

  return VAR_6;
}
