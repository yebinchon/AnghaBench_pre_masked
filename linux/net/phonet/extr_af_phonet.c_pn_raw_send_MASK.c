
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int pkt_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int ,int ,int ,int) ;
 int FUNC_6 (struct sk_buff*,void const*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(const void *VAR_4, int VAR_5, struct net_device *VAR_6,
   u16 VAR_7, u16 VAR_8, u8 VAR_9)
{
 struct sk_buff *VAR_10 = FUNC_1(VAR_2 + VAR_5, VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 if (FUNC_3(FUNC_2(VAR_6), FUNC_4(VAR_7)) == 0)
  VAR_10->pkt_type = VAR_3;

 FUNC_7(VAR_10, VAR_2);
 FUNC_0(VAR_10, VAR_5);
 FUNC_6(VAR_10, VAR_4, VAR_5);
 return FUNC_5(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9, 1);
}
