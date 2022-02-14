
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int reploff; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {TYPE_1__* master; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_3(void) {
    client *VAR_2 = VAR_1.master;

    if (VAR_2 != ((void*)0)) {
        VAR_2->flags |= VAR_0;
        FUNC_0(VAR_2,3);
        FUNC_1(VAR_2,"REPLCONF");
        FUNC_1(VAR_2,"ACK");
        FUNC_2(VAR_2,VAR_2->reploff);
        VAR_2->flags &= ~VAR_0;
    }
}
