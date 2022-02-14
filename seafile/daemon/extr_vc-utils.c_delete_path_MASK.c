
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gint64 ;
struct TYPE_3__ {scalar_t__ st_mtime; int st_mode; } ;
typedef TYPE_1__ SeafStat ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,char const*,char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;

int
FUNC_10 (const char *VAR_2, const char *VAR_3,
             unsigned int VAR_4, gint64 VAR_5)
{
    char VAR_6[VAR_0];
    SeafStat VAR_7;
    int VAR_8 = FUNC_9(VAR_3);

    if (!VAR_8) {
        FUNC_6 ("entry name should not be empty.\n");
        return -1;
    }

    FUNC_7 (VAR_6, VAR_0, "%s/%s", VAR_2, VAR_3);

    if (!FUNC_0(VAR_4)) {

        if (FUNC_4 (VAR_6, &VAR_7) < 0 || !FUNC_1(VAR_7.st_mode)) {
            return 0;
        }


        if (!FUNC_2 (VAR_3) && (VAR_5 != VAR_7.st_mtime)) {
            FUNC_6 ("File %s is changed. Skip removing the file.\n", VAR_6);
            return -1;
        }


        if (FUNC_5 (VAR_6) < 0) {
            FUNC_6 ("Failed to remove %s: %s.\n", VAR_6, FUNC_8(VAR_1));
            return -1;
        }
    } else {
        if (FUNC_3 (VAR_6) < 0) {
            FUNC_6 ("Failed to remove dir %s: %s.\n", VAR_6, FUNC_8(VAR_1));
            return -1;
        }
    }
    return 0;
}
