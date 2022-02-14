
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grouping_des {int dummy; } ;
typedef int calculated_number ;
struct TYPE_4__ {int points_wanted; } ;
struct TYPE_5__ {int group; TYPE_1__ internal; } ;
typedef TYPE_2__ RRDR ;


 int VAR_0 ;

__attribute__((used)) static inline calculated_number FUNC_0(RRDR *VAR_1, struct grouping_des *VAR_2) {
    (void)VAR_2;

    calculated_number VAR_3;
    if(VAR_1->group == 1) {

        VAR_3 = VAR_1->internal.points_wanted;
    }
    else {

        VAR_3 = VAR_1->group;
    }



    return (VAR_3 > VAR_0) ? VAR_0 : VAR_3;
}
