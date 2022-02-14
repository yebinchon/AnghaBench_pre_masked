
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int **) ;
 int * FUNC_2 (scalar_t__,char**) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_2, vdisp_t *VAR_3, jsval_t *VAR_4, const WCHAR *VAR_5)
{
    unsigned VAR_6;
    jsstr_t *VAR_7, *VAR_8;
    WCHAR *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_1(VAR_2, VAR_3, &VAR_7);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(!VAR_4) {
        FUNC_5(VAR_7);
        return VAR_1;
    }

    VAR_6 = FUNC_7(VAR_5);

    VAR_8 = FUNC_2(FUNC_4(VAR_7) + 2*VAR_6 + 5, &VAR_9);
    if(!VAR_8) {
        FUNC_5(VAR_7);
        return VAR_0;
    }

    *VAR_9++ = '<';
    FUNC_8(VAR_9, VAR_5, VAR_6*sizeof(WCHAR));
    VAR_9 += VAR_6;
    *VAR_9++ = '>';

    VAR_9 += FUNC_3(VAR_7, VAR_9);
    FUNC_5(VAR_7);

    *VAR_9++ = '<';
    *VAR_9++ = '/';
    FUNC_8(VAR_9, VAR_5, VAR_6*sizeof(WCHAR));
    VAR_9 += VAR_6;
    *VAR_9 = '>';

    *VAR_4 = FUNC_6(VAR_8);
    return VAR_1;
}
