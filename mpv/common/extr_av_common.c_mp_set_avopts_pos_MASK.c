
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
typedef int errstr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,char*,char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct mp_log*,char*,char*,...) ;
 int FUNC_3 (void*,char**) ;

int FUNC_4(struct mp_log *VAR_2, void *VAR_3, void *VAR_4, char **VAR_5)
{
    int VAR_6 = 0;
    for (int VAR_7 = 0; VAR_5 && VAR_5[VAR_7 * 2]; VAR_7++) {
        char *VAR_8 = VAR_5[VAR_7 * 2 + 0];
        char *VAR_9 = VAR_5[VAR_7 * 2 + 1];
        FUNC_3(VAR_4, &VAR_8);
        int VAR_10 = FUNC_0(VAR_3, VAR_8, VAR_9, VAR_1);
        if (VAR_10 == VAR_0) {
            FUNC_2(VAR_2, "AVOption '%s' not found.\n", VAR_8);
            VAR_6 = -1;
        } else if (VAR_10 < 0) {
            char VAR_11[80];
            FUNC_1(VAR_10, VAR_11, sizeof(VAR_11));
            FUNC_2(VAR_2, "Could not set AVOption %s='%s' (%s)\n", VAR_8, VAR_9, VAR_11);
            VAR_6 = -1;
        }
    }
    return VAR_6;
}
