
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sink_cb_ctx {struct ao_device_list* member_1; struct ao* member_0; } ;
struct priv {int context; int mainloop; } ;
struct ao_device_list {int dummy; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int ,int ,struct sink_cb_ctx*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_1, struct ao_device_list *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    struct sink_cb_ctx VAR_4 = {VAR_1, VAR_2};

    FUNC_1(VAR_3->mainloop);
    FUNC_2(VAR_3, FUNC_0(VAR_3->context, VAR_0, &VAR_4));
}
