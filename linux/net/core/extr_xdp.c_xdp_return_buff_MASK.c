
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_buff {int handle; TYPE_1__* rxq; int data; } ;
struct TYPE_2__ {int mem; } ;


 int FUNC_0 (int ,int *,int,int ) ;

void FUNC_1(struct xdp_buff *VAR_0)
{
 FUNC_0(VAR_0->data, &VAR_0->rxq->mem, 1, VAR_0->handle);
}
