
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtnexthop {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct netlink_ext_ack*) ;
 struct nlattr* FUNC_1 (struct nlattr*,int,int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct rtnexthop*) ;
 struct nlattr* FUNC_4 (struct rtnexthop*) ;
 struct rtnexthop* FUNC_5 (struct rtnexthop*,int*) ;
 scalar_t__ FUNC_6 (struct rtnexthop*,int) ;

int FUNC_7(struct nlattr *VAR_2, int VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 struct rtnexthop *VAR_5 = (struct rtnexthop *)VAR_2;
 struct nlattr *VAR_6;
 struct nlattr *VAR_7;
 u16 VAR_8;
 int VAR_9;

 while (FUNC_6(VAR_5, VAR_3)) {
  VAR_9 = FUNC_3(VAR_5);
  if (VAR_9 > 0) {
   VAR_7 = FUNC_4(VAR_5);
   VAR_6 = FUNC_1(VAR_7, VAR_9, VAR_1);

   if (VAR_6) {
    VAR_8 = FUNC_2(VAR_6);

    if (FUNC_0(VAR_8,
             VAR_4) != 0)
     return -VAR_0;
   }
  }
  VAR_5 = FUNC_5(VAR_5, &VAR_3);
 }

 return 0;
}
