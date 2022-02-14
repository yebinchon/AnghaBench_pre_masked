
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ truesize; } ;
struct cake_tin_data {int * overflow_idx; int tin_backlog; int * backlogs; struct cake_flow* flows; } ;
struct cake_sched_data {size_t cur_tin; size_t cur_flow; scalar_t__ overflow_timeout; int buffer_used; struct cake_tin_data* tins; } ;
struct cake_flow {scalar_t__ head; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {int backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 int FUNC_0 (struct cake_sched_data*,int ) ;
 struct sk_buff* FUNC_1 (struct cake_flow*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct cake_sched_data* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct Qdisc *VAR_0)
{
 struct cake_sched_data *VAR_1 = FUNC_3(VAR_0);
 struct cake_tin_data *VAR_2 = &VAR_1->tins[VAR_1->cur_tin];
 struct cake_flow *VAR_3 = &VAR_2->flows[VAR_1->cur_flow];
 struct sk_buff *VAR_4 = ((void*)0);
 u32 VAR_5;

 if (VAR_3->head) {
  VAR_4 = FUNC_1(VAR_3);
  VAR_5 = FUNC_2(VAR_4);
  VAR_2->backlogs[VAR_1->cur_flow] -= VAR_5;
  VAR_2->tin_backlog -= VAR_5;
  VAR_0->qstats.backlog -= VAR_5;
  VAR_1->buffer_used -= VAR_4->truesize;
  VAR_0->q.qlen--;

  if (VAR_1->overflow_timeout)
   FUNC_0(VAR_1, VAR_2->overflow_idx[VAR_1->cur_flow]);
 }
 return VAR_4;
}
