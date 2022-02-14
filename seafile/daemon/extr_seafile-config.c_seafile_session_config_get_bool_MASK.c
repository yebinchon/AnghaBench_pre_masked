
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
 char* FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

gboolean
FUNC_3 (SeafileSession *VAR_2,
                                 const char *VAR_3)
{
    char *VAR_4;
    gboolean VAR_5 = VAR_0;

    VAR_4 = FUNC_0 (VAR_2->config_db, VAR_3);
    if (FUNC_2(VAR_4, "true") == 0)
        VAR_5 = VAR_1;

    FUNC_1 (VAR_4);
    return VAR_5;
}
