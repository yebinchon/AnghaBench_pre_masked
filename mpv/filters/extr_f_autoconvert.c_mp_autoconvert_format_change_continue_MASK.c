
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int format_change_blocked; int format_change_cont; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {struct priv* priv; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct mp_autoconvert *VAR_0)
{
    struct priv *VAR_1 = VAR_0->f->priv;

    if (VAR_1->format_change_blocked) {
        VAR_1->format_change_cont = 1;
        VAR_1->format_change_blocked = 0;
        FUNC_0(VAR_0->f);
    }
}
