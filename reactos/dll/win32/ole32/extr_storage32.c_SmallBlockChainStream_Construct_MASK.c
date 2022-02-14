
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int ownerDirEntry; int * headOfStreamPlaceHolder; int * parentStorage; } ;
typedef int StorageImpl ;
typedef TYPE_1__ SmallBlockChainStream ;
typedef int DirRef ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;

SmallBlockChainStream* FUNC_2(
  StorageImpl* VAR_0,
  ULONG* VAR_1,
  DirRef VAR_2)
{
  SmallBlockChainStream* VAR_3;

  VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(SmallBlockChainStream));

  VAR_3->parentStorage = VAR_0;
  VAR_3->headOfStreamPlaceHolder = VAR_1;
  VAR_3->ownerDirEntry = VAR_2;

  return VAR_3;
}
