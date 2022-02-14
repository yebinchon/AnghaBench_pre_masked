
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; } ;
struct iphdr {int ihl; int version; int tot_len; } ;


 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0)
{
 struct iphdr *VAR_1;
 u32 VAR_2;

 if (!FUNC_2(VAR_0, sizeof(struct iphdr)))
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->ihl < 5 || VAR_1->version != 4)
  return 0;

 VAR_2 = FUNC_1(VAR_1->tot_len);
 if (VAR_0->len < VAR_2)
  return 0;
 else if (VAR_2 < (VAR_1->ihl*4))
  return 0;

 if (!FUNC_2(VAR_0, VAR_1->ihl*4))
  return 0;

 return 1;
}
