
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clone_mgr; } ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ,int ,char*) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_1 (int ,char const*,int,char const*,char const*,char const*,char const*,char const*,int,char const*,char const*,char const*,char const*,char const*,char const*,int **) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3 (const char *VAR_3,
               int VAR_4,
               const char *VAR_5,
               const char *VAR_6,
               const char *VAR_7,
               const char *VAR_8,
               const char *VAR_9,
               const char *VAR_10,
               const char *VAR_11,
               const char *VAR_12,
               const char *VAR_13,
               const char *VAR_14,
               int VAR_15,
               const char *VAR_16,
               GError **VAR_17)
{
    if (!VAR_3 || FUNC_2(VAR_3) != 36) {
        FUNC_0 (VAR_17, VAR_0, VAR_1, "Invalid repo id");
        return ((void*)0);
    }

    if (!VAR_5 || FUNC_2(VAR_5) != 40) {
        FUNC_0 (VAR_17, VAR_0, VAR_1, "Invalid peer id");
        return ((void*)0);
    }

    if (!VAR_7) {
        FUNC_0 (VAR_17, VAR_0, VAR_1,
                     "Worktre must be specified");
        return ((void*)0);
    }

    if (!VAR_8 || !VAR_11 || !VAR_12 || !VAR_13 ) {
        FUNC_0 (VAR_17, VAR_0, VAR_1,
                     "Argument can't be NULL");
        return ((void*)0);
    }

    return FUNC_1 (VAR_2->clone_mgr,
                                        VAR_3, VAR_4,
                                        VAR_5,
                                        VAR_6, VAR_8,
                                        VAR_9, VAR_10,
                                        VAR_15,
                                        VAR_14,
                                        VAR_7,
                                        VAR_11, VAR_12,
                                        VAR_13, VAR_16,
                                        VAR_17);
}
