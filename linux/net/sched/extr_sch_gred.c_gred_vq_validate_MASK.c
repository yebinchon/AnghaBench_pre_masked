
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct gred_sched {size_t DPs; size_t red_flags; int * tab; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const*,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct gred_sched *VAR_6, u32 VAR_7,
       const struct nlattr *VAR_8,
       struct netlink_ext_ack *VAR_9)
{
 struct nlattr *VAR_10[VAR_4 + 1];
 int VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_2(VAR_10, VAR_4, VAR_8,
       VAR_5, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_10[VAR_2]) {
  FUNC_0(VAR_9, "Virtual queue with no index specified");
  return -VAR_0;
 }
 VAR_12 = FUNC_1(VAR_10[VAR_2]);
 if (VAR_12 >= VAR_6->DPs) {
  FUNC_0(VAR_9, "Virtual queue with index out of bounds");
  return -VAR_0;
 }
 if (VAR_12 != VAR_7 && !VAR_6->tab[VAR_12]) {
  FUNC_0(VAR_9, "Virtual queue not yet instantiated");
  return -VAR_0;
 }

 if (VAR_10[VAR_3]) {
  u32 VAR_13 = FUNC_1(VAR_10[VAR_3]);

  if (VAR_6->red_flags && VAR_6->red_flags != VAR_13) {
   FUNC_0(VAR_9, "can't change per-virtual queue RED flags when per-Qdisc flags are used");
   return -VAR_0;
  }
  if (VAR_13 & ~VAR_1) {
   FUNC_0(VAR_9,
        "invalid RED flags specified");
   return -VAR_0;
  }
 }

 return 0;
}
