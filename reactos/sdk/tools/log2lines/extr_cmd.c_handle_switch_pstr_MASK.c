
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(FILE *VAR_2, char **VAR_3, char *VAR_4, char *VAR_5)
{
    int VAR_6 =0;

    if (VAR_4)
    {
        if (FUNC_3(VAR_4,"") != 0)
        {
            if (FUNC_3(VAR_4,VAR_0) == 0)
            {
                if (*VAR_3)
                    VAR_6 = 1;
                FUNC_1(*VAR_3);
                *VAR_3 = ((void*)0);
            }
            else
            {
                if (!*VAR_3)
                {
                    *VAR_3 = FUNC_2(VAR_1);
                    **VAR_3 = '\0';
                }

                if (FUNC_3(VAR_4, *VAR_3) != 0)
                {
                    FUNC_4(*VAR_3, VAR_4);
                    VAR_6 = 1;
                }
            }
        }
    }
    if (VAR_5)
    {
        FUNC_0(VAR_2, "%s is \"%s\" (%s)\n", VAR_5, *VAR_3, VAR_6 ? "changed":"unchanged");
        if (!VAR_4)
            FUNC_0(VAR_2, "(readonly)\n");
    }

    return VAR_6;
}
