
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rtt {unsigned long timeo; unsigned long* srtt; unsigned long* sdrtt; scalar_t__* ntimeouts; } ;


 unsigned long VAR_0 ;

void FUNC_0(struct rpc_rtt *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned int VAR_4;

 VAR_1->timeo = VAR_2;

 if (VAR_2 > VAR_0)
  VAR_3 = (VAR_2 - VAR_0) << 3;
 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  VAR_1->srtt[VAR_4] = VAR_3;
  VAR_1->sdrtt[VAR_4] = VAR_0;
  VAR_1->ntimeouts[VAR_4] = 0;
 }
}
