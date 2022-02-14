
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvctx {scalar_t__ cached_csp; int xv_port; } ;
struct vo {struct xvctx* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct vo*,int ,char*,int*) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_2)
{
    struct xvctx *VAR_3 = VAR_2->priv;
    VAR_3->cached_csp = 0;
    int VAR_4;
    if (FUNC_0(VAR_2, VAR_3->xv_port, "bt_709", &VAR_4))
        VAR_3->cached_csp = VAR_4 == 100 ? VAR_1 : VAR_0;
}
