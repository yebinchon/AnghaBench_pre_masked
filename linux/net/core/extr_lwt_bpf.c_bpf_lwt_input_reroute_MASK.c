
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct iphdr {int tos; int saddr; int daddr; } ;
struct TYPE_4__ {int (* ipv6_route_input ) (struct sk_buff*) ;} ;
struct TYPE_3__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,struct net_device*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_5)
{
 int VAR_6 = -VAR_1;

 if (VAR_5->protocol == FUNC_3(VAR_2)) {
  struct net_device *VAR_7 = FUNC_7(VAR_5)->dev;
  struct iphdr *VAR_8 = FUNC_4(VAR_5);

  FUNC_0(VAR_7);
  FUNC_8(VAR_5);
  VAR_6 = FUNC_5(VAR_5, VAR_8->daddr, VAR_8->saddr,
        VAR_8->tos, VAR_7);
  FUNC_1(VAR_7);
 } else if (VAR_5->protocol == FUNC_3(VAR_3)) {
  FUNC_8(VAR_5);
  VAR_6 = VAR_4->ipv6_route_input(VAR_5);
 } else {
  VAR_6 = -VAR_0;
 }

 if (VAR_6)
  goto err;
 return FUNC_2(VAR_5);

err:
 FUNC_6(VAR_5);
 return VAR_6;
}
