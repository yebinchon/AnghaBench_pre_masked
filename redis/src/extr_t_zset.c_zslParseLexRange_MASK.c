
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int maxex; int * max; int minex; int * min; } ;
typedef TYPE_1__ zlexrangespec ;
struct TYPE_9__ {scalar_t__ encoding; } ;
typedef TYPE_2__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int **,int *) ;

int FUNC_2(robj *VAR_3, robj *VAR_4, zlexrangespec *VAR_5) {


    if (VAR_3->encoding == VAR_2 ||
        VAR_4->encoding == VAR_2) return VAR_0;

    VAR_5->min = VAR_5->max = ((void*)0);
    if (FUNC_1(VAR_3, &VAR_5->min, &VAR_5->minex) == VAR_0 ||
        FUNC_1(VAR_4, &VAR_5->max, &VAR_5->maxex) == VAR_0) {
        FUNC_0(VAR_5);
        return VAR_0;
    } else {
        return VAR_1;
    }
}
