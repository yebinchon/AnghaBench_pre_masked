
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2);
    FUNC_2(VAR_3 == VAR_0, "Skip failed: %08x\n", VAR_3);
    VAR_3 = FUNC_0(VAR_1);
    FUNC_2(VAR_3 == VAR_0, "Reset failed: %08x\n", VAR_3);
    VAR_3 = FUNC_1(VAR_1, VAR_2);
    FUNC_2(VAR_3 == VAR_0, "Reset failed: %08x\n", VAR_3);
}
