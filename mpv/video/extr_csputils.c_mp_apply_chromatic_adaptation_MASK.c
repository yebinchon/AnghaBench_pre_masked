
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_csp_col_xy {scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (float**) ;
 int FUNC_2 (float**,float**) ;
 float FUNC_3 (struct mp_csp_col_xy) ;
 float FUNC_4 (struct mp_csp_col_xy) ;

__attribute__((used)) static void FUNC_5(struct mp_csp_col_xy VAR_0,
                                          struct mp_csp_col_xy VAR_1, float VAR_2[3][3])
{


    if (FUNC_0(VAR_0.x - VAR_1.x) < 1e-6 && FUNC_0(VAR_0.y - VAR_1.y) < 1e-6)
        return;



    float VAR_3[3][2], VAR_4[3][3] = {{0}};



    float VAR_5[3][3] = {
        { 0.8951, 0.2664, -0.1614 },
        { -0.7502, 1.7135, 0.0367 },
        { 0.0389, -0.0685, 1.0296 },
    };

    for (int VAR_6 = 0; VAR_6 < 3; VAR_6++) {

        VAR_3[VAR_6][0] = VAR_5[VAR_6][0] * FUNC_3(VAR_0)
                + VAR_5[VAR_6][1] * 1
                + VAR_5[VAR_6][2] * FUNC_4(VAR_0);


        VAR_3[VAR_6][1] = VAR_5[VAR_6][0] * FUNC_3(VAR_1)
                + VAR_5[VAR_6][1] * 1
                + VAR_5[VAR_6][2] * FUNC_4(VAR_1);
    }


    for (int VAR_7 = 0; VAR_7 < 3; VAR_7++)
        VAR_4[VAR_7][VAR_7] = VAR_3[VAR_7][1] / VAR_3[VAR_7][0];

    FUNC_2(VAR_4, VAR_5);


    FUNC_1(VAR_5);
    FUNC_2(VAR_2, VAR_5);
    FUNC_2(VAR_2, VAR_4);
}
