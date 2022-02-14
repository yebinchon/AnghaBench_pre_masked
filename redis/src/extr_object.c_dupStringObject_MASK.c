
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int encoding; int ptr; } ;
typedef TYPE_1__ robj ;





 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (scalar_t__,int *) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

robj *FUNC_6(const robj *VAR_1) {
    robj *VAR_2;

    FUNC_4(VAR_1->type == VAR_0);

    switch(VAR_1->encoding) {
    case 128:
        return FUNC_2(VAR_1->ptr,FUNC_3(VAR_1->ptr));
    case 130:
        return FUNC_0(VAR_1->ptr,FUNC_3(VAR_1->ptr));
    case 129:
        VAR_2 = FUNC_1(VAR_0, ((void*)0));
        VAR_2->encoding = 129;
        VAR_2->ptr = VAR_1->ptr;
        return VAR_2;
    default:
        FUNC_5("Wrong encoding.");
        break;
    }
}
