
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int openFlags; int ref; void* create; int storageDirEntry; void* reverted; int * baseVtbl; TYPE_2__ IPropertySetStorage_iface; TYPE_1__ IStorage_iface; int storageHead; int strmHead; } ;
struct TYPE_10__ {TYPE_3__ base; int * parentStorage; } ;
typedef TYPE_4__ StorageInternalImpl ;
typedef int StorageBaseImpl ;
typedef int DirRef ;
typedef int DWORD ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static StorageInternalImpl* FUNC_3(
  StorageBaseImpl* VAR_6,
  DWORD VAR_7,
  DirRef VAR_8)
{
  StorageInternalImpl* VAR_9;

  VAR_9 = FUNC_1(FUNC_0(), VAR_1, sizeof(StorageInternalImpl));

  if (VAR_9!=0)
  {
    FUNC_2(&VAR_9->base.strmHead);

    FUNC_2(&VAR_9->base.storageHead);




    VAR_9->base.IStorage_iface.lpVtbl = &VAR_5;
    VAR_9->base.IPropertySetStorage_iface.lpVtbl = &VAR_2;
    VAR_9->base.baseVtbl = &VAR_4;
    VAR_9->base.openFlags = (VAR_7 & ~VAR_3);

    VAR_9->base.reverted = VAR_0;

    VAR_9->base.ref = 1;

    VAR_9->parentStorage = VAR_6;




    VAR_9->base.storageDirEntry = VAR_8;

    VAR_9->base.create = VAR_0;

    return VAR_9;
  }

  return 0;
}
