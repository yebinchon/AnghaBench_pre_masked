
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int robj ;
struct TYPE_4__ {void* value; int * type; } ;
typedef TYPE_1__ moduleValue ;
typedef int moduleType ;


 int VAR_0 ;
 int * FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

robj *FUNC_2(moduleType *VAR_1, void *VAR_2) {
    moduleValue *VAR_3 = FUNC_1(sizeof(*VAR_3));
    VAR_3->type = VAR_1;
    VAR_3->value = VAR_2;
    return FUNC_0(VAR_0,VAR_3);
}
