
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int name; int dev_addr; int dn_ptr; } ;
struct dn_ifaddr {int ifa_label; int ifa_scope; scalar_t__ ifa_flags; scalar_t__ ifa_address; scalar_t__ ifa_local; } ;
struct dn_dev {int dummy; } ;
typedef scalar_t__ __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct dn_ifaddr* FUNC_2 () ;
 struct dn_dev* FUNC_3 (struct net_device*,int*) ;
 scalar_t__ FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,struct dn_ifaddr*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 struct dn_dev* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(struct net_device *VAR_5)
{
 struct dn_ifaddr *VAR_6;
 __le16 VAR_7 = VAR_3;
 int VAR_8 = 0;
 struct dn_dev *VAR_9 = FUNC_8(VAR_5->dn_ptr);

 if ((VAR_5->type != VAR_0) && (VAR_5->type != VAR_1))
  return;







 if (VAR_9 == ((void*)0)) {
  int VAR_10;
  VAR_9 = FUNC_3(VAR_5, &VAR_10);
  if (VAR_9 == ((void*)0))
   return;
 }

 if (VAR_5->type == VAR_0) {
  if (FUNC_7(VAR_5->dev_addr, VAR_4, 4) != 0)
   return;
  VAR_7 = FUNC_6(VAR_5->dev_addr);
  VAR_8 = 1;
 }

 if (VAR_7 == 0)
  return;

 if ((VAR_6 = FUNC_2()) == ((void*)0))
  return;

 VAR_6->ifa_local = VAR_6->ifa_address = VAR_7;
 VAR_6->ifa_flags = 0;
 VAR_6->ifa_scope = VAR_2;
 FUNC_9(VAR_6->ifa_label, VAR_5->name);

 FUNC_5(VAR_5, VAR_6);





 if (VAR_8) {
  FUNC_0(VAR_5);
  if (FUNC_4(VAR_5, 0))
   FUNC_1(VAR_5);
 }
}
