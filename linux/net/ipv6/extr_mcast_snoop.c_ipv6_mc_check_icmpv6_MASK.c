
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct icmp6hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,unsigned int,int ) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = FUNC_4(VAR_2) + sizeof(struct icmp6hdr);
 unsigned int VAR_4 = FUNC_1(VAR_2);
 struct sk_buff *VAR_5;

 if (!FUNC_0(VAR_2, VAR_3))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_4,
           VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5 != VAR_2)
  FUNC_2(VAR_5);

 return 0;
}
