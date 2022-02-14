
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dynamic_prop_t ;
typedef int WCHAR ;
struct TYPE_6__ {TYPE_1__* dynamic_data; } ;
struct TYPE_5__ {int * props; } ;
typedef int HRESULT ;
typedef TYPE_2__ DispatchEx ;
typedef int DISPID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int const*,int ,int **) ;

HRESULT FUNC_2(DispatchEx *VAR_3, const WCHAR *VAR_4, DISPID *VAR_5)
{
    dynamic_prop_t *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_2, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    *VAR_5 = VAR_0 + (VAR_6 - VAR_3->dynamic_data->props);
    return VAR_1;
}
