
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int var; } ;
typedef TYPE_1__ dynamic_prop_t ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,int ,TYPE_1__**) ;

HRESULT FUNC_2(DispatchEx *VAR_2, const WCHAR *VAR_3, BOOL VAR_4, VARIANT **VAR_5)
{
    dynamic_prop_t *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4 ? VAR_1 : 0, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    *VAR_5 = &VAR_6->var;
    return VAR_0;
}
