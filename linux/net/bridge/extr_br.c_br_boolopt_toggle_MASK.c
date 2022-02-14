
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_bridge {int dummy; } ;
typedef enum br_boolopt_id { ____Placeholder_br_boolopt_id } br_boolopt_id ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct net_bridge*,int ,int) ;

int FUNC_2(struct net_bridge *VAR_1, enum br_boolopt_id VAR_2, bool VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_0, VAR_3);
  break;
 default:

  FUNC_0(1);
  break;
 }

 return 0;
}
