
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned int const) ;
 int FUNC_2 (int *,int *,unsigned int const,int **) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 unsigned int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_0)
{
    jsstr_t *VAR_1 = FUNC_4(VAR_0, 0);
    const unsigned VAR_2 = FUNC_5(VAR_0, 1);
    jsdisp_t *VAR_3;
    HRESULT VAR_4;

    FUNC_1("%s %x\n", FUNC_3(VAR_1), VAR_2);

    VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_7(VAR_0, FUNC_6(VAR_3));
}
