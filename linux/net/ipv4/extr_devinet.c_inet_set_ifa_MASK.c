
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct in_ifaddr {int ifa_scope; int ifa_local; struct in_device* ifa_dev; } ;
struct in_device {int arp_parms; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct in_device*) ;
 struct in_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct in_device*) ;
 int FUNC_4 (struct in_ifaddr*) ;
 int FUNC_5 (struct in_ifaddr*) ;
 int FUNC_6 (struct in_device*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2, struct in_ifaddr *VAR_3)
{
 struct in_device *VAR_4 = FUNC_2(VAR_2);

 FUNC_0();

 if (!VAR_4) {
  FUNC_4(VAR_3);
  return -VAR_0;
 }
 FUNC_6(VAR_4);
 FUNC_8(VAR_4->arp_parms);
 if (VAR_3->ifa_dev != VAR_4) {
  FUNC_1(VAR_3->ifa_dev);
  FUNC_3(VAR_4);
  VAR_3->ifa_dev = VAR_4;
 }
 if (FUNC_7(VAR_3->ifa_local))
  VAR_3->ifa_scope = VAR_1;
 return FUNC_5(VAR_3);
}
