
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argc; int cname; int peerid; struct TYPE_4__* argv; } ;
typedef TYPE_1__ slowlogEntry ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void *VAR_0) {
    slowlogEntry *VAR_1 = VAR_0;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++)
        FUNC_0(VAR_1->argv[VAR_2]);
    FUNC_2(VAR_1->argv);
    FUNC_1(VAR_1->peerid);
    FUNC_1(VAR_1->cname);
    FUNC_2(VAR_1);
}
