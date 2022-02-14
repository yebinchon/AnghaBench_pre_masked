
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; scalar_t__ maxex; } ;
typedef TYPE_1__ zlexrangespec ;
typedef int sds ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(sds VAR_0, zlexrangespec *VAR_1) {
    return VAR_1->maxex ?
        (FUNC_0(VAR_0,VAR_1->max) < 0) :
        (FUNC_0(VAR_0,VAR_1->max) <= 0);
}
