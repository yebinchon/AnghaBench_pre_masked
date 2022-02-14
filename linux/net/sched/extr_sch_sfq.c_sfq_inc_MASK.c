
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfq_sched_data {int cur_depth; TYPE_1__* slots; } ;
typedef size_t sfq_index ;
struct TYPE_2__ {int qlen; } ;


 int FUNC_0 (struct sfq_sched_data*,size_t) ;
 int FUNC_1 (struct sfq_sched_data*,size_t,size_t,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct sfq_sched_data *VAR_0, sfq_index VAR_1)
{
 sfq_index VAR_2, VAR_3;
 int VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);

 VAR_4 = ++VAR_0->slots[VAR_1].qlen;
 if (VAR_0->cur_depth < VAR_4)
  VAR_0->cur_depth = VAR_4;
 FUNC_0(VAR_0, VAR_1);
}
