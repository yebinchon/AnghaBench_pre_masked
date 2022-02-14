
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_4;
    ULONG VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        VAR_4 = FUNC_0(VAR_2, 1);
        FUNC_1(VAR_4 == VAR_1, "Skip failed: %08x\n", VAR_4);
    }

    VAR_4 = FUNC_0(VAR_2, 1);
    FUNC_1(VAR_4 == VAR_0, "Skip expected end of list: %08x\n", VAR_4);
}
