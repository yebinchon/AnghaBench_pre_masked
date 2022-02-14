
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_median {scalar_t__ next_pos; } ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef TYPE_2__ RRDR ;



void FUNC_0(RRDR *VAR_0) {
    struct grouping_median *VAR_1 = (struct grouping_median *)VAR_0->internal.grouping_data;
    VAR_1->next_pos = 0;
}
