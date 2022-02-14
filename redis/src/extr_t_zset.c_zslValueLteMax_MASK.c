
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double max; scalar_t__ maxex; } ;
typedef TYPE_1__ zrangespec ;



int FUNC_0(double VAR_0, zrangespec *VAR_1) {
    return VAR_1->maxex ? (VAR_0 < VAR_1->max) : (VAR_0 <= VAR_1->max);
}
