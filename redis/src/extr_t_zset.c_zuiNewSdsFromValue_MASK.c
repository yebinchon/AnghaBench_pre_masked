
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int ell; int elen; scalar_t__ estr; int * ele; } ;
typedef TYPE_1__ zsetopval ;
typedef int * sds ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (char*,int ) ;

sds FUNC_3(zsetopval *VAR_1) {
    if (VAR_1->flags & VAR_0) {

        sds VAR_2 = VAR_1->ele;
        VAR_1->flags &= ~VAR_0;
        VAR_1->ele = ((void*)0);
        return VAR_2;
    } else if (VAR_1->ele) {
        return FUNC_0(VAR_1->ele);
    } else if (VAR_1->estr) {
        return FUNC_2((char*)VAR_1->estr,VAR_1->elen);
    } else {
        return FUNC_1(VAR_1->ell);
    }
}
