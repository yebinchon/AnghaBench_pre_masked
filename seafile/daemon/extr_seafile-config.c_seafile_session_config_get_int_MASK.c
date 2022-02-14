
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int config_db; } ;
typedef TYPE_1__ SeafileSession ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;

int
FUNC_3 (SeafileSession *VAR_2,
                                const char *VAR_3,
                                gboolean *VAR_4)
{
    char *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1 (VAR_2->config_db, VAR_3);
    if (!VAR_5) {
        if (VAR_4)
            *VAR_4 = VAR_0;
        return -1;
    }

    if (VAR_4)
        *VAR_4 = VAR_1;
    VAR_6 = FUNC_0 (VAR_5);
    FUNC_2 (VAR_5);
    return VAR_6;
}
