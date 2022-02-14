
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_flow_data {int ref; int filter_list; int list; } ;
struct atm_qdisc_data {struct atm_flow_data link; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Qdisc*,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,struct Qdisc*,struct atm_qdisc_data*,struct atm_flow_data*) ;
 int FUNC_3 (char*,int) ;
 struct atm_qdisc_data* FUNC_4 (struct Qdisc*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_2, unsigned long VAR_3)
{
 struct atm_qdisc_data *VAR_4 = FUNC_4(VAR_2);
 struct atm_flow_data *VAR_5 = (struct atm_flow_data *)VAR_3;

 FUNC_2("atm_tc_delete(sch %p,[qdisc %p],flow %p)\n", VAR_2, VAR_4, VAR_5);
 if (FUNC_1(&VAR_5->list))
  return -VAR_1;
 if (FUNC_5(VAR_5->filter_list) || VAR_5 == &VAR_4->link)
  return -VAR_0;




 if (VAR_5->ref < 2) {
  FUNC_3("atm_tc_delete: flow->ref == %d\n", VAR_5->ref);
  return -VAR_1;
 }
 if (VAR_5->ref > 2)
  return -VAR_0;
 FUNC_0(VAR_2, VAR_3);
 return 0;
}
