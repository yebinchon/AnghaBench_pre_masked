
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int const,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int const,int const*) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_1)
{
    const HRESULT VAR_2 = FUNC_3(VAR_1, 0);
    jsstr_t *VAR_3 = FUNC_2(VAR_1, 1);
    const WCHAR *VAR_4;

    FUNC_0("%08x %s\n", VAR_2, FUNC_1(VAR_3));

    VAR_4 = FUNC_4(VAR_3);
    return VAR_4 ? FUNC_5(VAR_1, VAR_2, VAR_4) : VAR_0;
}
