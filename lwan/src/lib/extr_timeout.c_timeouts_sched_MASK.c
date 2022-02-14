
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timeout_t ;
struct timeouts {scalar_t__ curtime; int* pending; int expired; int ** wheel; } ;
struct timeout {int tqe; int * pending; scalar_t__ expires; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct timeouts*,struct timeout*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct timeouts*,struct timeout*) ;

__attribute__((used)) static void
FUNC_6(struct timeouts *VAR_0, struct timeout *VAR_1, timeout_t VAR_2)
{
    timeout_t VAR_3;
    int VAR_4, VAR_5;

    FUNC_5(VAR_0, VAR_1);

    VAR_1->expires = VAR_2;

    if (VAR_2 > VAR_0->curtime) {
        VAR_3 = FUNC_2(VAR_0, VAR_1);






        VAR_4 = FUNC_4(VAR_3);
        VAR_5 = FUNC_3(VAR_4, VAR_1->expires);

        VAR_1->pending = &VAR_0->wheel[VAR_4][VAR_5];

        VAR_0->pending[VAR_4] |= FUNC_0(1) << VAR_5;
    } else {
        VAR_1->pending = &VAR_0->expired;
    }

    FUNC_1(VAR_1->pending, &VAR_1->tqe);
}
