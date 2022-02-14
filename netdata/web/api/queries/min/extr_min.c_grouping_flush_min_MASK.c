
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_min {double min; scalar_t__ count; } ;
typedef double calculated_number ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef TYPE_2__ RRDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

calculated_number FUNC_1(RRDR *VAR_1, RRDR_VALUE_FLAGS *VAR_2) {
    struct grouping_min *VAR_3 = (struct grouping_min *)VAR_1->internal.grouping_data;

    calculated_number VAR_4;

    if(FUNC_0(!VAR_3->count)) {
        VAR_4 = 0.0;
        *VAR_2 |= VAR_0;
    }
    else {
        VAR_4 = VAR_3->min;
    }

    VAR_3->min = 0.0;
    VAR_3->count = 0;

    return VAR_4;
}
