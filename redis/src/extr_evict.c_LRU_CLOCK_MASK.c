
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hz; unsigned int lruclock; } ;


 int VAR_0 ;
 unsigned int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

unsigned int FUNC_1(void) {
    unsigned int VAR_2;
    if (1000/VAR_1.hz <= VAR_0) {
        VAR_2 = VAR_1.lruclock;
    } else {
        VAR_2 = FUNC_0();
    }
    return VAR_2;
}
