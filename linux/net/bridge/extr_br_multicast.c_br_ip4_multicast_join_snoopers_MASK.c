
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int dev; } ;
struct in_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_device*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct in_device* FUNC_2 (int ) ;
 int FUNC_3 (struct in_device*) ;

__attribute__((used)) static void FUNC_4(struct net_bridge *VAR_2)
{
 struct in_device *VAR_3 = FUNC_2(VAR_2->dev);

 if (!VAR_3)
  return;

 FUNC_0(VAR_3, FUNC_1(VAR_1), VAR_0);
 FUNC_3(VAR_3);
}
