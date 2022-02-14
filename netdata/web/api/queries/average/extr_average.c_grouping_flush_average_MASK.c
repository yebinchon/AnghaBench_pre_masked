
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_average {double count; double sum; } ;
typedef double calculated_number ;
struct TYPE_4__ {int resampling_group; double resampling_divisor; scalar_t__ grouping_data; } ;
struct TYPE_5__ {int result_options; TYPE_1__ internal; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef TYPE_2__ RRDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

calculated_number FUNC_1(RRDR *VAR_2, RRDR_VALUE_FLAGS *VAR_3) {
    struct grouping_average *VAR_4 = (struct grouping_average *)VAR_2->internal.grouping_data;

    calculated_number VAR_5;

    if(FUNC_0(!VAR_4->count)) {
        VAR_5 = 0.0;
        *VAR_3 |= VAR_1;
    }
    else {
        if(FUNC_0(VAR_2->internal.resampling_group != 1)) {
            if (FUNC_0(VAR_2->result_options & VAR_0))
                VAR_5 = VAR_4->sum / VAR_4->count / VAR_2->internal.resampling_divisor;
            else
                VAR_5 = VAR_4->sum / VAR_2->internal.resampling_divisor;
        } else
            VAR_5 = VAR_4->sum / VAR_4->count;
    }

    VAR_4->sum = 0.0;
    VAR_4->count = 0;

    return VAR_5;
}
