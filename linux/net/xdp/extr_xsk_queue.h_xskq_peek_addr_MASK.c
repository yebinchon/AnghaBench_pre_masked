
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xsk_queue {scalar_t__ cons_tail; scalar_t__ cons_head; TYPE_1__* ring; } ;
struct xdp_umem {int dummy; } ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct xsk_queue*,int ) ;
 int * FUNC_4 (struct xsk_queue*,int *,struct xdp_umem*) ;

__attribute__((used)) static inline u64 *FUNC_5(struct xsk_queue *VAR_1, u64 *VAR_2,
      struct xdp_umem *VAR_3)
{
 if (VAR_1->cons_tail == VAR_1->cons_head) {
  FUNC_1();
  FUNC_0(VAR_1->ring->consumer, VAR_1->cons_tail);
  VAR_1->cons_head = VAR_1->cons_tail + FUNC_3(VAR_1, VAR_0);


  FUNC_2();
 }

 return FUNC_4(VAR_1, VAR_2, VAR_3);
}
