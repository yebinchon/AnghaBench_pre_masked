
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int num_afs; TYPE_1__* af_list; } ;
typedef TYPE_2__ pin_obj_t ;
typedef int mp_obj_t ;
struct TYPE_4__ {scalar_t__ fn; scalar_t__ unit; scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int const) ;

uint8_t FUNC_2 (const mp_obj_t VAR_1, uint8_t VAR_2, uint8_t VAR_3) {
    pin_obj_t *VAR_4 = FUNC_1(VAR_1);
    for (int VAR_5 = 0; VAR_5 < VAR_4->num_afs; VAR_5++) {
        if (VAR_4->af_list[VAR_5].fn == VAR_2 && VAR_4->af_list[VAR_5].unit == VAR_3) {
            return VAR_4->af_list[VAR_5].type;
        }
    }
    FUNC_0(VAR_0);
}
