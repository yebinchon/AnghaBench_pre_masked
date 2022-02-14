
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int avrctx; int input; int current_pts; } ;
struct mp_filter {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct priv*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mp_filter *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    VAR_2->current_pts = VAR_0;
    FUNC_0(&VAR_2->input);

    if (!VAR_2->avrctx)
        return;





    while (FUNC_1(VAR_2->avrctx, ((void*)0), 1000) > 0) {}

}
