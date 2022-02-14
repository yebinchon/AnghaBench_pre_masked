
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {scalar_t__ mc_v1_seen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inet6_dev const*) ;
 scalar_t__ FUNC_1 (struct inet6_dev const*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(const struct inet6_dev *VAR_1)
{
 if (FUNC_1(VAR_1))
  return 0;
 if (FUNC_0(VAR_1))
  return 1;
 if (VAR_1->mc_v1_seen && FUNC_2(VAR_0, VAR_1->mc_v1_seen))
  return 1;

 return 0;
}
