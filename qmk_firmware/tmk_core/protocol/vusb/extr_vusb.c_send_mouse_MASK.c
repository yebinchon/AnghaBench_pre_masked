
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int report; int report_id; } ;
typedef TYPE_1__ vusb_mouse_report_t ;
typedef int report_mouse_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(report_mouse_t *VAR_1) {
    vusb_mouse_report_t VAR_2 = {.report_id = VAR_0, .report = *VAR_1};
    if (FUNC_0()) {
        FUNC_1((void *)&VAR_2, sizeof(vusb_mouse_report_t));
    }
}
