
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compiler_ctx_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*,int*) ;
 int FUNC_1 (int *,int ,int const*,unsigned int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_2, const WCHAR *VAR_3, unsigned VAR_4)
{
    int VAR_5;
    if(FUNC_0(VAR_2, VAR_3, &VAR_5))
        return FUNC_2(VAR_2, VAR_1, VAR_5);
    return FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4);
}
