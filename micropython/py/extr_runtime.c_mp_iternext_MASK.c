
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
struct TYPE_7__ {scalar_t__ (* iternext ) (scalar_t__) ;} ;
typedef TYPE_2__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;
struct TYPE_8__ {int * type; } ;
typedef TYPE_3__ mp_obj_base_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

mp_obj_t FUNC_14(mp_obj_t VAR_7) {
    FUNC_1();
    mp_obj_type_t *VAR_8 = FUNC_4(VAR_7);
    if (VAR_8->iternext != ((void*)0)) {
        return VAR_8->iternext(VAR_7);
    } else {

        mp_obj_t VAR_9[2];
        FUNC_3(VAR_7, VAR_4, VAR_9);
        if (VAR_9[0] != VAR_2) {

            nlr_buf_t VAR_10;
            if (FUNC_11(&VAR_10) == 0) {
                mp_obj_t VAR_11 = FUNC_2(0, 0, VAR_9);
                FUNC_10();
                return VAR_11;
            } else {
                if (FUNC_6(FUNC_0(((mp_obj_base_t*)VAR_10.ret_val)->type), FUNC_0(&VAR_5))) {
                    return VAR_3;
                } else {
                    FUNC_9(VAR_10.ret_val);
                }
            }
        } else {
            if (VAR_0 == VAR_1) {
                FUNC_8("object not an iterator");
            } else {
                FUNC_12(FUNC_7(&VAR_6,
                    "'%s' object isn't an iterator", FUNC_5(VAR_7)));
            }
        }
    }
}
