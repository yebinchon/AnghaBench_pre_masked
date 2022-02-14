
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; } ;
struct in6_addr {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct in6_addr*,void const*) ;
 int FUNC_2 (struct in6_addr*,void const*) ;

__attribute__((used)) static void FUNC_3(const struct net_device *VAR_0,
       struct in6_addr *VAR_1,
       const void *VAR_2)
{
 switch (VAR_0->addr_len) {
 case 129:
  FUNC_1(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_2(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
