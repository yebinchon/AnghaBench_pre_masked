
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcount; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;

void FUNC_0(robj *VAR_1) {
    if (VAR_1->refcount != VAR_0) VAR_1->refcount++;
}
