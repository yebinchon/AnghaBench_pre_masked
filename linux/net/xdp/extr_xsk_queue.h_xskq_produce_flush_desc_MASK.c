
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsk_queue {int prod_tail; TYPE_1__* ring; int prod_head; } ;
struct TYPE_2__ {int producer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct xsk_queue *VAR_0)
{

 FUNC_1();

 VAR_0->prod_tail = VAR_0->prod_head;
 FUNC_0(VAR_0->ring->producer, VAR_0->prod_tail);
}
