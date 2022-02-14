
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cake_sched_data {int rate_bps; int tin_cnt; TYPE_1__* tins; int interval; int target; int tin_order; int tin_index; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int tin_quantum_prio; int tin_quantum_band; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Qdisc*) ;
 struct cake_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_2)
{
 struct cake_sched_data *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4 = FUNC_1(FUNC_2(VAR_2));
 u64 VAR_5 = VAR_3->rate_bps;
 u32 VAR_6 = 1024;

 VAR_3->tin_cnt = 4;


 VAR_3->tin_index = VAR_1;
 VAR_3->tin_order = VAR_0;


 FUNC_0(&VAR_3->tins[0], VAR_5, VAR_4,
        FUNC_4(VAR_3->target), FUNC_4(VAR_3->interval));
 FUNC_0(&VAR_3->tins[1], VAR_5 >> 4, VAR_4,
        FUNC_4(VAR_3->target), FUNC_4(VAR_3->interval));
 FUNC_0(&VAR_3->tins[2], VAR_5 >> 1, VAR_4,
        FUNC_4(VAR_3->target), FUNC_4(VAR_3->interval));
 FUNC_0(&VAR_3->tins[3], VAR_5 >> 2, VAR_4,
        FUNC_4(VAR_3->target), FUNC_4(VAR_3->interval));


 VAR_3->tins[0].tin_quantum_prio = VAR_6;
 VAR_3->tins[1].tin_quantum_prio = VAR_6 >> 4;
 VAR_3->tins[2].tin_quantum_prio = VAR_6 << 2;
 VAR_3->tins[3].tin_quantum_prio = VAR_6 << 4;


 VAR_3->tins[0].tin_quantum_band = VAR_6;
 VAR_3->tins[1].tin_quantum_band = VAR_6 >> 4;
 VAR_3->tins[2].tin_quantum_band = VAR_6 >> 1;
 VAR_3->tins[3].tin_quantum_band = VAR_6 >> 2;

 return 0;
}
