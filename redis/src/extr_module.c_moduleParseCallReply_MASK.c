
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int* proto; } ;
typedef TYPE_1__ RedisModuleCallReply ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(RedisModuleCallReply *VAR_1) {
    if (!(VAR_1->flags & VAR_0)) return;
    VAR_1->flags &= ~VAR_0;

    switch(VAR_1->proto[0]) {
    case ':': FUNC_2(VAR_1); break;
    case '$': FUNC_1(VAR_1); break;
    case '-':
    case '+': FUNC_3(VAR_1); break;
    case '*': FUNC_0(VAR_1); break;
    }
}
