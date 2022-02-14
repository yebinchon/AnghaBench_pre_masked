
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int prob; scalar_t__ burst_time; int qdelay; int accu_prob; int accu_prob_overflows; } ;
struct TYPE_5__ {int target; scalar_t__ bytemode; } ;
struct pie_sched_data {TYPE_3__ vars; TYPE_2__ params; } ;
struct TYPE_4__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct Qdisc*) ;
 struct pie_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static bool FUNC_5(struct Qdisc *VAR_1, u32 VAR_2)
{
 struct pie_sched_data *VAR_3 = FUNC_4(VAR_1);
 u64 VAR_4;
 u64 VAR_5 = VAR_3->vars.prob;
 u32 VAR_6 = FUNC_2(FUNC_3(VAR_1));


 if (VAR_3->vars.burst_time > 0)
  return 0;




 if ((VAR_3->vars.qdelay < VAR_3->params.target / 2) &&
     (VAR_3->vars.prob < VAR_0 / 5))
  return 0;




 if (VAR_1->qstats.backlog < 2 * VAR_6)
  return 0;




 if (VAR_3->params.bytemode && VAR_2 <= VAR_6)
  VAR_5 = (u64)VAR_2 * FUNC_0(VAR_5, VAR_6);
 else
  VAR_5 = VAR_3->vars.prob;

 if (VAR_5 == 0) {
  VAR_3->vars.accu_prob = 0;
  VAR_3->vars.accu_prob_overflows = 0;
 }

 if (VAR_5 > VAR_0 - VAR_3->vars.accu_prob)
  VAR_3->vars.accu_prob_overflows++;

 VAR_3->vars.accu_prob += VAR_5;

 if (VAR_3->vars.accu_prob_overflows == 0 &&
     VAR_3->vars.accu_prob < (VAR_0 / 100) * 85)
  return 0;
 if (VAR_3->vars.accu_prob_overflows == 8 &&
     VAR_3->vars.accu_prob >= VAR_0 / 2)
  return 1;

 FUNC_1(&VAR_4, 8);
 if (VAR_4 < VAR_5) {
  VAR_3->vars.accu_prob = 0;
  VAR_3->vars.accu_prob_overflows = 0;
  return 1;
 }

 return 0;
}
