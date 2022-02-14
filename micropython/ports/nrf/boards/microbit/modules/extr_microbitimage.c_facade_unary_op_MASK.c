
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int string; } ;
typedef TYPE_1__ string_image_facade_t ;
typedef int mp_unary_op_t ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static mp_obj_t FUNC_1(mp_unary_op_t VAR_1, mp_obj_t VAR_2) {
    string_image_facade_t *VAR_3 = (string_image_facade_t *)VAR_2;
    switch (VAR_1) {
        case 128:
            return FUNC_0(VAR_3->string);
        default: return VAR_0;
    }
}
