
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int mark; int priority; } ;
struct cake_tin_data {int dummy; } ;
struct cake_sched_data {int rate_flags; int fwmark_mask; int fwmark_shft; scalar_t__ tin_mode; int tin_cnt; int* tin_order; int* tin_index; struct cake_tin_data* tins; } ;
struct Qdisc {scalar_t__ handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (struct sk_buff*,int) ;
 struct cake_sched_data* FUNC_3 (struct Qdisc*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct cake_tin_data *FUNC_5(struct Qdisc *VAR_2,
          struct sk_buff *VAR_3)
{
 struct cake_sched_data *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5, VAR_6;
 u8 VAR_7;




 VAR_7 = FUNC_2(VAR_3,
        VAR_4->rate_flags & VAR_1);
 VAR_6 = (VAR_3->mark & VAR_4->fwmark_mask) >> VAR_4->fwmark_shft;

 if (VAR_4->tin_mode == VAR_0)
  VAR_5 = 0;

 else if (VAR_6 && VAR_6 <= VAR_4->tin_cnt)
  VAR_5 = VAR_4->tin_order[VAR_6 - 1];

 else if (FUNC_0(VAR_3->priority) == VAR_2->handle &&
   FUNC_1(VAR_3->priority) > 0 &&
   FUNC_1(VAR_3->priority) <= VAR_4->tin_cnt)
  VAR_5 = VAR_4->tin_order[FUNC_1(VAR_3->priority) - 1];

 else {
  VAR_5 = VAR_4->tin_index[VAR_7];

  if (FUNC_4(VAR_5 >= VAR_4->tin_cnt))
   VAR_5 = 0;
 }

 return &VAR_4->tins[VAR_5];
}
