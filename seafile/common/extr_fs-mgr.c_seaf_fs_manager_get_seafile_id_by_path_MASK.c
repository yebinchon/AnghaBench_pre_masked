
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint32 ;
typedef int SeafFSManager ;
typedef int GError ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*,int,char const*,char const*,int *,int **) ;

char *
FUNC_3 (SeafFSManager *VAR_0,
                                        const char *VAR_1,
                                        int VAR_2,
                                        const char *VAR_3,
                                        const char *VAR_4,
                                        GError **VAR_5)
{
    guint32 VAR_6;
    char *VAR_7;

    VAR_7 = FUNC_2 (VAR_0, VAR_1, VAR_2,
                                              VAR_3, VAR_4, &VAR_6, VAR_5);

    if (!VAR_7)
        return ((void*)0);

    if (VAR_7 && FUNC_0(VAR_6)) {
        FUNC_1 (VAR_7);
        return ((void*)0);
    }

    return VAR_7;
}
