
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct cake_sched_data {scalar_t__ cur_flow; int cur_tin; } ;
struct Qdisc {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cake_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_1, u16 VAR_2)
{
 struct cake_sched_data *VAR_3 = FUNC_2(VAR_1);
 struct sk_buff *VAR_4;

 VAR_3->cur_tin = VAR_2;
 for (VAR_3->cur_flow = 0; VAR_3->cur_flow < VAR_0; VAR_3->cur_flow++)
  while (!!(VAR_4 = FUNC_0(VAR_1)))
   FUNC_1(VAR_4);
}
