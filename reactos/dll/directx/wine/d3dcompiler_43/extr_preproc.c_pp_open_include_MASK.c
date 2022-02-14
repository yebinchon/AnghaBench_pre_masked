
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int,char const*) ;
 void* FUNC_2 (char*,int) ;

void *FUNC_3(const char *VAR_0, int VAR_1, const char *VAR_2, char **VAR_3)
{
    char *VAR_4;
    void *VAR_5;

    if (!(VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2))) return ((void*)0);
    VAR_5 = FUNC_2(VAR_4, VAR_1);

    if (VAR_5)
    {
        if (VAR_3) *VAR_3 = VAR_4;
        else FUNC_0( VAR_4 );
        return VAR_5;
    }
    FUNC_0( VAR_4 );
    return ((void*)0);
}
