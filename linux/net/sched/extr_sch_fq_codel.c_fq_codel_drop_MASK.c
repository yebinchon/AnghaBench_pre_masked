
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fq_codel_sched_data {unsigned int flows_cnt; unsigned int* backlogs; unsigned int memory_usage; struct fq_codel_flow* flows; } ;
struct TYPE_5__ {unsigned int count; } ;
struct fq_codel_flow {TYPE_1__ cvars; } ;
struct TYPE_7__ {unsigned int qlen; } ;
struct TYPE_6__ {unsigned int drops; unsigned int backlog; } ;
struct Qdisc {TYPE_3__ q; TYPE_2__ qstats; } ;
struct TYPE_8__ {scalar_t__ mem_usage; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff**) ;
 struct sk_buff* FUNC_1 (struct fq_codel_flow*) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct fq_codel_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static unsigned int FUNC_5(struct Qdisc *VAR_0, unsigned int VAR_1,
      struct sk_buff **VAR_2)
{
 struct fq_codel_sched_data *VAR_3 = FUNC_4(VAR_0);
 struct sk_buff *VAR_4;
 unsigned int VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;
 struct fq_codel_flow *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3->flows_cnt; VAR_7++) {
  if (VAR_3->backlogs[VAR_7] > VAR_5) {
   VAR_5 = VAR_3->backlogs[VAR_7];
   VAR_6 = VAR_7;
  }
 }


 VAR_10 = VAR_5 >> 1;

 VAR_9 = &VAR_3->flows[VAR_6];
 VAR_8 = 0;
 VAR_7 = 0;
 do {
  VAR_4 = FUNC_1(VAR_9);
  VAR_8 += FUNC_3(VAR_4);
  VAR_11 += FUNC_2(VAR_4)->mem_usage;
  FUNC_0(VAR_4, VAR_2);
 } while (++VAR_7 < VAR_1 && VAR_8 < VAR_10);


 VAR_9->cvars.count += VAR_7;
 VAR_3->backlogs[VAR_6] -= VAR_8;
 VAR_3->memory_usage -= VAR_11;
 VAR_0->qstats.drops += VAR_7;
 VAR_0->qstats.backlog -= VAR_8;
 VAR_0->q.qlen -= VAR_7;
 return VAR_6;
}
