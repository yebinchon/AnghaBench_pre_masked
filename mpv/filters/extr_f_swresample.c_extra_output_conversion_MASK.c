
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_aframe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double,double,double) ;
 int FUNC_1 (int ) ;
 float FUNC_2 (float,float,float) ;
 int ** FUNC_3 (struct mp_aframe*) ;
 int FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*) ;
 int FUNC_6 (struct mp_aframe*) ;

__attribute__((used)) static void FUNC_7(struct mp_aframe *VAR_2)
{
    int VAR_3 = FUNC_1(FUNC_4(VAR_2));
    int VAR_4 = FUNC_5(VAR_2);
    uint8_t **VAR_5 = FUNC_3(VAR_2);
    if (!VAR_5)
        return;
    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        void *VAR_7 = VAR_5[VAR_6];
        int VAR_8 = FUNC_6(VAR_2);
        if (VAR_3 == VAR_1) {
            for (int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
                ((float *)VAR_7)[VAR_9] = FUNC_2(((float *)VAR_7)[VAR_9], -1.0f, 1.0f);
        } else if (VAR_3 == VAR_0) {
            for (int VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
                ((double *)VAR_7)[VAR_10] = FUNC_0(((double *)VAR_7)[VAR_10], -1.0, 1.0);
        }
    }
}
