
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rq {int nr_iowait; } ;
struct TYPE_2__ {scalar_t__* cpustat; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_2 ;
 struct rq* FUNC_1 () ;

void FUNC_2(u64 VAR_3)
{
 u64 *VAR_4 = VAR_2->cpustat;
 struct rq *VAR_5 = FUNC_1();

 if (FUNC_0(&VAR_5->nr_iowait) > 0)
  VAR_4[VAR_1] += VAR_3;
 else
  VAR_4[VAR_0] += VAR_3;
}
