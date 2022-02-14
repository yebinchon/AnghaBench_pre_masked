
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev; } ;
struct timeout_queue {TYPE_1__ head; } ;
struct lwan_connection {int next; int prev; } ;


 struct lwan_connection* FUNC_0 (struct timeout_queue*,int) ;
 int FUNC_1 (struct timeout_queue*,struct lwan_connection*) ;

void FUNC_2(struct timeout_queue *VAR_0,
                          struct lwan_connection *VAR_1)
{
    VAR_1->next = -1;
    VAR_1->prev = VAR_0->head.prev;
    struct lwan_connection *VAR_2 = FUNC_0(VAR_0, VAR_0->head.prev);
    VAR_0->head.prev = VAR_2->next = FUNC_1(VAR_0, VAR_1);
}
