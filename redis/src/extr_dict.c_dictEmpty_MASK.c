
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rehashidx; scalar_t__ iterators; int * ht; } ;
typedef TYPE_1__ dict ;


 int FUNC_0 (TYPE_1__*,int *,void (*) (void*)) ;

void FUNC_1(dict *VAR_0, void(VAR_1)(void*)) {
    FUNC_0(VAR_0,&VAR_0->ht[0],VAR_1);
    FUNC_0(VAR_0,&VAR_0->ht[1],VAR_1);
    VAR_0->rehashidx = -1;
    VAR_0->iterators = 0;
}
