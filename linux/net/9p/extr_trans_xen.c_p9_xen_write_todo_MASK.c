
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_9pfs_dataring {TYPE_1__* intf; } ;
struct TYPE_2__ {scalar_t__ out_cons; scalar_t__ out_prod; } ;
typedef scalar_t__ RING_IDX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct xen_9pfs_dataring *VAR_1, RING_IDX VAR_2)
{
 RING_IDX VAR_3, VAR_4;

 VAR_3 = VAR_1->intf->out_cons;
 VAR_4 = VAR_1->intf->out_prod;
 FUNC_0();

 return VAR_0 -
  FUNC_1(VAR_4, VAR_3, VAR_0) >= VAR_2;
}
