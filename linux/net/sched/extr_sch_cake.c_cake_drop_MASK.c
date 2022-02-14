
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {scalar_t__ truesize; } ;
struct cake_tin_data {int tin_dropped; int tin_backlog; int * backlogs; int unresponsive_flow_count; int cparams; struct cake_flow* flows; } ;
struct cake_sched_data {int overflow_timeout; int rate_flags; int buffer_used; struct cake_tin_data* tins; struct cake_heap_entry* overflow_heap; } ;
struct cake_heap_entry {size_t t; size_t b; } ;
struct cake_flow {int dropped; int cvars; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {int drops; int backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff**) ;
 int FUNC_1 (struct cake_sched_data*,struct cake_tin_data*,struct sk_buff*,int ,int) ;
 int FUNC_2 (struct cake_sched_data*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 struct sk_buff* FUNC_4 (struct cake_flow*) ;
 int FUNC_5 () ;
 size_t FUNC_6 (struct sk_buff*) ;
 struct cake_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*,int,size_t) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static unsigned int FUNC_10(struct Qdisc *VAR_3, struct sk_buff **VAR_4)
{
 struct cake_sched_data *VAR_5 = FUNC_7(VAR_3);
 ktime_t VAR_6 = FUNC_5();
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9;
 struct cake_heap_entry VAR_10;
 struct cake_tin_data *VAR_11;
 struct cake_flow *VAR_12;
 struct sk_buff *VAR_13;

 if (!VAR_5->overflow_timeout) {
  int VAR_14;

  for (VAR_14 = VAR_1 * VAR_2 / 2; VAR_14 >= 0; VAR_14--)
   FUNC_2(VAR_5, VAR_14);
 }
 VAR_5->overflow_timeout = 65535;


 VAR_10 = VAR_5->overflow_heap[0];
 VAR_8 = VAR_10.t;
 VAR_7 = VAR_10.b;

 VAR_11 = &VAR_5->tins[VAR_8];
 VAR_12 = &VAR_11->flows[VAR_7];
 VAR_13 = FUNC_4(VAR_12);
 if (FUNC_9(!VAR_13)) {

  VAR_5->overflow_timeout = 0;
  return VAR_7 + (VAR_8 << 16);
 }

 if (FUNC_3(&VAR_12->cvars, &VAR_11->cparams, VAR_6))
  VAR_11->unresponsive_flow_count++;

 VAR_9 = FUNC_6(VAR_13);
 VAR_5->buffer_used -= VAR_13->truesize;
 VAR_11->backlogs[VAR_7] -= VAR_9;
 VAR_11->tin_backlog -= VAR_9;
 VAR_3->qstats.backlog -= VAR_9;
 FUNC_8(VAR_3, 1, VAR_9);

 VAR_12->dropped++;
 VAR_11->tin_dropped++;
 VAR_3->qstats.drops++;

 if (VAR_5->rate_flags & VAR_0)
  FUNC_1(VAR_5, VAR_11, VAR_13, VAR_6, 1);

 FUNC_0(VAR_13, VAR_4);
 VAR_3->q.qlen--;

 FUNC_2(VAR_5, 0);

 return VAR_7 + (VAR_8 << 16);
}
