
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_connection {int dummy; } ;
struct timeout_queue {struct lwan_connection* conns; struct lwan_connection head; } ;
typedef scalar_t__ ptrdiff_t ;



__attribute__((used)) static inline int FUNC_0(struct timeout_queue *VAR_0,
                                            struct lwan_connection *VAR_1)
{
    return (VAR_1 == &VAR_0->head) ? -1 : (int)(ptrdiff_t)(VAR_1 - VAR_0->conns);
}
