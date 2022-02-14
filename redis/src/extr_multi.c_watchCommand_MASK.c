
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int argc; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int ok; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(client *VAR_2) {
    int VAR_3;

    if (VAR_2->flags & VAR_0) {
        FUNC_1(VAR_2,"WATCH inside MULTI is not allowed");
        return;
    }
    for (VAR_3 = 1; VAR_3 < VAR_2->argc; VAR_3++)
        FUNC_2(VAR_2,VAR_2->argv[VAR_3]);
    FUNC_0(VAR_2,VAR_1.ok);
}
