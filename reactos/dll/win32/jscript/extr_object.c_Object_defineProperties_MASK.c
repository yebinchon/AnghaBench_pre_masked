
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3,
                                     unsigned VAR_4, jsval_t *VAR_5, jsval_t *VAR_6)
{
    jsdisp_t *VAR_7;
    HRESULT VAR_8;

    if(VAR_4 < 1 || !FUNC_4(VAR_5[0]) || !FUNC_3(VAR_5[0]) || !(VAR_7 = FUNC_9(FUNC_3(VAR_5[0])))) {
        FUNC_0("not an object\n");
        return VAR_0;
    }

    FUNC_2("%p\n", VAR_7);

    VAR_8 = FUNC_6(VAR_1, VAR_7, VAR_4 >= 2 ? VAR_5[1] : FUNC_8());
    if(FUNC_1(VAR_8) && VAR_6)
        *VAR_6 = FUNC_7(FUNC_5(VAR_7));
    return VAR_8;
}
