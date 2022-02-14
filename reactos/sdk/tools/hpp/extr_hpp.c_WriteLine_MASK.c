
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pszValue; int cchValue; } ;
typedef TYPE_1__* PDEFINE ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (char*,char**) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

void
FUNC_5(char *VAR_0, FILE *VAR_1)
{
    char *VAR_2, *VAR_3, *VAR_4;
    int VAR_5;
    PDEFINE VAR_6;

    VAR_3 = FUNC_3(VAR_0, '\n');
    if (VAR_3 == 0)
        return;

    VAR_5 = VAR_3 - VAR_0 + 1;

    VAR_2 = VAR_0;
    while (VAR_5 > 0)
    {

        VAR_4 = FUNC_3(VAR_2, '$');
        if (VAR_4 && (VAR_4 < VAR_3))
        {

            FUNC_2(VAR_2, 1, VAR_4 - VAR_2, VAR_1);


            VAR_6 = FUNC_0(VAR_4 + 1, &VAR_2);
            if (VAR_6 != 0)
            {

                FUNC_2(VAR_6->pszValue, 1, VAR_6->cchValue, VAR_1);
            }
            else
            {
                VAR_5 = FUNC_4(VAR_4 + 1) + 1;
                FUNC_1("Could not find variable '%.*s'\n", VAR_5, VAR_4);
                FUNC_2(VAR_4, 1, VAR_2 - VAR_4, VAR_1);
            }

            VAR_5 = VAR_3 - VAR_2 + 1;
        }
        else
        {
            FUNC_2(VAR_2, 1, VAR_5, VAR_1);
            break;
        }
    }
}
