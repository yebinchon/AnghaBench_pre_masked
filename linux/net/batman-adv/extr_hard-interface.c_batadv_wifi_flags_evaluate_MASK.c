
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_4(struct net_device *VAR_4)
{
 u32 VAR_5 = 0;
 struct net_device *VAR_6;

 if (FUNC_2(VAR_4))
  VAR_5 |= VAR_2;

 if (FUNC_1(VAR_4))
  VAR_5 |= VAR_0;

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6)
  return VAR_5;

 if (VAR_6 == VAR_4)
  goto out;

 if (FUNC_2(VAR_6))
  VAR_5 |= VAR_3;

 if (FUNC_1(VAR_6))
  VAR_5 |= VAR_1;

out:
 FUNC_3(VAR_6);
 return VAR_5;
}
