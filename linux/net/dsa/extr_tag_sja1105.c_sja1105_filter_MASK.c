
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dsa_ptr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 if (!FUNC_0(VAR_1->dsa_ptr))
  return 1;
 if (FUNC_1(VAR_0))
  return 1;
 if (FUNC_2(VAR_0))
  return 1;
 return 0;
}
