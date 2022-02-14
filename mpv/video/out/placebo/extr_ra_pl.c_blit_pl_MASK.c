
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h; int w; } ;
struct ra_tex {int priv; TYPE_1__ params; } ;
struct ra {int dummy; } ;
struct pl_rect3d {void* y1; void* x1; void* y0; void* x0; int member_0; } ;
struct mp_rect {int y1; int x1; int y0; int x0; } ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ra*) ;
 int FUNC_3 (int ,int ,int ,struct pl_rect3d,struct pl_rect3d) ;

__attribute__((used)) static void FUNC_4(struct ra *VAR_0, struct ra_tex *VAR_1, struct ra_tex *VAR_2,
                    struct mp_rect *VAR_3, struct mp_rect *VAR_4)
{
    struct pl_rect3d VAR_5 = {0}, VAR_6 = {0};
    if (VAR_4) {
        VAR_5.x0 = FUNC_1(FUNC_0(VAR_4->x0, 0), VAR_2->params.w);
        VAR_5.y0 = FUNC_1(FUNC_0(VAR_4->y0, 0), VAR_2->params.h);
        VAR_5.x1 = FUNC_1(FUNC_0(VAR_4->x1, 0), VAR_2->params.w);
        VAR_5.y1 = FUNC_1(FUNC_0(VAR_4->y1, 0), VAR_2->params.h);
    }

    if (VAR_3) {
        VAR_6.x0 = FUNC_1(FUNC_0(VAR_3->x0, 0), VAR_1->params.w);
        VAR_6.y0 = FUNC_1(FUNC_0(VAR_3->y0, 0), VAR_1->params.h);
        VAR_6.x1 = FUNC_1(FUNC_0(VAR_3->x1, 0), VAR_1->params.w);
        VAR_6.y1 = FUNC_1(FUNC_0(VAR_3->y1, 0), VAR_1->params.h);
    }

    FUNC_3(FUNC_2(VAR_0), VAR_1->priv, VAR_2->priv, VAR_6, VAR_5);
}
