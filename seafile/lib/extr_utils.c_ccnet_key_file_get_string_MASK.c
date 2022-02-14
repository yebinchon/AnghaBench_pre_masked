
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;
typedef int GKeyFile ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*,char const*,int *) ;
 int FUNC_2 (int *,char const*,char const*,int *) ;

gchar*
FUNC_3 (GKeyFile *VAR_0,
                           const char *VAR_1,
                           const char *VAR_2)
{
    gchar *VAR_3;

    if (!FUNC_2 (VAR_0, VAR_1, VAR_2, ((void*)0)))
        return ((void*)0);

    VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2, ((void*)0));
    if (VAR_3 != ((void*)0) && VAR_3[0] == '\0') {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
