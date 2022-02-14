
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; } ;
struct icmpv6_msg {int type; scalar_t__ offset; struct sk_buff* skb; } ;
typedef int __wsum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5, struct sk_buff *VAR_6)
{
 struct icmpv6_msg *VAR_7 = (struct icmpv6_msg *) VAR_1;
 struct sk_buff *VAR_8 = VAR_7->skb;
 __wsum VAR_9 = 0;

 VAR_9 = FUNC_2(VAR_8, VAR_7->offset + VAR_3,
          VAR_2, VAR_4, VAR_9);
 VAR_6->csum = FUNC_0(VAR_6->csum, VAR_9, VAR_5);
 if (!(VAR_7->type & VAR_0))
  FUNC_1(VAR_6, VAR_8);
 return 0;
}
