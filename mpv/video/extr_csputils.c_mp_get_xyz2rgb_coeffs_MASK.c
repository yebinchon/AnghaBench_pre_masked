
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_csp_primaries {int white; } ;
struct TYPE_2__ {int primaries; } ;
struct mp_csp_params {float brightness; TYPE_1__ color; } ;
struct mp_csp_col_xy {double member_0; double member_1; } ;
struct mp_cmat {float* c; int m; } ;
typedef enum mp_render_intent { ____Placeholder_mp_render_intent } mp_render_intent ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 int FUNC_1 (struct mp_csp_col_xy const,int ,int ) ;
 struct mp_csp_primaries FUNC_2 (int ) ;
 int FUNC_3 (struct mp_csp_primaries,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mp_csp_params *VAR_1,
                                  enum mp_render_intent VAR_2, struct mp_cmat *VAR_3)
{
    struct mp_csp_primaries VAR_4 = FUNC_2(VAR_1->color.primaries);
    float VAR_5 = VAR_1->brightness;
    FUNC_3(VAR_4, VAR_3->m);
    FUNC_4(VAR_3->m);


    if (VAR_2 != VAR_0) {

        static const struct mp_csp_col_xy VAR_6 = {0.314, 0.351};
        FUNC_1(VAR_6, VAR_4.white, VAR_3->m);
    }





    VAR_5 *= FUNC_0(VAR_5);

    for (int VAR_7 = 0; VAR_7 < 3; VAR_7++)
        VAR_3->c[VAR_7] = VAR_5;
}
