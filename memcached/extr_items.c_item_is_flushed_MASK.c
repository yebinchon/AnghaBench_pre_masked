
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ rel_time_t ;
struct TYPE_5__ {scalar_t__ time; } ;
typedef TYPE_1__ item ;
struct TYPE_6__ {scalar_t__ oldest_live; scalar_t__ oldest_cas; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_1(item *VAR_2) {
    rel_time_t VAR_3 = VAR_1.oldest_live;
    uint64_t VAR_4 = FUNC_0(VAR_2);
    uint64_t VAR_5 = VAR_1.oldest_cas;
    if (VAR_3 == 0 || VAR_3 > VAR_0)
        return 0;
    if ((VAR_2->time <= VAR_3)
            || (VAR_5 != 0 && VAR_4 != 0 && VAR_4 < VAR_5)) {
        return 1;
    }
    return 0;
}
