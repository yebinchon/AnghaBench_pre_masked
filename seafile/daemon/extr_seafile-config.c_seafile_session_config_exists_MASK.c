
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
typedef int gboolean ;
struct TYPE_3__ {int config_db; } ;
typedef TYPE_1__ SeafileSession ;


 int FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (int ,char*) ;

gboolean
FUNC_2 (SeafileSession *VAR_0, const char *VAR_1)
{
    char VAR_2[256];

    FUNC_0 (VAR_2, sizeof(VAR_2),
              "SELECT 1 FROM Config WHERE key = '%s'",
              VAR_1);
    return FUNC_1 (VAR_0->config_db, VAR_2);
}
