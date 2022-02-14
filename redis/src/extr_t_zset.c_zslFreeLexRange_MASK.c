
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ min; scalar_t__ max; } ;
typedef TYPE_1__ zlexrangespec ;
struct TYPE_5__ {scalar_t__ minstring; scalar_t__ maxstring; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(zlexrangespec *VAR_1) {
    if (VAR_1->min != VAR_0.minstring &&
        VAR_1->min != VAR_0.maxstring) FUNC_0(VAR_1->min);
    if (VAR_1->max != VAR_0.minstring &&
        VAR_1->max != VAR_0.maxstring) FUNC_0(VAR_1->max);
}
