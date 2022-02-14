
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SeafRepoManager ;
typedef int SeafRepo ;


 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (char*,char const*,char const*) ;

SeafRepo*
FUNC_4 (SeafRepoManager *VAR_0,
                                   const char *VAR_1,
                                   const char *VAR_2)
{
    SeafRepo *VAR_3;
    char *VAR_4;

    VAR_4 = FUNC_1 ();
    VAR_3 = FUNC_3 (VAR_4, VAR_1, VAR_2);
    if (!VAR_3) {
        FUNC_0 (VAR_4);
        return ((void*)0);
    }
    FUNC_0 (VAR_4);







    FUNC_2 (VAR_0, VAR_3);
    return VAR_3;
}
