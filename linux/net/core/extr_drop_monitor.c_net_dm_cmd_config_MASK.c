
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct genl_info {struct netlink_ext_ack* extack; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct genl_info*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct genl_info*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1,
   struct genl_info *VAR_2)
{
 struct netlink_ext_ack *VAR_3 = VAR_2->extack;
 int VAR_4;

 if (FUNC_2()) {
  FUNC_0(VAR_3, "Cannot configure drop monitor during monitoring");
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 return 0;
}
