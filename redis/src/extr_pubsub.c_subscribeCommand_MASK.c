
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argc; int flags; int * argv; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(client *VAR_1) {
    int VAR_2;

    for (VAR_2 = 1; VAR_2 < VAR_1->argc; VAR_2++)
        FUNC_0(VAR_1,VAR_1->argv[VAR_2]);
    VAR_1->flags |= VAR_0;
}
