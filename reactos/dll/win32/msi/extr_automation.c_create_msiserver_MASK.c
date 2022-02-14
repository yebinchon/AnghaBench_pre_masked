
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IDispatch_iface; } ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ AutomationObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *,void**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

HRESULT FUNC_4(IUnknown *VAR_4, void **VAR_5)
{
    AutomationObject *VAR_6;
    HRESULT VAR_7;

    FUNC_0("(%p %p)\n", VAR_4, VAR_5);

    if (VAR_4)
        return VAR_0;

    VAR_6 = FUNC_2(sizeof(AutomationObject));
    if (!VAR_6) return VAR_1;

    VAR_7 = FUNC_1(VAR_6, 0, VAR_2);
    if (VAR_7 != VAR_3)
    {
        FUNC_3(VAR_6);
        return VAR_7;
    }

    *VAR_5 = &VAR_6->IDispatch_iface;

    return VAR_7;
}
