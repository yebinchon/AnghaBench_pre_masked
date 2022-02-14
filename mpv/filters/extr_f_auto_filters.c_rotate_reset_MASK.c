
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rotate_priv {int sub; } ;
struct mp_filter {struct rotate_priv* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    struct rotate_priv *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_1->sub);
}
