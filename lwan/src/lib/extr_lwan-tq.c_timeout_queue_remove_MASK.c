
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_queue {int dummy; } ;
struct lwan_connection {int prev; int next; } ;


 struct lwan_connection* FUNC_0 (struct timeout_queue*,int ) ;

__attribute__((used)) static void FUNC_1(struct timeout_queue *VAR_0,
                                 struct lwan_connection *VAR_1)
{
    struct lwan_connection *VAR_2 = FUNC_0(VAR_0, VAR_1->prev);
    struct lwan_connection *VAR_3 = FUNC_0(VAR_0, VAR_1->next);

    VAR_3->prev = VAR_1->prev;
    VAR_2->next = VAR_1->next;

    VAR_1->next = VAR_1->prev = -1;
}
