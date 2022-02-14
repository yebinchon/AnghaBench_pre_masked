
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iget; scalar_t__ iput; } ;


 uintptr_t VAR_0 ;
 TYPE_1__ VAR_1 ;

uintptr_t FUNC_0(uintptr_t VAR_2) {
    uintptr_t VAR_3 = 0;
    if ((VAR_2 & VAR_0) && VAR_1.iget != VAR_1.iput) {
        VAR_3 |= VAR_0;
    }
    return VAR_3;
}
