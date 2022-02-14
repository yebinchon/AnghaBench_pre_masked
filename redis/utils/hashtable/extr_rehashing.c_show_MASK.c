
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rehashidx; int * ht; } ;
typedef TYPE_1__ dict ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(dict *VAR_0) {
    int VAR_1;
    if (VAR_0->rehashidx != -1) {
        FUNC_0("rhidx: ");
        for (VAR_1 = 0; VAR_1 < VAR_0->rehashidx; VAR_1++)
            FUNC_0(".");
        FUNC_0("|\n");
    }
    FUNC_0("ht[0]: ");
    FUNC_1(VAR_0->ht[0]);
    FUNC_0("ht[1]: ");
    FUNC_1(VAR_0->ht[1]);
    FUNC_0("\n");
}
