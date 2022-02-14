
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int refcount; int lru; void* ptr; int encoding; } ;
typedef TYPE_1__ robj ;
struct TYPE_6__ {int maxmemory_policy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;

robj *FUNC_3(int VAR_4, void *VAR_5) {
    robj *VAR_6 = FUNC_2(sizeof(*VAR_6));
    VAR_6->type = VAR_4;
    VAR_6->encoding = VAR_2;
    VAR_6->ptr = VAR_5;
    VAR_6->refcount = 1;



    if (VAR_3.maxmemory_policy & VAR_1) {
        VAR_6->lru = (FUNC_0()<<8) | VAR_0;
    } else {
        VAR_6->lru = FUNC_1();
    }
    return VAR_6;
}
