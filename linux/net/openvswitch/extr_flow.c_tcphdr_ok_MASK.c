
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct sk_buff {int len; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 if (FUNC_3(!FUNC_0(VAR_0, VAR_1 + sizeof(struct tcphdr))))
  return 0;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_3(VAR_2 < sizeof(struct tcphdr) ||
       VAR_0->len < VAR_1 + VAR_2))
  return 0;

 return 1;
}
