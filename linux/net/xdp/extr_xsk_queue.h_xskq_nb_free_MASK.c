
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xsk_queue {scalar_t__ nentries; scalar_t__ cons_tail; TYPE_1__* ring; } ;
struct TYPE_2__ {int consumer; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct xsk_queue *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_0->nentries - (VAR_1 - VAR_0->cons_tail);

 if (VAR_3 >= VAR_2)
  return VAR_3;


 VAR_0->cons_tail = FUNC_0(VAR_0->ring->consumer);
 return VAR_0->nentries - (VAR_1 - VAR_0->cons_tail);
}
