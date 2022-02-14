
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tstamp; } ;
struct etf_sched_data {int delta; scalar_t__ deadline_mode; int (* get_time ) () ;} ;
struct Qdisc {int dummy; } ;
typedef int ktime_t ;


 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct etf_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct Qdisc*,struct sk_buff*,int ) ;
 int FUNC_8 (struct Qdisc*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct Qdisc *VAR_0)
{
 struct etf_sched_data *VAR_1 = FUNC_4(VAR_0);
 struct sk_buff *VAR_2;
 ktime_t VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = VAR_1->get_time();


 if (FUNC_2(VAR_2->tstamp, VAR_3)) {
  FUNC_7(VAR_0, VAR_2, VAR_3);
  VAR_2 = ((void*)0);
  goto out;
 }




 if (VAR_1->deadline_mode) {
  FUNC_8(VAR_0, VAR_2);
  VAR_2->tstamp = VAR_3;
  goto out;
 }

 VAR_4 = FUNC_3(VAR_2->tstamp, VAR_1->delta);


 if (FUNC_1(VAR_3, VAR_4))
  FUNC_8(VAR_0, VAR_2);
 else
  VAR_2 = ((void*)0);

out:

 FUNC_5(VAR_0);

 return VAR_2;
}
