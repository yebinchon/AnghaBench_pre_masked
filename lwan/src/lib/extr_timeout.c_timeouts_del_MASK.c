
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeouts {size_t* pending; int ** wheel; int expired; } ;
struct timeout {int * pending; int tqe; } ;
typedef size_t ptrdiff_t ;


 size_t FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct timeouts *VAR_1, struct timeout *VAR_2)
{
    if (VAR_2->pending) {
        FUNC_1(VAR_2->pending, &VAR_2->tqe);

        if (VAR_2->pending != &VAR_1->expired && FUNC_2(VAR_2->pending)) {
            ptrdiff_t VAR_3 = VAR_2->pending - &VAR_1->wheel[0][0];
            ptrdiff_t VAR_4 = VAR_3 / VAR_0;
            ptrdiff_t VAR_5 = VAR_3 % VAR_0;

            VAR_1->pending[VAR_4] &= ~(FUNC_0(1) << VAR_5);
        }

        VAR_2->pending = ((void*)0);
    }
}
