
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int* FUNC_1 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_2(const struct nlattr *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 const u32 *VAR_5 = FUNC_1(VAR_3);

 if (*VAR_5 & ~VAR_2 || *VAR_5 == VAR_1) {
  FUNC_0(VAR_4, "MPLS label out of range");
  return -VAR_0;
 }

 return 0;
}
