
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {scalar_t__ os_wnd; scalar_t__ os_dc; scalar_t__ os_ctx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_4(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->os_ctx) {
        FUNC_3(VAR_1->os_dc, ((void*)0));
        FUNC_2(VAR_1->os_ctx);
    }
    if (VAR_1->os_dc)
        FUNC_1(VAR_1->os_wnd, VAR_1->os_dc);
    if (VAR_1->os_wnd)
        FUNC_0(VAR_1->os_wnd);
}
