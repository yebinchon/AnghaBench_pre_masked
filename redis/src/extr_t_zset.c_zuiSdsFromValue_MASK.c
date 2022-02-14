
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ele; int flags; int ell; int elen; int * estr; } ;
typedef TYPE_1__ zsetopval ;
typedef int * sds ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (char*,int ) ;

sds FUNC_2(zsetopval *VAR_1) {
    if (VAR_1->ele == ((void*)0)) {
        if (VAR_1->estr != ((void*)0)) {
            VAR_1->ele = FUNC_1((char*)VAR_1->estr,VAR_1->elen);
        } else {
            VAR_1->ele = FUNC_0(VAR_1->ell);
        }
        VAR_1->flags |= VAR_0;
    }
    return VAR_1->ele;
}
