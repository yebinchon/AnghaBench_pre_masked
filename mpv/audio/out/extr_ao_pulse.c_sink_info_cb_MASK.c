
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sink_cb_ctx {TYPE_3__* ao; int list; } ;
struct priv {int mainloop; } ;
struct ao_device_desc {int desc; int name; } ;
struct TYPE_4__ {int description; int name; } ;
typedef TYPE_1__ pa_sink_info ;
typedef int pa_context ;
struct TYPE_5__ {struct priv* priv; } ;


 int FUNC_0 (int ,TYPE_3__*,struct ao_device_desc*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(pa_context *VAR_0, const pa_sink_info *VAR_1, int VAR_2, void *VAR_3)
{
    struct sink_cb_ctx *VAR_4 = VAR_3;
    struct priv *VAR_5 = VAR_4->ao->priv;

    if (VAR_2) {
        FUNC_1(VAR_5->mainloop, 0);
        return;
    }

    struct ao_device_desc VAR_6 = {.name = VAR_1->name, .desc = VAR_1->description};
    FUNC_0(VAR_4->list, VAR_4->ao, &VAR_6);
}
