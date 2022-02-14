
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,struct net_device*,int,int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2,
      struct packet_type *VAR_3)
{
 u8 *VAR_4 = FUNC_1(VAR_1) - VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_4[0] & 7, VAR_0);
}
