
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_connection {int dummy; } ;
struct timeout_queue {struct lwan_connection* conns; struct lwan_connection head; } ;



__attribute__((used)) static inline struct lwan_connection *
FUNC_0(struct timeout_queue *VAR_0, int VAR_1)
{
    return (VAR_1 < 0) ? &VAR_0->head : &VAR_0->conns[VAR_1];
}
