
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int,char*,char*) ;
 char* VAR_1 ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int*) ;

int
FUNC_6(char *VAR_2, int VAR_3)
{
    char VAR_4[VAR_0];
    FILE *VAR_5;
    int VAR_6 = 0;

    if (!VAR_2)
        VAR_2 = VAR_1;
    FUNC_4(VAR_4, "svn info %s", VAR_2);
    if ((VAR_5 = FUNC_1(VAR_4, "r")))
    {
        while (FUNC_2(VAR_4, VAR_0, VAR_5))
        {
            if (VAR_3)
            {
                if (FUNC_5(VAR_4, "Last Changed Rev: %d", &VAR_6))
                    break;
            }
            else
            {
                if (FUNC_5(VAR_4, "Revision: %d", &VAR_6))
                    break;
            }
        }
    }
    else
        FUNC_3(1, "Can't popen: \"%s\"\n", VAR_4);

    if (VAR_5)
        FUNC_0(VAR_5);

    return VAR_6;
}
