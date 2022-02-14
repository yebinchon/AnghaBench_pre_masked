
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int dummy; } ;
struct sched_gate_list {int cycle_time; } ;
struct Qdisc {int dummy; } ;
typedef int s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 struct taprio_sched* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct sched_gate_list*) ;
 int FUNC_7 (struct taprio_sched*) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_1,
     struct sched_gate_list *VAR_2,
     ktime_t *VAR_3)
{
 struct taprio_sched *VAR_4 = FUNC_5(VAR_1);
 ktime_t VAR_5, VAR_6, VAR_7;
 s64 VAR_8;

 VAR_6 = FUNC_6(VAR_2);
 VAR_5 = FUNC_7(VAR_4);

 if (FUNC_3(VAR_6, VAR_5)) {
  *VAR_3 = VAR_6;
  return 0;
 }

 VAR_7 = VAR_2->cycle_time;






 if (FUNC_0(!VAR_7))
  return -VAR_0;




 VAR_8 = FUNC_1(FUNC_4(VAR_5, VAR_6), VAR_7);
 *VAR_3 = FUNC_2(VAR_6, (VAR_8 + 1) * VAR_7);
 return 0;
}
