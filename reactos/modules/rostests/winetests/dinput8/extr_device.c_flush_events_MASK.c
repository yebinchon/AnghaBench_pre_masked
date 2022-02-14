
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_3 = 200;
    int VAR_4 = 100;
    DWORD VAR_5 = FUNC_0() + VAR_3;

    while (VAR_3 > 0)
    {
        if (FUNC_1(0, ((void*)0), VAR_0, VAR_4, VAR_1) == VAR_2)
            break;
        VAR_3 = VAR_5 - FUNC_0();
        VAR_4 = 50;
    }
}
