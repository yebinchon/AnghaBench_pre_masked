
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char const*,char,int) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_6, char *VAR_7, int VAR_8)
{
    char VAR_9[VAR_4+1];
    int VAR_10 = 0;
    char *VAR_11;
    if (*VAR_6 != '/')
    {
        if (FUNC_0(VAR_7, VAR_8) == ((void*)0))
            return -1;
        VAR_10 = FUNC_3(VAR_7);
        *(VAR_7 + VAR_10) = '/';
        ++VAR_10;
    }
    VAR_11 = FUNC_1(&VAR_7[VAR_10], VAR_6, '\0', VAR_4 - VAR_10);
    if (!VAR_11)
    {
        VAR_5 = VAR_1;
        return -1;
    }
    VAR_6 = VAR_7;
    if (FUNC_2(VAR_6, VAR_9) == ((void*)0)
        && VAR_5 != VAR_2 && VAR_5 != VAR_0)
        return -1;
    if (FUNC_4(VAR_9, "/etc/", 5) == 0)
    {
        VAR_5 = VAR_3;
        return -1;
    }
    return 0;
}
