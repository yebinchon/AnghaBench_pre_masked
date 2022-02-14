
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {scalar_t__ idr_base; int idr_rt; } ;


 void* FUNC_0 (int *,scalar_t__,int *) ;

void *FUNC_1(struct idr *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(&VAR_0->idr_rt, VAR_1 - VAR_0->idr_base, ((void*)0));
}
