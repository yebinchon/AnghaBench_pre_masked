
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IMoniker_iface; } ;
typedef TYPE_1__ URLMoniker ;
typedef int IUnknown ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,void**) ;
 int FUNC_2 (int *,TYPE_1__**) ;

HRESULT FUNC_3(IUnknown *VAR_1, void **VAR_2)
{
    URLMoniker *VAR_3;
    HRESULT VAR_4;

    FUNC_1("(%p %p)\n", VAR_1, VAR_2);

    VAR_4 = FUNC_2(((void*)0), &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    *VAR_2 = &VAR_3->IMoniker_iface;
    return VAR_0;
}
