
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {TYPE_2__** udi_apis; TYPE_1__* desc; } ;
struct TYPE_5__ {int (* sof_notify ) () ;} ;
struct TYPE_4__ {size_t bNumInterfaces; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;

void FUNC_1(void) {
    uint8_t VAR_2;

    if (VAR_0) {
        for (VAR_2 = 0; VAR_2 < VAR_1->desc->bNumInterfaces; VAR_2++) {
            if (VAR_1->udi_apis[VAR_2]->sof_notify != ((void*)0)) {
                VAR_1->udi_apis[VAR_2]->sof_notify();
            }
        }
    }
}
