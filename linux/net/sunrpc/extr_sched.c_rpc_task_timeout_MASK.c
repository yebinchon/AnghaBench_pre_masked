
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_timeout; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

unsigned long
FUNC_2(const struct rpc_task *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1->tk_timeout);

 if (VAR_2 != 0) {
  unsigned long VAR_3 = VAR_0;
  if (FUNC_1(VAR_3, VAR_2))
   return VAR_2 - VAR_3;
 }
 return 0;
}
