
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nlist {int self; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tipc_nlist*,int ,int) ;

void FUNC_2(struct tipc_nlist *VAR_0, u32 VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->list);
 VAR_0->self = VAR_1;
}
