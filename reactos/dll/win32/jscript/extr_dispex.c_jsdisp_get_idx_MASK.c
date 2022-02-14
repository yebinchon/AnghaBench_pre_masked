
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ dispex_prop_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef char* DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,char*,TYPE_1__**) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,char*) ;

HRESULT FUNC_6(jsdisp_t *VAR_2, DWORD VAR_3, jsval_t *VAR_4)
{
    WCHAR VAR_5[12];
    dispex_prop_t *VAR_6;
    HRESULT VAR_7;

    static const WCHAR VAR_8[] = {'%','d',0};

    FUNC_5(VAR_5, VAR_8, VAR_3);

    VAR_7 = FUNC_1(VAR_2, FUNC_4(VAR_5), VAR_5, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    if(!VAR_6 || VAR_6->type==VAR_1) {
        *VAR_4 = FUNC_2();
        return VAR_0;
    }

    return FUNC_3(VAR_2, VAR_6, VAR_4);
}
