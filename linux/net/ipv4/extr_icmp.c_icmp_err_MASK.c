
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; } ;
struct icmphdr {scalar_t__ type; } ;
struct TYPE_2__ {int type; int code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;

int FUNC_5(struct sk_buff *VAR_5, u32 VAR_6)
{
 struct iphdr *VAR_7 = (struct iphdr *)VAR_5->data;
 int VAR_8 = VAR_7->ihl<<2;
 struct icmphdr *VAR_9 = (struct icmphdr *)(VAR_5->data + VAR_8);
 int VAR_10 = FUNC_1(VAR_5)->type;
 int VAR_11 = FUNC_1(VAR_5)->code;
 struct net *VAR_12 = FUNC_0(VAR_5->dev);





 if (VAR_9->type != VAR_1) {
  FUNC_4(VAR_5, VAR_8, VAR_6);
  return 0;
 }

 if (VAR_10 == VAR_0 && VAR_11 == VAR_2)
  FUNC_3(VAR_5, VAR_12, VAR_6, 0, VAR_4);
 else if (VAR_10 == VAR_3)
  FUNC_2(VAR_5, VAR_12, 0, VAR_4);

 return 0;
}
