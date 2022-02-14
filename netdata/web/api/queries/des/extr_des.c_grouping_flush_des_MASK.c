
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_des {double level; int count; } ;
typedef double calculated_number ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef TYPE_2__ RRDR ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int) ;

calculated_number FUNC_2(RRDR *VAR_1, RRDR_VALUE_FLAGS *VAR_2) {
    struct grouping_des *VAR_3 = (struct grouping_des *)VAR_1->internal.grouping_data;

    if(FUNC_1(!VAR_3->count || !FUNC_0(VAR_3->level))) {
        *VAR_2 |= VAR_0;
        return 0.0;
    }



    return VAR_3->level;
}
