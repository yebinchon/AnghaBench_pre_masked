
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct iphdr {int dummy; } ;
struct TYPE_3__ {struct iphdr iph; } ;
struct ip_tunnel {TYPE_1__ parms; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,struct iphdr const*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_2,
         struct net_device *VAR_3, u8 VAR_4)
{
 struct ip_tunnel *VAR_5 = FUNC_3(VAR_3);
 const struct iphdr *VAR_6 = &VAR_5->parms.iph;

 if (FUNC_1(VAR_2, VAR_1))
  goto tx_error;

 FUNC_4(VAR_2, VAR_4);

 FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4);
 return VAR_0;
tx_error:
 FUNC_2(VAR_2);
 VAR_3->stats.tx_errors++;
 return VAR_0;
}
