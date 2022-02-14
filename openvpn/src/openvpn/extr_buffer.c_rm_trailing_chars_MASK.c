
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (char*) ;

void
FUNC_2(char *VAR_0, const char *VAR_1)
{
    bool VAR_2;
    do
    {
        const int VAR_3 = FUNC_1(VAR_0);
        VAR_2 = 0;
        if (VAR_3 > 0)
        {
            char *VAR_4 = VAR_0 + (VAR_3 - 1);
            if (FUNC_0(VAR_1, *VAR_4) != ((void*)0))
            {
                *VAR_4 = '\0';
                VAR_2 = 1;
            }
        }
    } while (VAR_2);
}
