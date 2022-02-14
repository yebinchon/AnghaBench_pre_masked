
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * UnlockMutexPtr; int * LockMutexPtr; int * DestroyMutexPtr; int * CreateMutexPtr; } ;
typedef TYPE_1__ cmsPluginMutex ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_4__ {int * UnlockMutexPtr; int * LockMutexPtr; int * DestroyMutexPtr; int * CreateMutexPtr; } ;
typedef TYPE_2__ _cmsMutexPluginChunkType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

cmsBool FUNC_1(cmsContext VAR_3, cmsPluginBase* VAR_4)
{
    cmsPluginMutex* VAR_5 = (cmsPluginMutex*) VAR_4;
    _cmsMutexPluginChunkType* VAR_6 = ( _cmsMutexPluginChunkType*) FUNC_0(VAR_3, VAR_1);

    if (VAR_4 == ((void*)0)) {


        VAR_6->CreateMutexPtr = ((void*)0);
        VAR_6->DestroyMutexPtr = ((void*)0);
        VAR_6->LockMutexPtr = ((void*)0);
        VAR_6 ->UnlockMutexPtr = ((void*)0);
        return VAR_2;
    }


    if (VAR_5 ->CreateMutexPtr == ((void*)0) || VAR_5 ->DestroyMutexPtr == ((void*)0) ||
        VAR_5 ->LockMutexPtr == ((void*)0) || VAR_5 ->UnlockMutexPtr == ((void*)0)) return VAR_0;


    VAR_6->CreateMutexPtr = VAR_5->CreateMutexPtr;
    VAR_6->DestroyMutexPtr = VAR_5 ->DestroyMutexPtr;
    VAR_6 ->LockMutexPtr = VAR_5 ->LockMutexPtr;
    VAR_6 ->UnlockMutexPtr = VAR_5 ->UnlockMutexPtr;


    return VAR_2;
}
