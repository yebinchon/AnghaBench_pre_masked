
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {TYPE_1__* opts; } ;
struct mp_filter_command {scalar_t__ type; int speed; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_2__ {int speed_opt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct priv*,int ) ;

__attribute__((used)) static bool FUNC_1(struct mp_filter *VAR_3, struct mp_filter_command *VAR_4)
{
    struct priv *VAR_5 = VAR_3->priv;

    if (VAR_4->type == VAR_0) {
        if (VAR_5->opts->speed_opt & VAR_2) {
            if (VAR_5->opts->speed_opt & VAR_1)
                return 0;
            FUNC_0(VAR_5, VAR_4->speed);
            return 1;
        } else if (VAR_5->opts->speed_opt & VAR_1) {
            FUNC_0(VAR_5, VAR_4->speed);
            return 0;
        }
    }

    return 0;
}
