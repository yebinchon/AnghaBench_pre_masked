
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int type; int addr_len; int broadcast; } ;
struct in6_addr {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct in6_addr const*,char*) ;
 int FUNC_1 (struct in6_addr const*,char*) ;
 int FUNC_2 (struct in6_addr const*,int ,char*) ;
 int FUNC_3 (struct in6_addr const*,int ,char*) ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5(const struct in6_addr *VAR_1, char *VAR_2, struct net_device *VAR_3, int VAR_4)
{
 switch (VAR_3->type) {
 case 132:
 case 130:
 case 131:
  FUNC_1(VAR_1, VAR_2);
  return 0;
 case 133:
  FUNC_0(VAR_1, VAR_2);
  return 0;
 case 129:
  FUNC_2(VAR_1, VAR_3->broadcast, VAR_2);
  return 0;
 case 128:
  return FUNC_3(VAR_1, VAR_3->broadcast, VAR_2);
 default:
  if (VAR_4) {
   FUNC_4(VAR_2, VAR_3->broadcast, VAR_3->addr_len);
   return 0;
  }
 }
 return -VAR_0;
}
