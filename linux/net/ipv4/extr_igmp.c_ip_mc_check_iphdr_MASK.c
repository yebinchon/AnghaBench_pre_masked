
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {unsigned int len; } ;
struct iphdr {int version; int tot_len; int ihl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1)
{
 const struct iphdr *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4 = FUNC_5(VAR_1) + sizeof(*VAR_2);

 if (!FUNC_4(VAR_1, VAR_4))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->version != 4 || FUNC_2(VAR_1) < sizeof(*VAR_2))
  return -VAR_0;

 VAR_4 += FUNC_2(VAR_1) - sizeof(*VAR_2);

 if (!FUNC_4(VAR_1, VAR_4))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);

 if (FUNC_7(FUNC_0((u8 *)VAR_2, VAR_2->ihl)))
  return -VAR_0;

 VAR_3 = FUNC_5(VAR_1) + FUNC_3(VAR_2->tot_len);
 if (VAR_1->len < VAR_3 || VAR_3 < VAR_4)
  return -VAR_0;

 FUNC_6(VAR_1, VAR_4);

 return 0;
}
