
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct entry {int counter; int decrtime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

uint8_t FUNC_3(struct entry *VAR_2) {
    if (FUNC_0(FUNC_2(FUNC_1(((void*)0))),VAR_2->decrtime)
        >= VAR_1)
    {
        if (VAR_2->counter) {
            if (VAR_2->counter > VAR_0*2) {
                VAR_2->counter /= 2;
            } else {
                VAR_2->counter--;
            }
        }
        VAR_2->decrtime = FUNC_2(FUNC_1(((void*)0)));
    }
    return VAR_2->counter;
}
