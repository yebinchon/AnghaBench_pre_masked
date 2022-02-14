
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
struct priv {TYPE_2__ sub; } ;
struct mp_filter {struct priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (struct mp_filter*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (!FUNC_3(&VAR_3->sub))
        return;

    if (VAR_3->sub.frame.type == VAR_1) {
        FUNC_1(VAR_2);
        return;
    }

    if (VAR_3->sub.frame.type == VAR_0) {
        FUNC_0(VAR_2);
        return;
    }

    FUNC_2(&VAR_3->sub);
}
