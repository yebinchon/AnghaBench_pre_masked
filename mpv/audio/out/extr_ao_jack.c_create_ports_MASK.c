
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_ports; int * ports; int client; } ;
struct ao {struct priv* priv; } ;
typedef int pname ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct ao *VAR_2, int VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    char VAR_5[30];
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        FUNC_2(VAR_5, sizeof(VAR_5), "out_%d", VAR_6);
        VAR_4->ports[VAR_6] = FUNC_1(VAR_4->client, VAR_5, VAR_0,
                                         VAR_1, 0);

        if (!VAR_4->ports[VAR_6]) {
            FUNC_0(VAR_2, "not enough ports available\n");
            goto err_port_register;
        }
    }

    VAR_4->num_ports = VAR_3;
    return 0;

err_port_register:
    return -1;
}
