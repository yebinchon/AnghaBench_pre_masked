
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int vt_switcher; scalar_t__ vt_switcher_active; } ;
typedef int int64_t ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct ra_ctx *VAR_0, int64_t VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;
    if (VAR_2->vt_switcher_active) {
        int64_t VAR_3 = VAR_1 - FUNC_1();
        int VAR_4 = FUNC_0((VAR_3 + 500) / 1000, 0, 10000);
        FUNC_3(&VAR_2->vt_switcher, VAR_4);
    } else {
        FUNC_2(VAR_0->vo, VAR_1);
    }
}
