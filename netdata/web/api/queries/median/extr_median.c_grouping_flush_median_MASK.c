
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_median {int next_pos; scalar_t__* series; } ;
typedef double calculated_number ;
struct TYPE_4__ {scalar_t__ grouping_data; } ;
struct TYPE_5__ {TYPE_1__ internal; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef TYPE_2__ RRDR ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (int) ;

calculated_number FUNC_4(RRDR *VAR_1, RRDR_VALUE_FLAGS *VAR_2) {
    struct grouping_median *VAR_3 = (struct grouping_median *)VAR_1->internal.grouping_data;

    calculated_number VAR_4;

    if(FUNC_3(!VAR_3->next_pos)) {
        VAR_4 = 0.0;
        *VAR_2 |= VAR_0;
    }
    else {
        if(VAR_3->next_pos > 1) {
            FUNC_2(VAR_3->series, VAR_3->next_pos);
            VAR_4 = (calculated_number)FUNC_1(VAR_3->series, VAR_3->next_pos);
        }
        else
            VAR_4 = (calculated_number)VAR_3->series[0];

        if(!FUNC_0(VAR_4)) {
            VAR_4 = 0.0;
            *VAR_2 |= VAR_0;
        }


    }

    VAR_3->next_pos = 0;

    return VAR_4;
}
