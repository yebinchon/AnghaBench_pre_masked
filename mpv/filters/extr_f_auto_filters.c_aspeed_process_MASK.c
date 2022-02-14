
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_filter_command {scalar_t__ speed; int type; } ;
struct mp_filter {struct aspeed_priv* priv; } ;
struct TYPE_4__ {scalar_t__ filter; } ;
struct aspeed_priv {TYPE_1__ sub; scalar_t__ cur_speed; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mp_filter*,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct mp_filter*,int ,char*,int *) ;
 int FUNC_4 (scalar_t__,struct mp_filter_command*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct mp_filter *VAR_2)
{
    struct aspeed_priv *VAR_3 = VAR_2->priv;

    if (!FUNC_7(&VAR_3->sub))
        return;

    if (FUNC_2(VAR_3->cur_speed - 1.0) < 1e-8) {
        if (VAR_3->sub.filter)
            FUNC_1(VAR_2, "removing scaletempo\n");
        if (!FUNC_6(&VAR_3->sub))
            return;
    } else if (!VAR_3->sub.filter) {
        FUNC_1(VAR_2, "adding scaletempo\n");
        VAR_3->sub.filter =
            FUNC_3(VAR_2, VAR_1, "scaletempo", ((void*)0));
        if (!VAR_3->sub.filter) {
            FUNC_0(VAR_2, "could not create scaletempo filter\n");
            FUNC_5(&VAR_3->sub);
            return;
        }
    }

    if (VAR_3->sub.filter) {
        struct mp_filter_command VAR_4 = {
            .type = VAR_0,
            .speed = VAR_3->cur_speed,
        };
        FUNC_4(VAR_3->sub.filter, &VAR_4);
    }

    FUNC_5(&VAR_3->sub);
}
