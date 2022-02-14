
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int sent_final; int pending; scalar_t__ rubber_delay; scalar_t__ rubber; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->rubber)
        FUNC_1(VAR_1->rubber);
    VAR_1->rubber_delay = 0;
    VAR_1->sent_final = 0;
    FUNC_0(&VAR_1->pending);
}
