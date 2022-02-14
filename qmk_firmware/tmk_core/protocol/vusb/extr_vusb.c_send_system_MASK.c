
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ usage; int report_id; } ;
typedef TYPE_1__ report_extra_t ;
typedef int report ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(uint16_t VAR_1) {
    static uint16_t VAR_2 = 0;
    if (VAR_1 == VAR_2) return;
    VAR_2 = VAR_1;

    report_extra_t VAR_3 = {.report_id = VAR_0, .usage = VAR_1};
    if (FUNC_0()) {
        FUNC_1((void *)&VAR_3, sizeof(VAR_3));
    }
}
