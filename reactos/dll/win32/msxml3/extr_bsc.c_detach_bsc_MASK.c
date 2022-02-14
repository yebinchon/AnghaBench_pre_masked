
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IBindStatusCallback_iface; int hres; int * obj; scalar_t__ binding; } ;
typedef TYPE_1__ bsc_t ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

HRESULT FUNC_2(bsc_t *VAR_0)
{
    HRESULT VAR_1;

    if(VAR_0->binding)
        FUNC_1(VAR_0->binding);

    VAR_0->obj = ((void*)0);
    VAR_1 = VAR_0->hres;
    FUNC_0(&VAR_0->IBindStatusCallback_iface);

    return VAR_1;
}
