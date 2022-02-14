
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter_command {scalar_t__ type; int is_active; int speed; } ;
struct mp_filter {struct aspeed_priv* priv; } ;
struct TYPE_2__ {int filter; } ;
struct aspeed_priv {TYPE_1__ sub; int cur_speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct mp_filter *VAR_2, struct mp_filter_command *VAR_3)
{
    struct aspeed_priv *VAR_4 = VAR_2->priv;

    if (VAR_3->type == VAR_1) {
        VAR_4->cur_speed = VAR_3->speed;
        return 1;
    }

    if (VAR_3->type == VAR_0) {
        VAR_3->is_active = !!VAR_4->sub.filter;
        return 1;
    }

    return 0;
}
