
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint ;
struct TYPE_3__ {int (* fn ) (TYPE_1__*) ;} ;
struct ble_npl_callout {int active; TYPE_1__ ev; scalar_t__ evq; scalar_t__ ticks; struct ble_npl_callout* nextc; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (char*,struct ble_npl_callout*,...) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 struct ble_npl_callout* VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void) {
    uint32_t VAR_1 = FUNC_2();
    for (struct ble_npl_callout *VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->nextc) {
        if (!VAR_2->active) {
            continue;
        }
        if ((int32_t)(VAR_1 - VAR_2->ticks) >= 0) {
            FUNC_0("callout_run(%p) tnow=%u ticks=%u evq=%p\n", VAR_2, (uint)VAR_1, (uint)VAR_2->ticks, VAR_2->evq);
            VAR_2->active = 0;
            if (VAR_2->evq) {
                FUNC_1(VAR_2->evq, &VAR_2->ev);
            } else {
                VAR_2->ev.fn(&VAR_2->ev);
            }
            FUNC_0("callout_run(%p) done\n", VAR_2);
        }
    }
}
