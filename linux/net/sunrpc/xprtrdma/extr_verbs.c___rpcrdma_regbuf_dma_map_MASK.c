
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ri_pd; TYPE_2__* ri_id; } ;
struct rpcrdma_xprt {TYPE_3__ rx_ia; } ;
struct TYPE_8__ {int lkey; int addr; } ;
struct rpcrdma_regbuf {scalar_t__ rg_direction; TYPE_4__ rg_iov; struct ib_device* rg_device; } ;
struct ib_device {int dummy; } ;
struct TYPE_6__ {struct ib_device* device; } ;
struct TYPE_5__ {int local_dma_lkey; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct rpcrdma_regbuf*) ;
 int FUNC_3 (struct rpcrdma_regbuf*) ;
 int FUNC_4 (struct rpcrdma_regbuf*) ;
 int FUNC_5 (int ) ;

bool FUNC_6(struct rpcrdma_xprt *VAR_1,
         struct rpcrdma_regbuf *VAR_2)
{
 struct ib_device *VAR_3 = VAR_1->rx_ia.ri_id->device;

 if (VAR_2->rg_direction == VAR_0)
  return 0;

 VAR_2->rg_iov.addr = FUNC_0(VAR_3, FUNC_3(VAR_2),
         FUNC_4(VAR_2), VAR_2->rg_direction);
 if (FUNC_1(VAR_3, FUNC_2(VAR_2))) {
  FUNC_5(FUNC_2(VAR_2));
  return 0;
 }

 VAR_2->rg_device = VAR_3;
 VAR_2->rg_iov.lkey = VAR_1->rx_ia.ri_pd->local_dma_lkey;
 return 1;
}
