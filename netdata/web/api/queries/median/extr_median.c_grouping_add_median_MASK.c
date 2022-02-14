
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grouping_median {scalar_t__ next_pos; scalar_t__ series_size; scalar_t__* series; } ;
typedef scalar_t__ calculated_number ;
struct TYPE_6__ {scalar_t__ grouping_data; } ;
struct TYPE_7__ {TYPE_1__* st; int group; TYPE_2__ internal; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_3__ RRDR ;
typedef scalar_t__ LONG_DOUBLE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(RRDR *VAR_0, calculated_number VAR_1) {
    struct grouping_median *VAR_2 = (struct grouping_median *)VAR_0->internal.grouping_data;

    if(FUNC_2(VAR_2->next_pos >= VAR_2->series_size)) {
        FUNC_1("INTERNAL ERROR: median buffer overflow on chart '%s' - next_pos = %zu, series_size = %zu, r->group = %ld.", VAR_0->st->name, VAR_2->next_pos, VAR_2->series_size, VAR_0->group);
    }
    else {
        if(FUNC_0(VAR_1))
            VAR_2->series[VAR_2->next_pos++] = (LONG_DOUBLE)VAR_1;
    }
}
