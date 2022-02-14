
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct priv {int client; int num_ports; TYPE_1__* opts; } ;
struct mp_chmap_sel {int member_0; } ;
struct TYPE_5__ {int num; } ;
struct ao {TYPE_2__ channels; int samplerate; int format; int global; struct priv* priv; } ;
typedef int jack_options_t ;
struct TYPE_4__ {int stdlayout; int client_name; int autostart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*,struct mp_chmap_sel*,TYPE_2__*) ;
 int FUNC_2 (struct ao*,struct mp_chmap_sel*,TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct ao*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,struct ao*) ;
 int FUNC_8 (int ,int ,struct ao*) ;
 int FUNC_9 (int ,int ,struct ao*) ;
 int FUNC_10 (struct mp_chmap_sel*) ;
 int FUNC_11 (struct mp_chmap_sel*) ;
 TYPE_1__* FUNC_12 (struct ao*,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct ao *VAR_7)
{
    struct priv *VAR_8 = VAR_7->priv;
    struct mp_chmap_sel VAR_9 = {0};
    jack_options_t VAR_10;

    VAR_8->opts = FUNC_12(VAR_7, VAR_7->global, &VAR_3);

    VAR_7->format = VAR_0;

    switch (VAR_8->opts->stdlayout) {
    case 0:
        FUNC_11(&VAR_9);
        break;

    default:
        FUNC_10(&VAR_9);
    }

    if (!FUNC_1(VAR_7, &VAR_9, &VAR_7->channels))
        goto err_chmap;

    VAR_10 = VAR_2;
    if (!VAR_8->opts->autostart)
        VAR_10 |= VAR_1;

    VAR_8->client = FUNC_5(VAR_8->opts->client_name, VAR_10, ((void*)0));
    if (!VAR_8->client) {
        FUNC_0(VAR_7, "cannot open server\n");
        goto err_client_open;
    }

    if (FUNC_3(VAR_7, VAR_7->channels.num))
        goto err_create_ports;

    FUNC_9(VAR_8->client, VAR_6, VAR_7);

    VAR_7->samplerate = FUNC_6(VAR_8->client);

    FUNC_7(VAR_8->client, VAR_4, VAR_7);
    FUNC_8(VAR_8->client, VAR_5, VAR_7);

    if (!FUNC_2(VAR_7, &VAR_9, &VAR_7->channels, VAR_8->num_ports))
        goto err_chmap_sel_get_def;

    return 0;

err_chmap_sel_get_def:
err_create_ports:
    FUNC_4(VAR_8->client);
err_client_open:
err_chmap:
    return -1;
}
