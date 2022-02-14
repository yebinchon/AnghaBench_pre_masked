
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_min {scalar_t__ count; scalar_t__ min; } ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef TYPE_2__ RRDR ;



void FUNC_0(RRDR *VAR_0) {
    struct grouping_min *VAR_1 = (struct grouping_min *)VAR_0->internal.grouping_data;
    VAR_1->min = 0;
    VAR_1->count = 0;
}
