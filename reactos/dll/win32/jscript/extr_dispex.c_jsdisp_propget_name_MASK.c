
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int const*,TYPE_1__**) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (int const*) ;

HRESULT FUNC_5(jsdisp_t *VAR_2, const WCHAR *VAR_3, jsval_t *VAR_4)
{
    dispex_prop_t *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_2, FUNC_4(VAR_3), VAR_3, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    if(!VAR_5 || VAR_5->type==VAR_0) {
        *VAR_4 = FUNC_2();
        return VAR_1;
    }

    return FUNC_3(VAR_2, VAR_5, VAR_4);
}
