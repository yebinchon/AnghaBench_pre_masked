
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdp ;
typedef int u32 ;
struct netdev_bpf {int command; int prog_id; } ;
struct net_device {int dummy; } ;
typedef enum bpf_netdev_command { ____Placeholder_bpf_netdev_command } bpf_netdev_command ;
typedef scalar_t__ (* bpf_op_t ) (struct net_device*,struct netdev_bpf*) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct netdev_bpf*,int ,int) ;

u32 FUNC_2(struct net_device *VAR_1, bpf_op_t VAR_2,
      enum bpf_netdev_command VAR_3)
{
 struct netdev_bpf VAR_4;

 if (!VAR_2)
  return 0;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.command = VAR_3;


 FUNC_0(VAR_2(VAR_1, &VAR_4) < 0 && VAR_3 == VAR_0);

 return VAR_4.prog_id;
}
