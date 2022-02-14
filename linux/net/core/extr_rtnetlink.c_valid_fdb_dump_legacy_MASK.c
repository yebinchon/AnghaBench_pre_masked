
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ndmsg {int dummy; } ;
struct ifinfomsg {int ifi_index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nlattr*) ;
 struct ifinfomsg* FUNC_2 (struct nlmsghdr const*) ;
 int FUNC_3 (struct nlmsghdr const*) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(const struct nlmsghdr *VAR_4,
     int *VAR_5, int *VAR_6,
     struct netlink_ext_ack *VAR_7)
{
 struct nlattr *VAR_8[VAR_2+1];
 int VAR_9;
 if (FUNC_3(VAR_4) != sizeof(struct ndmsg) &&
     (FUNC_3(VAR_4) != sizeof(struct ndmsg) +
      FUNC_0(sizeof(u32)))) {
  struct ifinfomsg *VAR_10;

  VAR_9 = FUNC_4(VAR_4, sizeof(struct ifinfomsg),
          VAR_8, VAR_2, VAR_3,
          VAR_7);
  if (VAR_9 < 0) {
   return -VAR_0;
  } else if (VAR_9 == 0) {
   if (VAR_8[VAR_1])
    *VAR_5 = FUNC_1(VAR_8[VAR_1]);
  }

  VAR_10 = FUNC_2(VAR_4);
  *VAR_6 = VAR_10->ifi_index;
 }
 return 0;
}
