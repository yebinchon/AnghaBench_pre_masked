
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {scalar_t__ cq; scalar_t__ fq; } ;



bool FUNC_0(struct xdp_umem *VAR_0)
{
 return VAR_0->fq && VAR_0->cq;
}
