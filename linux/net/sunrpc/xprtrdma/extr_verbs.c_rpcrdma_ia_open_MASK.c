
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpcrdma_ia {TYPE_1__* ri_id; TYPE_1__* ri_pd; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {TYPE_3__* device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

 int FUNC_2 (TYPE_3__*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char*,int,...) ;
 TYPE_1__* FUNC_5 (struct rpcrdma_xprt*,struct rpcrdma_ia*) ;
 int FUNC_6 (struct rpcrdma_ia*) ;
 int VAR_1 ;

int
FUNC_7(struct rpcrdma_xprt *VAR_2)
{
 struct rpcrdma_ia *VAR_3 = &VAR_2->rx_ia;
 int VAR_4;

 VAR_3->ri_id = FUNC_5(VAR_2, VAR_3);
 if (FUNC_0(VAR_3->ri_id)) {
  VAR_4 = FUNC_1(VAR_3->ri_id);
  goto out_err;
 }

 VAR_3->ri_pd = FUNC_3(VAR_3->ri_id->device, 0);
 if (FUNC_0(VAR_3->ri_pd)) {
  VAR_4 = FUNC_1(VAR_3->ri_pd);
  FUNC_4("rpcrdma: ib_alloc_pd() returned %d\n", VAR_4);
  goto out_err;
 }

 switch (VAR_1) {
 case 128:
  if (FUNC_2(VAR_3->ri_id->device))
   break;

 default:
  FUNC_4("rpcrdma: Device %s does not support memreg mode %d\n",
         VAR_3->ri_id->device->name, VAR_1);
  VAR_4 = -VAR_0;
  goto out_err;
 }

 return 0;

out_err:
 FUNC_6(VAR_3);
 return VAR_4;
}
