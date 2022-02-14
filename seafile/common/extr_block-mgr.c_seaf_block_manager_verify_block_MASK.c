
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guchar ;
typedef int gboolean ;
typedef int buf ;
typedef int SeafBlockManager ;
typedef int GChecksum ;
typedef int BlockHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,char const*,int,char const*,int ) ;
 int FUNC_7 (int *,int *,char*,int) ;
 int FUNC_8 (char*,char const*,char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;

gboolean
FUNC_10 (SeafBlockManager *VAR_4,
                                 const char *VAR_5,
                                 int VAR_6,
                                 const char *VAR_7,
                                 gboolean *VAR_8)
{
    BlockHandle *VAR_9;
    char VAR_10[10240];
    int VAR_11;
    GChecksum *VAR_12;
    const char *VAR_13;
    gboolean VAR_14;

    VAR_9 = FUNC_6 (VAR_4,
                                       VAR_5, VAR_6,
                                       VAR_7, VAR_0);
    if (!VAR_9) {
        FUNC_8 ("Failed to open block %s:%.8s.\n", VAR_5, VAR_7);
        *VAR_8 = VAR_3;
        return VAR_1;
    }

    VAR_12 = FUNC_2 (VAR_2);
    while (1) {
        VAR_11 = FUNC_7 (VAR_4, VAR_9, VAR_10, sizeof(VAR_10));
        if (VAR_11 < 0) {
            FUNC_8 ("Failed to read block %s:%.8s.\n", VAR_5, VAR_7);
            *VAR_8 = VAR_3;
            FUNC_0 (VAR_12);
            return VAR_1;
        }
        if (VAR_11 == 0)
            break;

        FUNC_3 (VAR_12, (guchar *)VAR_10, VAR_11);
    }

    FUNC_5 (VAR_4, VAR_9);
    FUNC_4 (VAR_4, VAR_9);

    VAR_13 = FUNC_1 (VAR_12);

    if (FUNC_9 (VAR_13, VAR_7) == 0)
        VAR_14 = VAR_3;
    else
        VAR_14 = VAR_1;

    FUNC_0 (VAR_12);
    return VAR_14;
}
