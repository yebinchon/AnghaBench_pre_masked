
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct hsr_priv {int sequence_nr; int sup_multicast_addr; } ;
struct hsr_port {TYPE_1__* dev; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hsr_port* FUNC_0 (struct hsr_priv*,int ) ;
 struct hsr_priv* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_8, const struct net_device *VAR_9)
{
 struct hsr_priv *VAR_10;
 struct hsr_port *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_9);

 VAR_12 = 0;

 FUNC_5();
 VAR_11 = FUNC_0(VAR_10, VAR_2);
 if (VAR_11)
  VAR_12 = FUNC_4(VAR_8, VAR_5, VAR_11->dev->ifindex);
 FUNC_6();
 if (VAR_12)
  goto nla_put_failure;

 FUNC_5();
 VAR_11 = FUNC_0(VAR_10, VAR_3);
 if (VAR_11)
  VAR_12 = FUNC_4(VAR_8, VAR_6, VAR_11->dev->ifindex);
 FUNC_6();
 if (VAR_12)
  goto nla_put_failure;

 if (FUNC_2(VAR_8, VAR_7, VAR_1,
      VAR_10->sup_multicast_addr) ||
     FUNC_3(VAR_8, VAR_4, VAR_10->sequence_nr))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
