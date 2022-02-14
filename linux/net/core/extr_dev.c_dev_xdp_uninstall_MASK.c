
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdp ;
struct netdev_bpf {int prog_flags; scalar_t__ prog_id; int command; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
typedef int (* bpf_op_t ) (struct net_device*,struct netdev_bpf*) ;
struct TYPE_2__ {int (* ndo_bpf ) (struct net_device*,struct netdev_bpf*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int (*) (struct net_device*,struct netdev_bpf*),int *,int ,int *) ;
 int FUNC_2 (struct net_device*,struct netdev_bpf*) ;
 int FUNC_3 (struct netdev_bpf*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct netdev_bpf VAR_3;
 bpf_op_t VAR_4;


 FUNC_0(FUNC_1(VAR_2, FUNC_2, ((void*)0), 0, ((void*)0)));


 VAR_4 = VAR_2->netdev_ops->ndo_bpf;
 if (!VAR_4)
  return;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.command = VAR_0;
 FUNC_0(VAR_4(VAR_2, &VAR_3));
 if (VAR_3.prog_id)
  FUNC_0(FUNC_1(VAR_2, VAR_4, ((void*)0), VAR_3.prog_flags,
     ((void*)0)));


 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.command = VAR_1;
 if (!VAR_4(VAR_2, &VAR_3) && VAR_3.prog_id)
  FUNC_0(FUNC_1(VAR_2, VAR_4, ((void*)0), VAR_3.prog_flags,
     ((void*)0)));
}
