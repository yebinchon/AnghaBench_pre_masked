
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_sock {TYPE_1__* umem; TYPE_1__* rx; } ;
struct TYPE_2__ {struct TYPE_2__* fq; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

bool FUNC_1(struct xdp_sock *VAR_0)
{
 return FUNC_0(VAR_0->rx) && FUNC_0(VAR_0->umem) &&
  FUNC_0(VAR_0->umem->fq);
}
