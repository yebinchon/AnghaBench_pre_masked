
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
struct TYPE_3__ {int http_proxy_port; int config_db; } ;
typedef TYPE_1__ SeafileSession ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,char*,char*,char const*,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;

int
FUNC_3 (SeafileSession *VAR_1,
                                const char *VAR_2,
                                int VAR_3)
{
    char VAR_4[256];

    FUNC_1 (sizeof(VAR_4), VAR_4,
                      "REPLACE INTO Config VALUES ('%q', %d);",
                      VAR_2, VAR_3);
    if (FUNC_2 (VAR_1->config_db, VAR_4) < 0)
        return -1;

    if (FUNC_0(VAR_2, VAR_0) == 0) {
        VAR_1->http_proxy_port = VAR_3;
    }

    return 0;
}
