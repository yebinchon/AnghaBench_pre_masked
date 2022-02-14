
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct taprio_sched {int picos_per_byte; } ;
struct sched_entry {scalar_t__ interval; int budget; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct taprio_sched *VAR_0, struct sched_entry *VAR_1)
{
 FUNC_1(&VAR_1->budget,
     FUNC_2((u64)VAR_1->interval * 1000,
        FUNC_0(&VAR_0->picos_per_byte)));
}
