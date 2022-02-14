
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*) ;
 int FUNC_1 (int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_2(bool VAR_2, bool VAR_3,
    struct netlink_ext_ack *VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6;

 if (VAR_2) {
  VAR_6 = FUNC_1(VAR_1, VAR_4);
  if (VAR_6)
   return VAR_6;
  VAR_5 = 1;
 }

 if (VAR_3) {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6)
   goto err_monitor_hw;
 }

 return 0;

err_monitor_hw:
 if (VAR_5)
  FUNC_1(VAR_0, VAR_4);
 return VAR_6;
}
