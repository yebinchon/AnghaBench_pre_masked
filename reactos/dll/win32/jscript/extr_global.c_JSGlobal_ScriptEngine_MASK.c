
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    static const WCHAR VAR_8[] = {'J','S','c','r','i','p','t',0};

    FUNC_0("\n");

    if(VAR_7) {
        jsstr_t *VAR_9;

        VAR_9 = FUNC_1(VAR_8);
        if(!VAR_9)
            return VAR_0;

        *VAR_7 = FUNC_2(VAR_9);
    }

    return VAR_1;
}
