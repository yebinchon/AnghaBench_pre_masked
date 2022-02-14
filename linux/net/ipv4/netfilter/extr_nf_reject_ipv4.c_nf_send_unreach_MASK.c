
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct iphdr {int frag_off; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

void FUNC_7(struct sk_buff *VAR_2, int VAR_3, int VAR_4)
{
 struct iphdr *VAR_5 = FUNC_2(VAR_2);
 u8 VAR_6 = VAR_5->protocol;

 if (VAR_5->frag_off & FUNC_0(VAR_1))
  return;

 if (FUNC_6(VAR_2) || !FUNC_5(VAR_6)) {
  FUNC_1(VAR_2, VAR_0, VAR_3, 0);
  return;
 }

 if (FUNC_4(VAR_2, VAR_4, FUNC_3(VAR_2), VAR_6) == 0)
  FUNC_1(VAR_2, VAR_0, VAR_3, 0);
}
