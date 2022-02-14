
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; int * custom_manager; int * mgrsite; TYPE_1__ IInternetSecurityManagerEx2_iface; } ;
typedef TYPE_2__ SecManagerImpl ;
typedef TYPE_2__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,TYPE_2__**) ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int) ;

HRESULT FUNC_3(IUnknown *VAR_2, LPVOID *VAR_3)
{
    SecManagerImpl *VAR_4;

    FUNC_0("(%p,%p)\n",VAR_2,VAR_3);
    VAR_4 = FUNC_2(sizeof(*VAR_4));


    VAR_4->IInternetSecurityManagerEx2_iface.lpVtbl = &VAR_1;

    VAR_4->ref = 1;
    VAR_4->mgrsite = ((void*)0);
    VAR_4->custom_manager = ((void*)0);

    *VAR_3 = VAR_4;

    FUNC_1();

    return VAR_0;
}
