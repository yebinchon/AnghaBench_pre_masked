
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_2;

    VAR_2 = FUNC_0(((void*)0));
    FUNC_1( VAR_2 == VAR_0, "Expected E_HANDLE, got 0x%08x\n", VAR_2);
    VAR_2 = FUNC_0(VAR_1);
    FUNC_1( VAR_2 == VAR_0, "Expected E_HANDLE, got 0x%08x\n", VAR_2);
}
