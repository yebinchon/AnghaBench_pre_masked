
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct timeout_queue {scalar_t__ time; TYPE_1__ head; } ;
struct lwan_connection {scalar_t__ time_to_die; } ;


 int FUNC_0 (struct timeout_queue*) ;
 struct lwan_connection* FUNC_1 (struct timeout_queue*,int ) ;
 int FUNC_2 (struct timeout_queue*,struct lwan_connection*) ;

void FUNC_3(struct timeout_queue *VAR_0)
{
    VAR_0->time++;

    while (!FUNC_0(VAR_0)) {
        struct lwan_connection *VAR_1 =
            FUNC_1(VAR_0, VAR_0->head.next);

        if (VAR_1->time_to_die > VAR_0->time)
            return;

        FUNC_2(VAR_0, VAR_1);
    }


    VAR_0->time = 0;
}
