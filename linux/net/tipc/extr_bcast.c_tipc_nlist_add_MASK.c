
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_nlist {scalar_t__ self; int local; int remote; int list; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;

void FUNC_1(struct tipc_nlist *VAR_0, u32 VAR_1)
{
 if (VAR_1 == VAR_0->self)
  VAR_0->local = 1;
 else if (FUNC_0(&VAR_0->list, VAR_1, 0))
  VAR_0->remote++;
}
