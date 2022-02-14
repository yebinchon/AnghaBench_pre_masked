
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_name_seq {int upper; int lower; int type; } ;
struct tipc_group {int scope; int instance; int type; } ;



void FUNC_0(struct tipc_group *VAR_0, struct tipc_name_seq *VAR_1,
       int *VAR_2)
{
 VAR_1->type = VAR_0->type;
 VAR_1->lower = VAR_0->instance;
 VAR_1->upper = VAR_0->instance;
 *VAR_2 = VAR_0->scope;
}
