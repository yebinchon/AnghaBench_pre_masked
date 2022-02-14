
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct cake_tin_data {void* tin_quantum_band; void* tin_quantum_prio; } ;
struct cake_sched_data {int rate_bps; int tin_cnt; int interval; int target; struct cake_tin_data* tins; int tin_order; int tin_index; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct cake_tin_data*,int,size_t,int ,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,unsigned int,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct Qdisc*) ;
 struct cake_sched_data* FUNC_4 (struct Qdisc*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_3)
{
 struct cake_sched_data *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5 = FUNC_2(FUNC_3(VAR_3));
 u64 VAR_6 = VAR_4->rate_bps;
 u32 VAR_7 = 256;
 u32 VAR_8 = 256;
 u32 VAR_9;

 VAR_4->tin_cnt = 8;


 VAR_4->tin_index = VAR_0;
 VAR_4->tin_order = VAR_1;


 for (VAR_9 = 0; VAR_9 < VAR_4->tin_cnt; VAR_9++) {
  struct cake_tin_data *VAR_10 = &VAR_4->tins[VAR_9];

  FUNC_0(VAR_10, VAR_6, VAR_5, FUNC_5(VAR_4->target),
         FUNC_5(VAR_4->interval));

  VAR_10->tin_quantum_prio = FUNC_1(VAR_2, 1U, VAR_7);
  VAR_10->tin_quantum_band = FUNC_1(VAR_2, 1U, VAR_8);


  VAR_6 *= 7;
  VAR_6 >>= 3;

  VAR_7 *= 3;
  VAR_7 >>= 1;

  VAR_8 *= 7;
  VAR_8 >>= 3;
 }

 return 0;
}
