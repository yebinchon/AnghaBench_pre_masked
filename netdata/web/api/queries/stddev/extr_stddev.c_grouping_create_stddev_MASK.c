
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grouping_stddev {int dummy; } ;
struct TYPE_3__ {long group; } ;
typedef TYPE_1__ RRDR ;
typedef int LONG_DOUBLE ;


 void* FUNC_0 (int,int) ;

void *FUNC_1(RRDR *VAR_0) {
    long VAR_1 = VAR_0->group;
    if(VAR_1 < 0) VAR_1 = 0;

    return FUNC_0(1, sizeof(struct grouping_stddev) + VAR_1 * sizeof(LONG_DOUBLE));
}
