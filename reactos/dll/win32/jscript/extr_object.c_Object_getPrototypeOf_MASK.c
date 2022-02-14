
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_3__ {scalar_t__ prototype; } ;
typedef TYPE_1__ jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4,
                                     unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    jsdisp_t *VAR_8;

    if(!VAR_5 || !FUNC_4(VAR_6[0])) {
        FUNC_0("invalid arguments\n");
        return VAR_0;
    }

    FUNC_1("(%s)\n", FUNC_2(VAR_6[1]));

    VAR_8 = FUNC_8(FUNC_3(VAR_6[0]));
    if(!VAR_8) {
        FUNC_0("Non-JS object\n");
        return VAR_0;
    }

    if(VAR_7)
        *VAR_7 = VAR_8->prototype
            ? FUNC_7(FUNC_5(VAR_8->prototype))
            : FUNC_6();
    return VAR_1;
}
