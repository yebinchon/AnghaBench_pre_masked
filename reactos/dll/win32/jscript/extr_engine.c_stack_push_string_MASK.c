
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline HRESULT FUNC_3(script_ctx_t *VAR_1, const WCHAR *VAR_2)
{
    jsstr_t *VAR_3;

    VAR_3 = FUNC_0(VAR_2);
    if(!VAR_3)
        return VAR_0;

    return FUNC_2(VAR_1, FUNC_1(VAR_3));
}
