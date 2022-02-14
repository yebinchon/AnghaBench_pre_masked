
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grouping_stddev {int count; } ;
typedef double calculated_number ;
struct TYPE_5__ {scalar_t__ grouping_data; } ;
struct TYPE_6__ {TYPE_1__ internal; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef TYPE_2__ RRDR ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 double FUNC_3 (struct grouping_stddev*) ;
 double FUNC_4 (struct grouping_stddev*) ;
 scalar_t__ FUNC_5 (int) ;

calculated_number FUNC_6(RRDR *VAR_1, RRDR_VALUE_FLAGS *VAR_2) {
    struct grouping_stddev *VAR_3 = (struct grouping_stddev *)VAR_1->internal.grouping_data;

    calculated_number VAR_4;

    if(FUNC_2(VAR_3->count > 1)) {
        calculated_number VAR_5 = FUNC_3(VAR_3);
        VAR_4 = 100.0 * FUNC_4(VAR_3) / ((VAR_5 < 0)? -VAR_5 : VAR_5);

        if(FUNC_5(!FUNC_0(VAR_4))) {
            VAR_4 = 0.0;
            *VAR_2 |= VAR_0;
        }
    }
    else if(VAR_3->count == 1) {

        VAR_4 = 0.0;
    }
    else {

        VAR_4 = 0.0;
        *VAR_2 |= VAR_0;
    }

    FUNC_1(VAR_1);

    return VAR_4;
}
