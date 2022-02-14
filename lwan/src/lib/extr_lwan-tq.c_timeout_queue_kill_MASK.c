
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_queue {int lwan; } ;
struct lwan_connection {int * coro; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct lwan_connection*) ;
 int FUNC_4 (struct timeout_queue*,struct lwan_connection*) ;

void FUNC_5(struct timeout_queue *VAR_0, struct lwan_connection *VAR_1)
{
    FUNC_4(VAR_0, VAR_1);

    if (FUNC_0(VAR_1->coro)) {
        FUNC_2(VAR_1->coro);
        VAR_1->coro = ((void*)0);

        FUNC_1(FUNC_3(VAR_0->lwan, VAR_1));
    }
}
