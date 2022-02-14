
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cake_tin_data {int tin_quantum_band; int tin_quantum_prio; } ;
struct cake_sched_data {int tin_cnt; int interval; int target; int tin_order; int tin_index; int rate_bps; struct cake_tin_data* tins; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cake_tin_data*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Qdisc*) ;
 struct cake_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_2)
{
 struct cake_sched_data *VAR_3 = FUNC_3(VAR_2);
 struct cake_tin_data *VAR_4 = &VAR_3->tins[0];
 u32 VAR_5 = FUNC_1(FUNC_2(VAR_2));
 u64 VAR_6 = VAR_3->rate_bps;

 VAR_3->tin_cnt = 1;

 VAR_3->tin_index = VAR_0;
 VAR_3->tin_order = VAR_1;

 FUNC_0(VAR_4, VAR_6, VAR_5,
        FUNC_4(VAR_3->target), FUNC_4(VAR_3->interval));
 VAR_4->tin_quantum_band = 65535;
 VAR_4->tin_quantum_prio = 65535;

 return 0;
}
