
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dn_ptr; } ;
struct dn_ifaddr {int dummy; } ;
struct dn_dev {int ifa_list; } ;


 int FUNC_0 (struct dn_dev*,int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct dn_ifaddr*) ;
 void* FUNC_3 (int ) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct dn_dev *VAR_1 = FUNC_3(VAR_0->dn_ptr);
 struct dn_ifaddr *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 while ((VAR_2 = FUNC_3(VAR_1->ifa_list)) != ((void*)0)) {
  FUNC_0(VAR_1, &VAR_1->ifa_list, 0);
  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_0);
}
