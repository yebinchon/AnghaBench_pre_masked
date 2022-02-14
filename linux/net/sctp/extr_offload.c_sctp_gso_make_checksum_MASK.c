
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ csum_not_inet; int ip_summed; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static __le32 FUNC_3(struct sk_buff *VAR_1)
{
 VAR_1->ip_summed = VAR_0;
 VAR_1->csum_not_inet = 0;
 FUNC_0(VAR_1, ~0);
 return FUNC_1(VAR_1, FUNC_2(VAR_1));
}
