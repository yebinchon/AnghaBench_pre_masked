
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; char* ele; int ell; int elen; int * estr; } ;
typedef TYPE_1__ zsetopval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ,int *) ;

int FUNC_2(zsetopval *VAR_2) {
    if (!(VAR_2->flags & VAR_0)) {
        VAR_2->flags |= VAR_0;

        if (VAR_2->ele != ((void*)0)) {
            if (FUNC_1(VAR_2->ele,FUNC_0(VAR_2->ele),&VAR_2->ell))
                VAR_2->flags |= VAR_1;
        } else if (VAR_2->estr != ((void*)0)) {
            if (FUNC_1((char*)VAR_2->estr,VAR_2->elen,&VAR_2->ell))
                VAR_2->flags |= VAR_1;
        } else {

            VAR_2->flags |= VAR_1;
        }
    }
    return VAR_2->flags & VAR_1;
}
