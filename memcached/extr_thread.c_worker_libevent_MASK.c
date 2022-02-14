
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ drop_privileges; } ;
struct TYPE_3__ {int base; int * lru_bump_buf; int * l; } ;
typedef TYPE_1__ LIBEVENT_THREAD ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void *FUNC_7(void *VAR_1) {
    LIBEVENT_THREAD *VAR_2 = VAR_1;




    VAR_2->l = FUNC_5();
    VAR_2->lru_bump_buf = FUNC_4();
    if (VAR_2->l == ((void*)0) || VAR_2->lru_bump_buf == ((void*)0)) {
        FUNC_0();
    }

    if (VAR_0.drop_privileges) {
        FUNC_1();
    }

    FUNC_6();

    FUNC_3(VAR_2->base, 0);


    FUNC_6();

    FUNC_2(VAR_2->base);
    return ((void*)0);
}
