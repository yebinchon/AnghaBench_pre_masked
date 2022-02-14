
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4)
{
    int VAR_5 =0;

    if (VAR_3)
    {
        if (FUNC_1(VAR_3,"") != 0)
        {
            if (FUNC_1(VAR_3,VAR_0) == 0)
            {
                if (*VAR_2)
                    VAR_5 = 1;
                *VAR_2 = '\0';
            }
            else if (FUNC_1(VAR_3, VAR_2) != 0)
            {
                FUNC_2(VAR_2, VAR_3);
                VAR_5 = 1;
            }
        }
    }
    if (VAR_4)
    {
        FUNC_0(VAR_1, "%s is \"%s\" (%s)\n", VAR_4, VAR_2, VAR_5 ? "changed":"unchanged");
        if (!VAR_3)
            FUNC_0(VAR_1, "(readonly)\n");
    }

    return VAR_5;
}
