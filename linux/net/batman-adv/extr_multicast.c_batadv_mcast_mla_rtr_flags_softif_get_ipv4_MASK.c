
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 struct in_device* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_2)
{
 struct in_device *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 && FUNC_0(VAR_3))
  return VAR_1;
 else
  return VAR_0;
}
