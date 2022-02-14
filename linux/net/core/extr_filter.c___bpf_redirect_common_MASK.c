
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct net_device *VAR_3,
     u32 VAR_4)
{

 if (FUNC_4(VAR_2->mac_header >= VAR_2->network_header)) {
  FUNC_3(VAR_2);
  return -VAR_1;
 }

 FUNC_2(VAR_2);
 return VAR_4 & VAR_0 ?
        FUNC_0(VAR_3, VAR_2) : FUNC_1(VAR_3, VAR_2);
}
