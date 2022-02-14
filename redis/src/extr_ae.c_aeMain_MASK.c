
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* beforesleep ) (TYPE_1__*) ;scalar_t__ stop; } ;
typedef TYPE_1__ aeEventLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(aeEventLoop *VAR_2) {
    VAR_2->stop = 0;
    while (!VAR_2->stop) {
        if (VAR_2->beforesleep != ((void*)0))
            VAR_2->beforesleep(VAR_2);
        FUNC_0(VAR_2, VAR_0|VAR_1);
    }
}
