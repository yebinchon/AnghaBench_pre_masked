
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_backend {struct priv* priv; } ;
struct priv {int renderer; } ;
struct mp_rect {int dummy; } ;
struct mp_osd_res {int dummy; } ;


 int FUNC_0 (int ,struct mp_rect*,struct mp_rect*,struct mp_osd_res*) ;

__attribute__((used)) static void FUNC_1(struct render_backend *VAR_0, struct mp_rect *VAR_1,
                   struct mp_rect *VAR_2, struct mp_osd_res *VAR_3)
{
    struct priv *VAR_4 = VAR_0->priv;

    FUNC_0(VAR_4->renderer, VAR_1, VAR_2, VAR_3);
}
