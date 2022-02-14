
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IDispatch_iface; } ;
typedef int MSIHANDLE ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ AutomationObject ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(MSIHANDLE VAR_3, IDispatch **VAR_4)
{
    AutomationObject *VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5) return VAR_0;

    VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_1);
    if (VAR_6 != VAR_2)
    {
        FUNC_2(VAR_5);
        return VAR_6;
    }

    *VAR_4 = &VAR_5->IDispatch_iface;

    return VAR_6;
}
