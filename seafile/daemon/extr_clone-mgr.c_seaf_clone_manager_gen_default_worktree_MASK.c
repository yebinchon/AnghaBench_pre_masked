
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SeafCloneManager ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char const*,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,int ,int *) ;

char *
FUNC_3 (SeafCloneManager *VAR_1,
                                         const char *VAR_2,
                                         const char *VAR_3)
{
    char *VAR_4 = FUNC_0 (VAR_2, VAR_3, ((void*)0));
    char *VAR_5;

    VAR_5 = FUNC_2 (VAR_1, VAR_4, VAR_0, ((void*)0));
    if (!VAR_5)
        return VAR_4;

    FUNC_1 (VAR_4);
    return VAR_5;
}
