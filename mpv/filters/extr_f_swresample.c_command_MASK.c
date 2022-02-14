
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int cmd_speed; } ;
struct mp_filter_command {scalar_t__ type; int speed; } ;
struct mp_filter {struct priv* priv; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mp_filter *VAR_1, struct mp_filter_command *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;

    if (VAR_2->type == VAR_0) {
        VAR_3->cmd_speed = VAR_2->speed;
        return 1;
    }

    return 0;
}
