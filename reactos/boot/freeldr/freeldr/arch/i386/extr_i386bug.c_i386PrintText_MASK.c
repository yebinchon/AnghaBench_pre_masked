
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,int ,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(char *VAR_3)
{
    char VAR_4;
    while (1)
    {
        VAR_4 = *VAR_3++;

        if (VAR_4 == 0) break;
        if (VAR_4 == '\n')
        {
            VAR_2++;
            VAR_1 = 0;
            continue;
        }

        FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2);
        VAR_1++;
    }
}
