
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rpc_procinfo* rpc_proc; } ;
struct rpc_task {TYPE_1__ tk_msg; } ;
struct rpc_procinfo {char const* p_name; } ;



const char
*FUNC_0(const struct rpc_task *VAR_0)
{
 const struct rpc_procinfo *VAR_1 = VAR_0->tk_msg.rpc_proc;

 if (VAR_1) {
  if (VAR_1->p_name)
   return VAR_1->p_name;
  else
   return "NULL";
 } else
  return "no proc";
}
