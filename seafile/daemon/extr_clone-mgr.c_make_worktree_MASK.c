
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef int SeafCloneManager ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int **,int ,int ,char*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8 (SeafCloneManager *VAR_2,
               const char *VAR_3,
               gboolean VAR_4,
               GError **VAR_5)
{
    char *VAR_6 = FUNC_3 (VAR_3);
    SeafStat VAR_7;
    int VAR_8;
    char *VAR_9;

    FUNC_5 (VAR_6);

    VAR_8 = FUNC_6 (VAR_6, &VAR_7);
    if (VAR_8 < 0) {
        VAR_9 = VAR_6;
        return VAR_9;
    } else if (!FUNC_0(VAR_7.st_mode)) {
        if (!VAR_4) {
            FUNC_2 (VAR_5, VAR_0, VAR_1,
                         "Invalid local directory");
            FUNC_1 (VAR_6);
            return ((void*)0);
        }
        VAR_9 = FUNC_7 (VAR_6);
        FUNC_1 (VAR_6);
        return VAR_9;
    }



    if (FUNC_4 (VAR_2, VAR_6)) {
        if (!VAR_4) {
            FUNC_2 (VAR_5, VAR_0, VAR_1,
                         "Already in sync");
            FUNC_1 (VAR_6);
            return ((void*)0);
        }
        VAR_9 = FUNC_7 (VAR_6);
        FUNC_1 (VAR_6);
    } else {
        return VAR_6;
    }

    return VAR_9;
}
