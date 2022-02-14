
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int format_change_cont; int format_change_blocked; int sub; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_1->sub);

    VAR_1->format_change_cont = 0;
    VAR_1->format_change_blocked = 0;
}
