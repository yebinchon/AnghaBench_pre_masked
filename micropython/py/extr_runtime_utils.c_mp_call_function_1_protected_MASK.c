
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef int mp_obj_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

mp_obj_t FUNC_5(mp_obj_t VAR_2, mp_obj_t VAR_3) {
    nlr_buf_t VAR_4;
    if (FUNC_4(&VAR_4) == 0) {
        mp_obj_t VAR_5 = FUNC_1(VAR_2, VAR_3);
        FUNC_3();
        return VAR_5;
    } else {
        FUNC_2(&VAR_1, FUNC_0(VAR_4.ret_val));
        return VAR_0;
    }
}
