
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdp ;
typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_bpf {int flags; struct bpf_prog* prog; struct netlink_ext_ack* extack; int command; } ;
struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef int (* bpf_op_t ) (struct net_device*,struct netdev_bpf*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netdev_bpf*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, bpf_op_t VAR_4,
      struct netlink_ext_ack *VAR_5, u32 VAR_6,
      struct bpf_prog *VAR_7)
{
 struct netdev_bpf VAR_8;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_6 & VAR_0)
  VAR_8.command = VAR_2;
 else
  VAR_8.command = VAR_1;
 VAR_8.extack = VAR_5;
 VAR_8.flags = VAR_6;
 VAR_8.prog = VAR_7;

 return VAR_4(VAR_3, &VAR_8);
}
