
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gsize ;
typedef char gchar ;
typedef int GError ;


 char* FUNC_0 (char const*,int ,int *,int *,int **) ;
 int FUNC_1 (char const*) ;

char *FUNC_2 (const gchar *VAR_0)
{
    if (!VAR_0)
        return ((void*)0);

    gsize VAR_1 = 0;
    gsize VAR_2 = 0;
    GError *VAR_3 = ((void*)0);
    gchar *VAR_4 = ((void*)0);

    VAR_4 = FUNC_0
        (VAR_0,
         FUNC_1(VAR_0),
         &VAR_1,
         &VAR_2,
         &VAR_3);

    if (VAR_3) {
        return ((void*)0);
    }

    return VAR_4;
}
