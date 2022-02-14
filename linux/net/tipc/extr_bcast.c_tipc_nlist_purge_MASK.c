
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nlist {int local; scalar_t__ remote; int list; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct tipc_nlist *VAR_0)
{
 FUNC_0(&VAR_0->list);
 VAR_0->remote = 0;
 VAR_0->local = 0;
}
