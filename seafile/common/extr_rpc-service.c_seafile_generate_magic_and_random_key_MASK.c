
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int SeafileEncryptionInfo ;
typedef int GObject ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*,char const*,char*,char const*,char*,int,char*,int *,char*,int *,int *) ;
 int FUNC_1 (int *,char*,int *,int *) ;
 int FUNC_2 (int **,int ,int ,char*) ;
 int FUNC_3 (int,char const*,char const*,int *,int *) ;
 scalar_t__ FUNC_4 (char const*,int,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;

GObject *
FUNC_6(int VAR_3,
                                      const char* VAR_4,
                                      const char *VAR_5,
                                      GError **VAR_6)
{
    if (!VAR_4 || !VAR_5) {
        FUNC_2 (VAR_6, VAR_0, VAR_2, "Argument should not be null");
        return ((void*)0);
    }

    gchar VAR_7[65] = {0};
    gchar VAR_8[65] = {0};
    gchar VAR_9[97] = {0};

    if (VAR_3 >= 3 && FUNC_5 (VAR_7) < 0) {
        return ((void*)0);
    }

    FUNC_3 (VAR_3, VAR_4, VAR_5, VAR_7, VAR_8);
    if (FUNC_4 (VAR_5, VAR_3, VAR_7, VAR_9) < 0) {
        return ((void*)0);
    }

    SeafileEncryptionInfo *VAR_10;
    VAR_10 = FUNC_0 (VAR_1,
                          "repo_id", VAR_4,
                          "passwd", VAR_5,
                          "enc_version", VAR_3,
                          "magic", VAR_8,
                          "random_key", VAR_9,
                          ((void*)0));

    if (VAR_3 >= 3)
        FUNC_1 (VAR_10, "salt", VAR_7, ((void*)0));

    return (GObject *)VAR_10;

}
