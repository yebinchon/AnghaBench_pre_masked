
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int FUNC_0 (int) ;

robj *FUNC_1(robj *VAR_1) {
    FUNC_0(VAR_1->refcount == 1);
    VAR_1->refcount = VAR_0;
    return VAR_1;
}
