
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_4(((void*)0), VAR_0);
    FUNC_3(VAR_3 == VAR_2, "CoInitializeEx failed with error 0x%08x\n", VAR_3);



    VAR_3 = FUNC_1(((void*)0));
    FUNC_3(VAR_3 == VAR_2, "OleInitialize failed with error 0x%08x\n", VAR_3);


    VAR_3 = FUNC_1(((void*)0));
    FUNC_3(VAR_3 == VAR_1, "Expected S_FALSE, hr = 0x%08x\n", VAR_3);


    FUNC_0();
    FUNC_2();
    FUNC_2();
}
