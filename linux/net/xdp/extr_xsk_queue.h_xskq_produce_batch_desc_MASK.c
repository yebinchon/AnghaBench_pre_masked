
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xsk_queue {unsigned int ring_mask; int prod_head; scalar_t__ ring; } ;
struct xdp_rxtx_ring {TYPE_1__* desc; } ;
struct TYPE_2__ {int len; int addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xsk_queue*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct xsk_queue *VAR_1,
       u64 VAR_2, u32 VAR_3)
{
 struct xdp_rxtx_ring *VAR_4 = (struct xdp_rxtx_ring *)VAR_1->ring;
 unsigned int VAR_5;

 if (FUNC_0(VAR_1, VAR_1->prod_head, 1) == 0)
  return -VAR_0;


 VAR_5 = (VAR_1->prod_head++) & VAR_1->ring_mask;
 VAR_4->desc[VAR_5].addr = VAR_2;
 VAR_4->desc[VAR_5].len = VAR_3;

 return 0;
}
