
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sw_flow_match {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr const*) ;
 scalar_t__ FUNC_4 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_5(const struct sw_flow_match *VAR_6,
          u64 VAR_7, bool VAR_8,
          const struct nlattr **VAR_9, bool VAR_10)
{
 __be16 VAR_11 = 0;

 if (!((VAR_7 & (1 << VAR_2)) &&
       (VAR_7 & (1 << VAR_3)) &&
        FUNC_1(FUNC_3(VAR_9[VAR_3])))) {

  return 0;
 }

 if (!((VAR_7 & (1 << VAR_4)) &&
       (VAR_7 & (1 << VAR_1)))) {
  FUNC_0(VAR_10, "Invalid %s frame", (VAR_8) ? "C-VLAN" : "VLAN");
  return -VAR_0;
 }

 if (VAR_9[VAR_4])
  VAR_11 = FUNC_3(VAR_9[VAR_4]);

 if (!(VAR_11 & FUNC_2(VAR_5))) {
  if (VAR_11) {
   FUNC_0(VAR_10, "%s TCI does not have VLAN_CFI_MASK bit set.",
      (VAR_8) ? "C-VLAN" : "VLAN");
   return -VAR_0;
  } else if (FUNC_4(VAR_9[VAR_1])) {

   FUNC_0(VAR_10, "Truncated %s header has non-zero encap attribute.",
      (VAR_8) ? "C-VLAN" : "VLAN");
   return -VAR_0;
  }
 }

 return 1;
}
