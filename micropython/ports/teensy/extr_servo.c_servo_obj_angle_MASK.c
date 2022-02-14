
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t servo_id; int max_usecs; int min_usecs; } ;
typedef TYPE_1__ pyb_servo_obj_t ;
typedef TYPE_1__* mp_obj_t ;


 int FUNC_0 (float,float,float,int ,int ) ;
 float FUNC_1 (int ,int ,int ,double,double) ;
 TYPE_1__* VAR_0 ;
 float FUNC_2 (TYPE_1__* const) ;
 TYPE_1__* FUNC_3 (float) ;
 int * VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static mp_obj_t FUNC_5(int VAR_2, const mp_obj_t *VAR_3) {
    pyb_servo_obj_t *VAR_4 = VAR_3[0];
    if (VAR_2 == 1) {

        float VAR_5 = FUNC_1(VAR_1[VAR_4->servo_id],
                                        FUNC_4(VAR_4->min_usecs),
                                        FUNC_4(VAR_4->max_usecs),
                                        0.0, 180.0);
        return FUNC_3(VAR_5);
    }

    float VAR_6 = FUNC_2(VAR_3[1]);
    if (VAR_6 < 0.0F) {
        VAR_6 = 0.0F;
    }
    if (VAR_6 > 180.0F) {
        VAR_6 = 180.0F;
    }
    VAR_1[VAR_4->servo_id] = FUNC_0(VAR_6,
                                                    0.0F, 180.0F,
                                                    FUNC_4(VAR_4->min_usecs),
                                                    FUNC_4(VAR_4->max_usecs));
    return VAR_0;
}
