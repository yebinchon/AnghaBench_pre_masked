
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int num_ports; int * ports; int client; TYPE_1__* opts; } ;
struct ao {struct priv* priv; } ;
struct TYPE_2__ {char* port; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (int ,int ,char const*) ;
 char** FUNC_3 (int ,char*,char const*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct ao *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;

    char *VAR_5 = (VAR_4->opts->port && VAR_4->opts->port[0]) ? VAR_4->opts->port : ((void*)0);
    const char **VAR_6 = ((void*)0);
    int VAR_7 = VAR_1;
    int VAR_8;

    if (!VAR_5)
        VAR_7 |= VAR_2;

    const char *VAR_9 = VAR_0;
    VAR_6 = FUNC_3(VAR_4->client, VAR_5, VAR_9, VAR_7);

    if (!VAR_6 || !VAR_6[0]) {
        FUNC_0(VAR_3, "no ports to connect to\n");
        goto err_get_ports;
    }

    for (VAR_8 = 0; VAR_8 < VAR_4->num_ports && VAR_6[VAR_8]; VAR_8++) {
        if (FUNC_2(VAR_4->client, FUNC_4(VAR_4->ports[VAR_8]),
                         VAR_6[VAR_8]))
        {
            FUNC_0(VAR_3, "connecting failed\n");
            goto err_connect;
        }
    }

    FUNC_1(VAR_6);
    return 0;

err_connect:
    FUNC_1(VAR_6);
err_get_ports:
    return -1;
}
