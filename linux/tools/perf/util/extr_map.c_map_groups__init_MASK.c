
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int refcnt; struct machine* machine; int maps; } ;
struct machine {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct map_groups *VAR_0, struct machine *VAR_1)
{
 FUNC_0(&VAR_0->maps);
 VAR_0->machine = VAR_1;
 FUNC_1(&VAR_0->refcnt, 1);
}
