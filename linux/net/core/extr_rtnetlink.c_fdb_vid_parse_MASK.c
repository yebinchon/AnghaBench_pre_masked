
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr *VAR_2, u16 *VAR_3,
    struct netlink_ext_ack *VAR_4)
{
 u16 VAR_5 = 0;

 if (VAR_2) {
  if (FUNC_2(VAR_2) != sizeof(u16)) {
   FUNC_0(VAR_4, "invalid vlan attribute size");
   return -VAR_0;
  }

  VAR_5 = FUNC_1(VAR_2);

  if (!VAR_5 || VAR_5 >= VAR_1) {
   FUNC_0(VAR_4, "invalid vlan id");
   return -VAR_0;
  }
 }
 *VAR_3 = VAR_5;
 return 0;
}
