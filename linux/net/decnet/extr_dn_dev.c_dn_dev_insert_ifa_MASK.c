
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int dev_addr; } ;
struct dn_ifaddr {scalar_t__ ifa_local; int ifa_next; } ;
struct dn_dev {int ifa_list; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,struct dn_ifaddr*) ;
 int FUNC_2 (struct net_device*,unsigned char*) ;
 int FUNC_3 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct dn_ifaddr*) ;
 int VAR_4 ;
 int FUNC_6 (int ,struct dn_ifaddr*) ;
 struct dn_ifaddr* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dn_dev *VAR_5, struct dn_ifaddr *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->dev;
 struct dn_ifaddr *VAR_8;
 unsigned char VAR_9[6];

 FUNC_0();


 for (VAR_8 = FUNC_7(VAR_5->ifa_list);
      VAR_8 != ((void*)0);
      VAR_8 = FUNC_7(VAR_8->ifa_next)) {
  if (VAR_8->ifa_local == VAR_6->ifa_local)
   return -VAR_1;
 }

 if (VAR_7->type == VAR_0) {
  if (VAR_6->ifa_local != FUNC_4(VAR_7->dev_addr)) {
   FUNC_3(VAR_9, VAR_6->ifa_local);
   FUNC_2(VAR_7, VAR_9);
  }
 }

 VAR_6->ifa_next = VAR_5->ifa_list;
 FUNC_6(VAR_5->ifa_list, VAR_6);

 FUNC_5(VAR_3, VAR_6);
 FUNC_1(&VAR_4, VAR_2, VAR_6);

 return 0;
}
