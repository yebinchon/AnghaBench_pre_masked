
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int state; } ;
struct mp_filter {struct priv* priv; } ;


 int FUNC_0 (struct mp_filter*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    FUNC_0(VAR_2, &VAR_3->state, VAR_1, VAR_0);
}
