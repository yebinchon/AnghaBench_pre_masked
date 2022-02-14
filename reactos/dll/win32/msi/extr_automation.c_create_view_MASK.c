
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_4(MSIHANDLE VAR_3, IDispatch **VAR_4)
{
    AutomationObject *VAR_5;
    HRESULT VAR_6;

    FUNC_0("(%d %p)\n", VAR_3, VAR_4);

    VAR_5 = FUNC_2(sizeof(AutomationObject));
    if (!VAR_5) return VAR_0;

    VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_2);
    if (VAR_6 != VAR_1)
    {
        FUNC_3(VAR_5);
        return VAR_6;
    }

    *VAR_4 = &VAR_5->IDispatch_iface;

    return VAR_6;
}
