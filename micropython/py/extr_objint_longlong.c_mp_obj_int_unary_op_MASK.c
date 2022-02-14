
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int mp_unary_op_t ;
typedef TYPE_1__* mp_obj_t ;
struct TYPE_13__ {int val; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef int mp_int_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;






 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int ) ;

mp_obj_t FUNC_5(mp_unary_op_t VAR_1, mp_obj_t VAR_2) {
    mp_obj_int_t *VAR_3 = VAR_2;
    switch (VAR_1) {
        case 132: return FUNC_3(VAR_3->val != 0);



        case 131: return FUNC_1((mp_int_t)VAR_3->val);

        case 128: return VAR_2;
        case 129: return FUNC_4(-VAR_3->val);
        case 130: return FUNC_4(~VAR_3->val);
        case 133: {
            mp_obj_int_t *VAR_4 = FUNC_2(VAR_2);
            if (VAR_4->val >= 0) {
                return VAR_2;
            }
            VAR_4 = FUNC_4(VAR_4->val);

            VAR_4->val = -VAR_4->val;
            return FUNC_0(VAR_4);
        }
        default: return VAR_0;
    }
}
