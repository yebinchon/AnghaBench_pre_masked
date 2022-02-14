
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int CHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char* const) ;
 scalar_t__ FUNC_5 (char* const) ;

char* FUNC_6(const char *VAR_0, char* const VAR_1[])
{
    int VAR_2;
    SIZE_T VAR_3 = 0;
    char *VAR_4, *VAR_5;


    VAR_3 += FUNC_5(VAR_0) + 3;
    for(VAR_2 = 0; VAR_1[VAR_2] != ((void*)0); ++VAR_2)
    {
        VAR_3 += FUNC_5(VAR_1[VAR_2]) + 1;
    }
    VAR_4 = FUNC_2(FUNC_1(), 0, (VAR_3 + 1) * sizeof(CHAR));
    if (VAR_4 == ((void*)0))
    {
        FUNC_0("ERROR: Not enough memory\n");
        return ((void*)0);
    }


    VAR_5 = VAR_4;
    FUNC_4(VAR_5, "\"");
    FUNC_3(VAR_5, VAR_0);
    FUNC_3(VAR_5, "\" ");
    VAR_5 += FUNC_5(VAR_5);
    for(VAR_2 = 0; VAR_1[VAR_2] != ((void*)0); ++VAR_2)
    {
        FUNC_4(VAR_5, VAR_1[VAR_2]);
        VAR_5 += FUNC_5(VAR_1[VAR_2]);
        *VAR_5++ = ' ';
    }
    *VAR_5 = '\0';

    return VAR_4;
}
