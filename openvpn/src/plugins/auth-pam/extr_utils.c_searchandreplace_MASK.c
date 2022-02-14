
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char const*) ;

char *
FUNC_5(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    if (!VAR_1 || !VAR_2 || !VAR_3)
    {
        return ((void*)0);
    }

    size_t VAR_4 = FUNC_2(VAR_1);
    size_t VAR_5 = FUNC_2(VAR_3);
    size_t VAR_6 = VAR_4 * VAR_5;

    if (VAR_4 == 0 || FUNC_2(VAR_2) == 0 || VAR_5 == 0)
    {
        return ((void*)0);
    }

    bool VAR_7 = (VAR_6 == VAR_0) || (VAR_6 / VAR_4 != VAR_5);

    if (VAR_7)
    {
        return ((void*)0);
    }



    const char *VAR_8 = VAR_1;
    char *VAR_9;

    char VAR_10[VAR_6+1];
    VAR_10[0] = 0;

    VAR_9 = FUNC_4(VAR_8,VAR_2);
    if (!VAR_9)
    {
        return FUNC_1(VAR_1);
    }

    while (VAR_9)
    {
        FUNC_3(VAR_10,VAR_8,VAR_9-VAR_8);
        FUNC_0(VAR_10,VAR_3);

        VAR_8 = VAR_9+FUNC_2(VAR_2);
        VAR_9 = FUNC_4(VAR_8,VAR_2);
    }
    return FUNC_1(VAR_10);
}
