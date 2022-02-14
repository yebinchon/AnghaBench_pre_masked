
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filter; } ;
struct rotate_priv {TYPE_1__ sub; } ;
struct mp_filter {struct rotate_priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    struct rotate_priv *VAR_1 = VAR_0->priv;

    FUNC_1(&VAR_1->sub);
    FUNC_0(&VAR_1->sub.filter);
}
