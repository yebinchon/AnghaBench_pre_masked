
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int q; } ;
struct atm_qdisc_data {TYPE_1__ link; int task; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*) ;
 struct sk_buff* FUNC_1 (int ) ;
 struct atm_qdisc_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct Qdisc *VAR_0)
{
 struct atm_qdisc_data *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2;

 FUNC_0("atm_tc_dequeue(sch %p,[qdisc %p])\n", VAR_0, VAR_1);
 FUNC_3(&VAR_1->task);
 VAR_2 = FUNC_1(VAR_1->link.q);
 if (VAR_2)
  VAR_0->q.qlen--;
 return VAR_2;
}
