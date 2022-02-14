
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct icmphdr {int dummy; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_0)
{
 return FUNC_0(VAR_0, FUNC_1(VAR_0) +
      sizeof(struct icmphdr));
}
