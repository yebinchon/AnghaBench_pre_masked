
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ type; scalar_t__ addr_len; int priv_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6)
{

 if ((VAR_6->flags & VAR_5) || VAR_6->type != VAR_0 ||
     VAR_6->addr_len != VAR_3) {
  FUNC_3(VAR_6, "Cannot use loopback or non-ethernet device as HSR slave.\n");
  return -VAR_1;
 }


 if (FUNC_1(VAR_6)) {
  FUNC_3(VAR_6, "Cannot create trees of HSR devices.\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_6)) {
  FUNC_3(VAR_6, "This device is already a HSR slave.\n");
  return -VAR_1;
 }

 if (FUNC_2(VAR_6)) {
  FUNC_3(VAR_6, "HSR on top of VLAN is not yet supported in this driver.\n");
  return -VAR_1;
 }

 if (VAR_6->priv_flags & VAR_4) {
  FUNC_3(VAR_6, "This device does not support bridging.\n");
  return -VAR_2;
 }





 return 0;
}
