
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,struct net_device*,unsigned int,unsigned int) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct sk_buff *VAR_3, struct net_device *VAR_4,
       struct packet_type *VAR_5)
{

 u8 *VAR_6 = FUNC_1(VAR_3) - VAR_2;
 unsigned int VAR_7 = VAR_6[0] & 7;
 unsigned int VAR_8 = VAR_2;


 if (VAR_6[0] & VAR_0)
  VAR_8 += VAR_1;

 return FUNC_0(VAR_3, VAR_4, VAR_7, VAR_8);
}
