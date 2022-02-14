
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filter; } ;
struct rotate_priv {TYPE_1__ sub; } ;
struct mp_filter_command {scalar_t__ type; int is_active; } ;
struct mp_filter {struct rotate_priv* priv; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mp_filter *VAR_1, struct mp_filter_command *VAR_2)
{
    struct rotate_priv *VAR_3 = VAR_1->priv;

    if (VAR_2->type == VAR_0) {
        VAR_2->is_active = !!VAR_3->sub.filter;
        return 1;
    }
    return 0;
}
