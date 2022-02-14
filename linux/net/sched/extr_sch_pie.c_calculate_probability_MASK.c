
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int qdelay; int qdelay_old; int avg_dq_rate; int prob; int qlen_old; } ;
struct TYPE_5__ {int target; scalar_t__ beta; scalar_t__ alpha; } ;
struct pie_sched_data {TYPE_3__ vars; TYPE_2__ params; } ;
struct TYPE_4__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;
typedef int s64 ;
typedef int psched_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 struct pie_sched_data* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_4)
{
 struct pie_sched_data *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6 = VAR_4->qstats.backlog;
 psched_time_t VAR_7 = 0;
 psched_time_t VAR_8 = VAR_5->vars.qdelay;
 s64 VAR_9 = 0;
 u64 VAR_10;
 u64 VAR_11, VAR_12;
 u32 VAR_13;
 bool VAR_14 = 1;

 VAR_5->vars.qdelay_old = VAR_5->vars.qdelay;

 if (VAR_5->vars.avg_dq_rate > 0)
  VAR_7 = (VAR_6 << VAR_2) / VAR_5->vars.avg_dq_rate;
 else
  VAR_7 = 0;




 if (VAR_7 == 0 && VAR_6 != 0)
  VAR_14 = 0;
 VAR_11 = ((u64)VAR_5->params.alpha * (VAR_0 / VAR_3)) >> 4;
 VAR_12 = ((u64)VAR_5->params.beta * (VAR_0 / VAR_3)) >> 4;




 if (VAR_5->vars.prob < VAR_0 / 10) {
  VAR_11 >>= 1;
  VAR_12 >>= 1;

  VAR_13 = 100;
  while (VAR_5->vars.prob < FUNC_1(VAR_0, VAR_13) &&
         VAR_13 <= 1000000) {
   VAR_11 >>= 2;
   VAR_12 >>= 2;
   VAR_13 *= 10;
  }
 }


 VAR_9 += VAR_11 * (u64)(VAR_7 - VAR_5->params.target);
 VAR_9 += VAR_12 * (u64)(VAR_7 - VAR_8);

 VAR_10 = VAR_5->vars.prob;


 if (VAR_9 > (s64)(VAR_0 / (100 / 2)) &&
     VAR_5->vars.prob >= VAR_0 / 10)
  VAR_9 = (VAR_0 / 100) * 2;






 if (VAR_7 > (FUNC_0(250 * VAR_1)))
  VAR_9 += VAR_0 / (100 / 2);

 VAR_5->vars.prob += VAR_9;

 if (VAR_9 > 0) {

  if (VAR_5->vars.prob < VAR_10) {
   VAR_5->vars.prob = VAR_0;





   VAR_14 = 0;
  }
 } else {

  if (VAR_5->vars.prob > VAR_10)
   VAR_5->vars.prob = 0;
 }





 if (VAR_7 == 0 && VAR_8 == 0 && VAR_14)

  VAR_5->vars.prob -= VAR_5->vars.prob / 64u;

 VAR_5->vars.qdelay = VAR_7;
 VAR_5->vars.qlen_old = VAR_6;







 if ((VAR_5->vars.qdelay < VAR_5->params.target / 2) &&
     (VAR_5->vars.qdelay_old < VAR_5->params.target / 2) &&
     VAR_5->vars.prob == 0 &&
     VAR_5->vars.avg_dq_rate > 0)
  FUNC_2(&VAR_5->vars);
}
