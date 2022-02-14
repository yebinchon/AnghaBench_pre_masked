
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mp_obj_t ;
typedef int * mp_call_fun_t ;
struct TYPE_2__ {int * call; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;

bool FUNC_2(mp_obj_t VAR_1) {
    mp_call_fun_t VAR_2 = FUNC_0(VAR_1)->call;
    if (VAR_2 != VAR_0) {
        return VAR_2 != ((void*)0);
    }
    return FUNC_1(VAR_1);
}
