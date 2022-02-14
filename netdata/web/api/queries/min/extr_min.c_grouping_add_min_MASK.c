
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_min {int count; int min; } ;
typedef int calculated_number ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef TYPE_2__ RRDR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(RRDR *VAR_0, calculated_number VAR_1) {
    if(!FUNC_1(VAR_1)) {
        struct grouping_min *VAR_2 = (struct grouping_min *)VAR_0->internal.grouping_data;

        if(!VAR_2->count || FUNC_0(VAR_1) < FUNC_0(VAR_2->min)) {
            VAR_2->min = VAR_1;
            VAR_2->count++;
        }
    }
}
