
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int * lock; TYPE_1__* parent; } ;
struct TYPE_4__ {int * lock; } ;
typedef TYPE_2__ RAND_DRBG ;


 int * FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(RAND_DRBG *VAR_5)
{
    if (VAR_5->state != VAR_0) {
        FUNC_1(VAR_1,
                VAR_2);
        return 0;
    }

    if (VAR_5->lock == ((void*)0)) {
        if (VAR_5->parent != ((void*)0) && VAR_5->parent->lock == ((void*)0)) {
            FUNC_1(VAR_1,
                    VAR_4);
            return 0;
        }

        VAR_5->lock = FUNC_0();
        if (VAR_5->lock == ((void*)0)) {
            FUNC_1(VAR_1,
                    VAR_3);
            return 0;
        }
    }

    return 1;
}
