
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbq_wrropt {scalar_t__ priority; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct tc_cbq_wrropt* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct nlattr *VAR_5[VAR_1 + 1],
    struct nlattr *VAR_6,
    struct netlink_ext_ack *VAR_7)
{
 int VAR_8;

 if (!VAR_6) {
  FUNC_0(VAR_7, "CBQ options are required for this operation");
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_6,
       VAR_4, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5[VAR_2]) {
  const struct tc_cbq_wrropt *VAR_9 = FUNC_1(VAR_5[VAR_2]);

  if (VAR_9->priority > VAR_3) {
   FUNC_0(VAR_7, "priority is bigger than TC_CBQ_MAXPRIO");
   VAR_8 = -VAR_0;
  }
 }
 return VAR_8;
}
