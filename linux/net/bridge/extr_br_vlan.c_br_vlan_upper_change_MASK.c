
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_bridge*,struct net_device*) ;
 struct net_bridge* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
     struct net_device *VAR_2,
     bool VAR_3)
{
 struct net_bridge *VAR_4 = FUNC_4(VAR_1);

 if (!FUNC_2(VAR_2))
  return;

 if (VAR_3) {
  FUNC_3(VAR_4, VAR_2);
  FUNC_0(VAR_4, VAR_0, 1);
 } else {
  FUNC_0(VAR_4, VAR_0,
         FUNC_1(VAR_1));
 }
}
