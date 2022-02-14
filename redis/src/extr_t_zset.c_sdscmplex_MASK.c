
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_2__ {scalar_t__ minstring; scalar_t__ maxstring; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(sds VAR_1, sds VAR_2) {
    if (VAR_1 == VAR_2) return 0;
    if (VAR_1 == VAR_0.minstring || VAR_2 == VAR_0.maxstring) return -1;
    if (VAR_1 == VAR_0.maxstring || VAR_2 == VAR_0.minstring) return 1;
    return FUNC_0(VAR_1,VAR_2);
}
