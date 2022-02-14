
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_flow_data {scalar_t__ excess; TYPE_2__* sock; int old_pop; TYPE_1__* vcc; int block; int q; int list; scalar_t__ ref; } ;
struct atm_qdisc_data {struct atm_flow_data link; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {int file; } ;
struct TYPE_3__ {int pop; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct atm_flow_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 struct atm_qdisc_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct atm_qdisc_data *VAR_2 = FUNC_4(VAR_0);
 struct atm_flow_data *VAR_3 = (struct atm_flow_data *)VAR_1;

 FUNC_3("atm_tc_put(sch %p,[qdisc %p],flow %p)\n", VAR_0, VAR_2, VAR_3);
 if (--VAR_3->ref)
  return;
 FUNC_3("atm_tc_put: destroying\n");
 FUNC_2(&VAR_3->list);
 FUNC_3("atm_tc_put: qdisc %p\n", VAR_3->q);
 FUNC_5(VAR_3->q);
 FUNC_7(VAR_3->block);
 if (VAR_3->sock) {
  FUNC_3("atm_tc_put: f_count %ld\n",
   FUNC_0(VAR_3->sock->file));
  VAR_3->vcc->pop = VAR_3->old_pop;
  FUNC_6(VAR_3->sock);
 }
 if (VAR_3->excess)
  FUNC_8(VAR_0, (unsigned long)VAR_3->excess);
 if (VAR_3 != &VAR_2->link)
  FUNC_1(VAR_3);




}
