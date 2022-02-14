
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct net_device *VAR_4, __be16 VAR_5)
{
 if (VAR_5 == FUNC_0(VAR_1) &&
     VAR_4->features & VAR_2)
  return 1;
 if (VAR_5 == FUNC_0(VAR_0) &&
     VAR_4->features & VAR_3)
  return 1;
 return 0;
}
