
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_3__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
typedef int dictEntry ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int) ;

sds FUNC_3(robj *VAR_1, sds VAR_2) {
    dictEntry *VAR_3;

    FUNC_2(VAR_1->encoding == VAR_0);

    VAR_3 = FUNC_0(VAR_1->ptr, VAR_2);
    if (VAR_3 == ((void*)0)) return ((void*)0);
    return FUNC_1(VAR_3);
}
