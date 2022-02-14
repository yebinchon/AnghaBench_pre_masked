
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_3;
    IBindCtx *VAR_4 = ((void*)0);

    VAR_3 = FUNC_2(((void*)0), 0, 0);
    FUNC_3(VAR_3 == VAR_0, "Expected E_INVALIDARG, got %08x\n", VAR_3);

    VAR_3 = FUNC_2(((void*)0), VAR_2, 0);
    FUNC_3(VAR_3 == VAR_1, "Expected S_OK, got %08x\n", VAR_3);

    FUNC_0(0, &VAR_4);

    VAR_3 = FUNC_2(VAR_4, VAR_2, 0);
    FUNC_3(VAR_3 == VAR_1, "Expected S_OK, got %08x\n", VAR_3);

    FUNC_1(VAR_4);
}
