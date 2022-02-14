
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int HRESULT ;
typedef int BSTR ;


 int FUNC_0 (char*,int ,unsigned int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int const,unsigned int const) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_0)
{
    const BSTR VAR_1 = FUNC_2(VAR_0, 0);
    const unsigned VAR_2 = FUNC_3(VAR_0, 1);

    FUNC_0("%s %x\n", FUNC_1(VAR_1), VAR_2);

    return FUNC_4(VAR_0, VAR_1, VAR_2);
}
