
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int storageDirEntry; TYPE_2__* parentStorage; scalar_t__* name; TYPE_1__ IEnumSTATSTG_iface; } ;
struct TYPE_8__ {int IStorage_iface; } ;
typedef TYPE_2__ StorageBaseImpl ;
typedef TYPE_3__ IEnumSTATSTGImpl ;
typedef int DirRef ;


 int FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static IEnumSTATSTGImpl* FUNC_3(
  StorageBaseImpl* VAR_1,
  DirRef VAR_2)
{
  IEnumSTATSTGImpl* VAR_3;

  VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(IEnumSTATSTGImpl));

  if (VAR_3)
  {
    VAR_3->IEnumSTATSTG_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;
    VAR_3->name[0] = 0;





    VAR_3->parentStorage = VAR_1;
    FUNC_2(&VAR_3->parentStorage->IStorage_iface);

    VAR_3->storageDirEntry = VAR_2;
  }

  return VAR_3;
}
