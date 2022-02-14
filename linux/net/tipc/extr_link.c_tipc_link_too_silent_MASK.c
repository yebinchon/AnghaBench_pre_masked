
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {scalar_t__ silent_intv_cnt; scalar_t__ abort_limit; } ;



bool FUNC_0(struct tipc_link *VAR_0)
{
 return (VAR_0->silent_intv_cnt + 2 > VAR_0->abort_limit);
}
