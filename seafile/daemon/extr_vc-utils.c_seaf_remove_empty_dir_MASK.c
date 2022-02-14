
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int message; } ;
struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ GError ;
typedef int GDir ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char const*,char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,TYPE_2__**) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*,int ) ;
 int FUNC_11 (int ) ;

int
FUNC_12 (const char *VAR_1)
{
    SeafStat VAR_2;
    GDir *VAR_3;
    const char *VAR_4;
    char *VAR_5;
    GError *VAR_6 = ((void*)0);

    if (FUNC_7 (VAR_1, &VAR_2) < 0 || !FUNC_0(VAR_2.st_mode))
        return 0;

    if (FUNC_8 (VAR_1) < 0) {
        VAR_3 = FUNC_3 (VAR_1, 0, &VAR_6);
        if (!VAR_3) {
            FUNC_10 ("Failed to open dir %s: %s.\n", VAR_1, VAR_6->message);
            return -1;
        }


        while ((VAR_4 = FUNC_4 (VAR_3)) != ((void*)0)) {
            if (FUNC_6(VAR_4)) {
                VAR_5 = FUNC_1 ("/", VAR_1, VAR_4, ((void*)0));
                if (FUNC_9 (VAR_5) < 0)
                    FUNC_10 ("Failed to remove file %s: %s.\n",
                                  VAR_5, FUNC_11(VAR_0));
                FUNC_5 (VAR_5);
            }
        }

        FUNC_2 (VAR_3);

        if (FUNC_8 (VAR_1) < 0) {
            FUNC_10 ("Failed to remove dir %s: %s.\n", VAR_1, FUNC_11(VAR_0));
            return -1;
        }
    }

    return 0;
}
