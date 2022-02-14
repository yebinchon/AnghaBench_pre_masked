
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_csp_primaries {int white; } ;
typedef enum mp_render_intent { ____Placeholder_mp_render_intent } mp_render_intent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,float**) ;
 int FUNC_1 (struct mp_csp_primaries,float**) ;
 int FUNC_2 (float**) ;
 int FUNC_3 (float**,float**) ;

void FUNC_4(struct mp_csp_primaries VAR_2, struct mp_csp_primaries VAR_3,
                       enum mp_render_intent VAR_4, float VAR_5[3][3])
{
    float VAR_6[3][3];



    if (VAR_4 == VAR_1) {
        for (int VAR_7 = 0; VAR_7 < 3; VAR_7++)
            VAR_5[VAR_7][VAR_7] = 1;
        return;
    }







    FUNC_1(VAR_3, VAR_5);
    FUNC_2(VAR_5);


    if (VAR_4 != VAR_0)
        FUNC_0(VAR_2.white, VAR_3.white, VAR_5);


    FUNC_1(VAR_2, VAR_6);
    FUNC_3(VAR_5, VAR_6);
}
