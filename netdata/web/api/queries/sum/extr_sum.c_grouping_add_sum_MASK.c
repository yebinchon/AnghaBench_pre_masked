
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_sum {int count; int sum; } ;
typedef scalar_t__ calculated_number ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef TYPE_2__ RRDR ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(RRDR *VAR_0, calculated_number VAR_1) {
    if(!FUNC_0(VAR_1)) {
        struct grouping_sum *VAR_2 = (struct grouping_sum *)VAR_0->internal.grouping_data;
        VAR_2->sum += VAR_1;
        VAR_2->count++;
    }
}
