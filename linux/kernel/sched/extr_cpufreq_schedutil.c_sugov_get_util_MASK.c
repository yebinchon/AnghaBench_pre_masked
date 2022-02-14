
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_cpu {unsigned long max; int cpu; int bw_dl; } ;
struct rq {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct rq*) ;
 struct rq* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct rq*) ;
 unsigned long FUNC_4 (int ,unsigned long,unsigned long,int ,int *) ;

__attribute__((used)) static unsigned long FUNC_5(struct sugov_cpu *VAR_1)
{
 struct rq *VAR_2 = FUNC_2(VAR_1->cpu);
 unsigned long VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4 = FUNC_0(VAR_1->cpu);

 VAR_1->max = VAR_4;
 VAR_1->bw_dl = FUNC_1(VAR_2);

 return FUNC_4(VAR_1->cpu, VAR_3, VAR_4, VAR_0, ((void*)0));
}
