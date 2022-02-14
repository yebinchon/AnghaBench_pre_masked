
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_queue {scalar_t__ keep_alive_timeout; scalar_t__ time; } ;
struct lwan_connection {scalar_t__ time_to_die; } ;


 int FUNC_0 (struct timeout_queue*,struct lwan_connection*) ;
 int FUNC_1 (struct timeout_queue*,struct lwan_connection*) ;

void FUNC_2(struct timeout_queue *VAR_0,
                                struct lwan_connection *VAR_1)
{



    VAR_1->time_to_die = VAR_0->time + VAR_0->keep_alive_timeout;

    FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_0, VAR_1);
}
