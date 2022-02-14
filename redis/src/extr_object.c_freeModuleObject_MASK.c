
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_8__ {int value; TYPE_1__* type; } ;
typedef TYPE_3__ moduleValue ;
struct TYPE_6__ {int (* free ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(robj *VAR_0) {
    moduleValue *VAR_1 = VAR_0->ptr;
    VAR_1->type->free(VAR_1->value);
    FUNC_1(VAR_1);
}
