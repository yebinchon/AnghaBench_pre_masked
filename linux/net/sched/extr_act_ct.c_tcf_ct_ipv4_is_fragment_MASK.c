
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, bool *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_3(VAR_2) + sizeof(struct iphdr);
 if (FUNC_4(VAR_2->len < VAR_4))
  return -VAR_0;
 if (FUNC_4(!FUNC_2(VAR_2, VAR_4)))
  return -VAR_1;

 *VAR_3 = FUNC_1(FUNC_0(VAR_2));
 return 0;
}
