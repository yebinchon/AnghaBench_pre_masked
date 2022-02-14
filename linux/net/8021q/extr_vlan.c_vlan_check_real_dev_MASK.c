
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {char* name; int features; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (struct net_device*,int ,int ) ;

int FUNC_3(struct net_device *VAR_3,
   __be16 VAR_4, u16 VAR_5,
   struct netlink_ext_ack *VAR_6)
{
 const char *VAR_7 = VAR_3->name;

 if (VAR_3->features & VAR_2) {
  FUNC_1("VLANs not supported on %s\n", VAR_7);
  FUNC_0(VAR_6, "VLANs not supported on device");
  return -VAR_1;
 }

 if (FUNC_2(VAR_3, VAR_4, VAR_5) != ((void*)0)) {
  FUNC_0(VAR_6, "VLAN device already exists");
  return -VAR_0;
 }

 return 0;
}
