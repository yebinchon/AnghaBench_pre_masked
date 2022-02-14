
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 int FUNC_0 (char*,unsigned int const,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int const,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_0)
{
    const unsigned VAR_1 = FUNC_4(VAR_0, 0);
    jsval_t VAR_2, VAR_3;
    HRESULT VAR_4;

    VAR_2 = FUNC_9(VAR_0);

    FUNC_0("[%u] = %s\n", VAR_1, FUNC_2(VAR_2));

    VAR_3 = FUNC_10(VAR_0);
    FUNC_1(FUNC_6(VAR_3));

    VAR_4 = FUNC_7(FUNC_5(FUNC_3(VAR_3)), VAR_1, VAR_2);
    FUNC_8(VAR_2);
    return VAR_4;
}
