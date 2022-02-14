
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
    MSG VAR_4;
    int VAR_5 = 200;
    int VAR_6 = 100;
    DWORD VAR_7 = FUNC_1() + VAR_5;

    while (VAR_5 > 0)
    {
        if (FUNC_2(0, ((void*)0), VAR_0, VAR_6, VAR_2) == VAR_3)
            break;
        while (FUNC_3(&VAR_4, 0, 0, 0, VAR_1))
        {
            FUNC_4(&VAR_4);
            FUNC_0(&VAR_4);
        }
        VAR_5 = VAR_7 - FUNC_1();
    }
}
