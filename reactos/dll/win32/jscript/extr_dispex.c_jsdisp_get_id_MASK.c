
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DISPID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int const*,int,TYPE_1__**) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int const*,TYPE_1__**) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int const*) ;

HRESULT FUNC_7(jsdisp_t *VAR_7, const WCHAR *VAR_8, DWORD VAR_9, DISPID *VAR_10)
{
    dispex_prop_t *VAR_11;
    HRESULT VAR_12;

    if(VAR_9 & VAR_6)
        VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_2 | VAR_1 | VAR_3,
                                &VAR_11);
    else
        VAR_12 = FUNC_4(VAR_7, FUNC_6(VAR_8), VAR_8, &VAR_11);
    if(FUNC_0(VAR_12))
        return VAR_12;

    if(VAR_11 && VAR_11->type!=VAR_4) {
        *VAR_10 = FUNC_5(VAR_7, VAR_11);
        return VAR_5;
    }

    FUNC_1("not found %s\n", FUNC_2(VAR_8));
    return VAR_0;
}
