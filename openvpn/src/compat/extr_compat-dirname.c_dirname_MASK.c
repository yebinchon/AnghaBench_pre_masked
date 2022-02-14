
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char,int) ;
 char* FUNC_1 (char*,char) ;

char *
FUNC_2(char *VAR_0)
{
    static const char VAR_1[] = ".";
    char *VAR_2;
    char VAR_3 = '/';


    VAR_2 = VAR_0 != ((void*)0) ? FUNC_1(VAR_0, '/') : ((void*)0);

    if (!VAR_2)
    {
        VAR_2 = VAR_0 != ((void*)0) ? FUNC_1(VAR_0, '\\') : ((void*)0);
        VAR_3 = VAR_2 ? '\\' : '/';
    }

    if (VAR_2 != ((void*)0) && VAR_2 != VAR_0 && VAR_2[1] == '\0')
    {

        char *VAR_4;

        for (VAR_4 = VAR_2; VAR_4 != VAR_0; --VAR_4)
        {
            if (VAR_4[-1] != VAR_3)
            {
                break;
            }
        }


        if (VAR_4 != VAR_0)
        {
            VAR_2 = (char *) FUNC_0(VAR_0, VAR_3, VAR_4 - VAR_0);
        }
    }

    if (VAR_2 != ((void*)0))
    {

        char *VAR_5;

        for (VAR_5 = VAR_2; VAR_5 != VAR_0; --VAR_5)
        {
            if (VAR_5[-1] != VAR_3)
            {
                break;
            }
        }


        if (VAR_5 == VAR_0)
        {




            if (VAR_2 == VAR_0 + 1)
            {
                ++VAR_2;
            }
            else
            {
                VAR_2 = VAR_0 + 1;
            }
        }
        else
        {
            VAR_2 = VAR_5;
        }

        VAR_2[0] = '\0';
    }
    else
    {



        VAR_0 = (char *) VAR_1;
    }

    return VAR_0;
}
