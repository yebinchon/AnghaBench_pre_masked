
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int exprval_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,unsigned int const) ;
 int FUNC_2 (int *,int *,int ,unsigned int const,int ,int *) ;
 unsigned int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int const) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,unsigned int const,int *) ;
 int FUNC_9 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_2)
{
    const unsigned VAR_3 = FUNC_3(VAR_2, 0);
    exprval_t VAR_4;
    jsval_t VAR_5;
    HRESULT VAR_6;

    FUNC_1("%u\n", VAR_3);

    if(!FUNC_8(VAR_2, VAR_3+1, &VAR_4))
        return FUNC_9(VAR_2, VAR_1, ((void*)0));

    VAR_6 = FUNC_2(VAR_2, &VAR_4, VAR_0, VAR_3+1, FUNC_4(VAR_2, VAR_3+1), ((void*)0));
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_5 = FUNC_5(VAR_2);
    FUNC_6(VAR_2, VAR_3+2);
    return FUNC_7(VAR_2, VAR_5);
}
