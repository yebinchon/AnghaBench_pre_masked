
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ipv6_txoptions {scalar_t__ dst1opt; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int *,int ,scalar_t__) ;

void FUNC_1(struct sk_buff *VAR_1, struct ipv6_txoptions *VAR_2, u8 *VAR_3)
{
 if (VAR_2->dst1opt)
  FUNC_0(VAR_1, VAR_3, VAR_0, VAR_2->dst1opt);
}
