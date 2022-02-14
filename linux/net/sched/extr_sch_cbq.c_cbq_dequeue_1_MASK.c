
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cbq_sched_data {int activemask; } ;
struct Qdisc {int dummy; } ;


 struct sk_buff* FUNC_0 (struct Qdisc*,int) ;
 int FUNC_1 (unsigned int) ;
 struct cbq_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_3(struct Qdisc *VAR_0)
{
 struct cbq_sched_data *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2;
 unsigned int VAR_3;

 VAR_3 = VAR_1->activemask & 0xFF;
 while (VAR_3) {
  int VAR_4 = FUNC_1(~VAR_3);
  VAR_3 &= ~(1<<VAR_4);
  VAR_2 = FUNC_0(VAR_0, VAR_4);
  if (VAR_2)
   return VAR_2;
 }
 return ((void*)0);
}
