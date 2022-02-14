
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int dq_count; int dq_tstamp; int avg_dq_rate; int burst_time; } ;
struct pie_sched_data {TYPE_2__ vars; } ;
struct TYPE_3__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;
typedef int psched_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 () ;
 struct pie_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_3, struct sk_buff *VAR_4)
{
 struct pie_sched_data *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = VAR_3->qstats.backlog;





 if (VAR_6 >= VAR_2 && VAR_5->vars.dq_count == VAR_0) {
  VAR_5->vars.dq_tstamp = FUNC_0();
  VAR_5->vars.dq_count = 0;
 }
 if (VAR_5->vars.dq_count != VAR_0) {
  VAR_5->vars.dq_count += VAR_4->len;

  if (VAR_5->vars.dq_count >= VAR_2) {
   psched_time_t VAR_7 = FUNC_0();
   u32 VAR_8 = VAR_7 - VAR_5->vars.dq_tstamp;
   u32 VAR_9 = VAR_5->vars.dq_count << VAR_1;

   if (VAR_8 == 0)
    return;

   VAR_9 = VAR_9 / VAR_8;

   if (VAR_5->vars.avg_dq_rate == 0)
    VAR_5->vars.avg_dq_rate = VAR_9;
   else
    VAR_5->vars.avg_dq_rate =
        (VAR_5->vars.avg_dq_rate -
         (VAR_5->vars.avg_dq_rate >> 3)) + (VAR_9 >> 3);






   if (VAR_6 < VAR_2) {
    VAR_5->vars.dq_count = VAR_0;
   } else {
    VAR_5->vars.dq_count = 0;
    VAR_5->vars.dq_tstamp = FUNC_0();
   }

   if (VAR_5->vars.burst_time > 0) {
    if (VAR_5->vars.burst_time > VAR_8)
     VAR_5->vars.burst_time -= VAR_8;
    else
     VAR_5->vars.burst_time = 0;
   }
  }
 }
}
