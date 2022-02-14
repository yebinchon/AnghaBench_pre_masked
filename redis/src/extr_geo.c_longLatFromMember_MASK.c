
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double,double*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,double*) ;

int FUNC_2(robj *VAR_2, robj *VAR_3, double *VAR_4) {
    double VAR_5 = 0;

    if (FUNC_1(VAR_2, VAR_3->ptr, &VAR_5) == VAR_0) return VAR_0;
    if (!FUNC_0(VAR_5, VAR_4)) return VAR_0;
    return VAR_1;
}
