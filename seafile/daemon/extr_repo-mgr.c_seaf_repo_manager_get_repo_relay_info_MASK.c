
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SeafRepoManager ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char const*,int ) ;

void
FUNC_1 (SeafRepoManager *VAR_2,
                                       const char *VAR_3,
                                       char **VAR_4,
                                       char **VAR_5)
{
    char *VAR_6, *VAR_7;

    VAR_6 = FUNC_0 (VAR_2, VAR_3, VAR_0);
    VAR_7 = FUNC_0 (VAR_2, VAR_3, VAR_1);

    if (VAR_4 && VAR_6)
        *VAR_4 = VAR_6;
    if (VAR_5 && VAR_7)
        *VAR_5 = VAR_7;
}
