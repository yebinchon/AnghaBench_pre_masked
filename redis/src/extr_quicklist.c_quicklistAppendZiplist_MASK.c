
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* zl; scalar_t__ count; int sz; } ;
typedef TYPE_1__ quicklistNode ;
struct TYPE_8__ {int count; int tail; } ;
typedef TYPE_2__ quicklist ;


 int FUNC_0 (TYPE_2__*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;

void FUNC_4(quicklist *VAR_0, unsigned char *VAR_1) {
    quicklistNode *VAR_2 = FUNC_1();

    VAR_2->zl = VAR_1;
    VAR_2->count = FUNC_3(VAR_2->zl);
    VAR_2->sz = FUNC_2(VAR_1);

    FUNC_0(VAR_0, VAR_0->tail, VAR_2);
    VAR_0->count += VAR_2->count;
}
