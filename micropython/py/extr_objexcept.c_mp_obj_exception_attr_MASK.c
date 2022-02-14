
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qstr ;
typedef int mp_obj_t ;
struct TYPE_4__ {int * type; } ;
struct TYPE_5__ {TYPE_1__ base; int args; scalar_t__ traceback_len; } ;
typedef TYPE_2__ mp_obj_exception_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;

void FUNC_3(mp_obj_t VAR_6, qstr VAR_7, mp_obj_t *VAR_8) {
    mp_obj_exception_t *VAR_9 = FUNC_1(VAR_6);
    if (VAR_8[0] != VAR_0) {

        if (VAR_7 == VAR_1 && VAR_8[1] == VAR_4) {






            VAR_9->traceback_len = 0;
            VAR_8[0] = VAR_0;
        }
        return;
    }
    if (VAR_7 == VAR_2) {
        VAR_8[0] = FUNC_0(VAR_9->args);
    } else if (VAR_9->base.type == &VAR_5 && VAR_7 == VAR_3) {
        VAR_8[0] = FUNC_2(VAR_6);
    }
}
