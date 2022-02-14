
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint ;
struct TYPE_4__ {int af; int value; int used; void* strength; void* pull; void* mode; } ;
typedef TYPE_1__ pin_obj_t ;
typedef int mp_obj_t ;
typedef int WakeUpCB_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int const,int ) ;

void FUNC_2 (pin_obj_t *VAR_0, int VAR_1, uint VAR_2, uint VAR_3, int VAR_4, uint VAR_5) {
    VAR_0->mode = VAR_2, VAR_0->pull = VAR_3, VAR_0->strength = VAR_5;

    if (VAR_1 != -1) {
        VAR_0->af = VAR_1;
    }


    if (VAR_4 != -1) {
        VAR_0->value = VAR_4;
    }


    VAR_0->used = 1;
    FUNC_0 ((const pin_obj_t *)VAR_0);


    FUNC_1 ((const mp_obj_t)VAR_0, (WakeUpCB_t)FUNC_0);
}
