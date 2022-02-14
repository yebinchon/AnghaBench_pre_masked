
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    HWND VAR_4;
    DWORD VAR_5;
    LONG VAR_6;


    for (VAR_5 = VAR_3; VAR_5 <= VAR_2; VAR_5++)
    {
        VAR_4 = FUNC_2(VAR_5, ((void*)0));
        VAR_6 = FUNC_1(VAR_4, VAR_0, 0, 0);
        FUNC_3(VAR_6 == VAR_1, "Expect state 0x%08x, got 0x%08x\n", VAR_1, VAR_6);
        FUNC_0(VAR_4);
    }
}
