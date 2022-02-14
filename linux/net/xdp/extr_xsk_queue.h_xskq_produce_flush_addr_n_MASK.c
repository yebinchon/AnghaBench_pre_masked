
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xsk_queue {int prod_tail; TYPE_1__* ring; } ;
struct TYPE_2__ {int producer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct xsk_queue *VAR_0,
          u32 VAR_1)
{

 FUNC_1();

 VAR_0->prod_tail += VAR_1;
 FUNC_0(VAR_0->ring->producer, VAR_0->prod_tail);
}
