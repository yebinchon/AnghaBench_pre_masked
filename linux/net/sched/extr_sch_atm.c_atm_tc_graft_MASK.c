
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct atm_qdisc_data {int dummy; } ;
struct atm_flow_data {struct Qdisc* q; int list; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct Qdisc VAR_1 ;
 int FUNC_1 (char*,struct Qdisc*,struct atm_qdisc_data*,struct atm_flow_data*,struct Qdisc*,struct Qdisc**) ;
 struct atm_qdisc_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_2, unsigned long VAR_3,
   struct Qdisc *VAR_4, struct Qdisc **VAR_5,
   struct netlink_ext_ack *VAR_6)
{
 struct atm_qdisc_data *VAR_7 = FUNC_2(VAR_2);
 struct atm_flow_data *VAR_8 = (struct atm_flow_data *)VAR_3;

 FUNC_1("atm_tc_graft(sch %p,[qdisc %p],flow %p,new %p,old %p)\n",
  VAR_2, VAR_7, VAR_8, VAR_4, VAR_5);
 if (FUNC_0(&VAR_8->list))
  return -VAR_0;
 if (!VAR_4)
  VAR_4 = &VAR_1;
 *VAR_5 = VAR_8->q;
 VAR_8->q = VAR_4;
 if (*VAR_5)
  FUNC_3(*VAR_5);
 return 0;
}
