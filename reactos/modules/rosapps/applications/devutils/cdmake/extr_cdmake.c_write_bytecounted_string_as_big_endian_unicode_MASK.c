
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_0, char *VAR_1, char VAR_2)
{
    unsigned VAR_3 = VAR_0 / 2;

    while (*VAR_1 != 0 && VAR_3 != 0)
    {
        FUNC_0(*VAR_1++);
        VAR_3--;
    }
    while (VAR_3 != 0)
    {
        FUNC_0(VAR_2);
        VAR_3--;
    }

    if (VAR_0 % 2 != 0)
        FUNC_1(VAR_2);
}
