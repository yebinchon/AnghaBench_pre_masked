
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xsk_queue {scalar_t__ prod_tail; scalar_t__ cons_tail; TYPE_1__* ring; } ;
struct TYPE_2__ {int producer; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct xsk_queue *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->prod_tail - VAR_0->cons_tail;

 if (VAR_2 == 0) {

  VAR_0->prod_tail = FUNC_0(VAR_0->ring->producer);
  VAR_2 = VAR_0->prod_tail - VAR_0->cons_tail;
 }

 return (VAR_2 > VAR_1) ? VAR_1 : VAR_2;
}
