
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_slave_dump_ctx {int idx; struct netlink_callback* cb; struct sk_buff* skb; struct net_device* dev; } ;
struct dsa_port {int dummy; } ;


 int FUNC_0 (struct dsa_port*,int ,struct dsa_slave_dump_ctx*) ;
 int VAR_0 ;
 struct dsa_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_1, struct netlink_callback *VAR_2,
     struct net_device *VAR_3, struct net_device *VAR_4,
     int *VAR_5)
{
 struct dsa_port *VAR_6 = FUNC_1(VAR_3);
 struct dsa_slave_dump_ctx VAR_7 = {
  .dev = VAR_3,
  .skb = VAR_1,
  .cb = VAR_2,
  .idx = *VAR_5,
 };
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_0, &VAR_7);
 *VAR_5 = VAR_7.idx;

 return VAR_8;
}
