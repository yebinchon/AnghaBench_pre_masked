
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static bool FUNC_1(u32 VAR_1, u8 VAR_2, struct netlink_ext_ack *VAR_3)
{
 if (VAR_2 > VAR_0) {
  FUNC_0(VAR_3, "Invalid prefix length");
  return 0;
 }

 if ((VAR_2 < VAR_0) && (VAR_1 << VAR_2)) {
  FUNC_0(VAR_3,
          "Invalid prefix for given prefix length");
  return 0;
 }

 return 1;
}
