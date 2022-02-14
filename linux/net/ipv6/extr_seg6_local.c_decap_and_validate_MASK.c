
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ encapsulation; } ;
struct ipv6_sr_hdr {scalar_t__ segments_left; } ;


 struct ipv6_sr_hdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int*,int,int *,int *) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_8(struct sk_buff *VAR_0, int VAR_1)
{
 struct ipv6_sr_hdr *VAR_2;
 unsigned int VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 && VAR_2->segments_left > 0)
  return 0;






 if (FUNC_1(VAR_0, &VAR_3, VAR_1, ((void*)0), ((void*)0)) < 0)
  return 0;

 if (!FUNC_2(VAR_0, VAR_3))
  return 0;

 FUNC_5(VAR_0, FUNC_4(VAR_0), VAR_3);

 FUNC_6(VAR_0);
 FUNC_7(VAR_0);
 VAR_0->encapsulation = 0;

 return 1;
}
