
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct TYPE_2__ {int SWIER1; int SWIER; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_0(uint VAR_2) {
    if (VAR_2 >= VAR_1) {
        return;
    }





    VAR_0->SWIER &= ~(1 << VAR_2);
    VAR_0->SWIER |= (1 << VAR_2);

}
