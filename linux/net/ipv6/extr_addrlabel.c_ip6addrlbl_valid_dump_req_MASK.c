
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct netlink_ext_ack {int dummy; } ;
struct ifaddrlblmsg {scalar_t__ ifal_seq; scalar_t__ ifal_index; scalar_t__ ifal_flags; scalar_t__ ifal_prefixlen; scalar_t__ __ifal_reserved; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (struct nlmsghdr const*,int) ;
 struct ifaddrlblmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct nlmsghdr *VAR_1,
         struct netlink_ext_ack *VAR_2)
{
 struct ifaddrlblmsg *VAR_3;

 if (VAR_1->nlmsg_len < FUNC_3(sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid header for address label dump request");
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3->__ifal_reserved || VAR_3->ifal_prefixlen ||
     VAR_3->ifal_flags || VAR_3->ifal_index || VAR_3->ifal_seq) {
  FUNC_0(VAR_2, "Invalid values in header for address label dump request");
  return -VAR_0;
 }

 if (FUNC_1(VAR_1, sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid data after header for address label dump request");
  return -VAR_0;
 }

 return 0;
}
