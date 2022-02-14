
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int skb_iif; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct sk_buff *VAR_2)
{
 __be32 VAR_3;







 VAR_3 = (__be32)FUNC_1(FUNC_0(VAR_2), FUNC_3(VAR_2),
      VAR_2->skb_iif);

 return FUNC_2(VAR_1, VAR_0, VAR_3);
}
