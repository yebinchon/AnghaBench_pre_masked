
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int type; } ;
 int FUNC_0 (int *,struct net_device*) ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (int *,struct net_device*) ;
 int FUNC_3 (int *,struct net_device*) ;
 int FUNC_4 (int *,struct net_device*) ;
 int FUNC_5 (int *,struct net_device*) ;
 int FUNC_6 (int *,struct net_device*) ;
 int FUNC_7 (int *,struct net_device*) ;

__attribute__((used)) static int FUNC_8(u8 *VAR_0, struct net_device *VAR_1)
{
 switch (VAR_1->type) {
 case 137:
 case 136:
  return FUNC_2(VAR_0, VAR_1);
 case 138:
  return FUNC_1(VAR_0, VAR_1);
 case 134:
  return FUNC_5(VAR_0, VAR_1);
 case 130:
  return FUNC_7(VAR_0, VAR_1);
 case 132:
 case 129:
  return FUNC_3(VAR_0, VAR_1);
 case 139:
  return FUNC_0(VAR_0, VAR_1);
 case 135:
  return FUNC_4(VAR_0, VAR_1);
 case 128:
 case 133:
 case 131:
  return FUNC_6(VAR_0, VAR_1);
 }
 return -1;
}
