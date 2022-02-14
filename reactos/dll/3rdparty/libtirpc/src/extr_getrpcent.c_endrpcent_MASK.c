
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcdata {int * rpcf; int stayopen; scalar_t__ currentlen; int * current; } ;


 scalar_t__ VAR_0 ;
 struct rpcdata* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4()
{
 struct rpcdata *VAR_1 = FUNC_0();

 if (VAR_1 == 0)
  return;
 if (VAR_1->rpcf && !VAR_1->stayopen) {
  FUNC_2(VAR_1->rpcf);
  VAR_1->rpcf = ((void*)0);
 }
}
