
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SeafCloneManager ;
typedef int GError ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int *,char*,int **) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5 (SeafCloneManager *VAR_1,
                            const char *VAR_2,
                            GError **VAR_3)
{
    char *VAR_4;

    if (FUNC_0 (VAR_2, VAR_0) == 0) {
        VAR_4 = FUNC_4 (VAR_2);
    } else {
        VAR_4 = FUNC_2(VAR_2);
    }

    if (!FUNC_3 (VAR_1, VAR_4, VAR_3)) {
        FUNC_1 (VAR_4);
        return ((void*)0);
    }

    return VAR_4;
}
