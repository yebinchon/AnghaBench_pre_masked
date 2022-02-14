
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_handle {TYPE_1__* func_resolver; } ;
struct func_map {unsigned long long addr; int * func; int * mod; } ;
struct TYPE_2__ {int priv; int * (* func ) (int ,unsigned long long*,int **) ;struct func_map map; } ;


 struct func_map* FUNC_0 (struct tep_handle*,unsigned long long) ;
 int * FUNC_1 (int ,unsigned long long*,int **) ;

__attribute__((used)) static struct func_map *
FUNC_2(struct tep_handle *VAR_0, unsigned long long VAR_1)
{
 struct func_map *VAR_2;

 if (!VAR_0->func_resolver)
  return FUNC_0(VAR_0, VAR_1);

 VAR_2 = &VAR_0->func_resolver->map;
 VAR_2->mod = ((void*)0);
 VAR_2->addr = VAR_1;
 VAR_2->func = VAR_0->func_resolver->func(VAR_0->func_resolver->priv,
          &VAR_2->addr, &VAR_2->mod);
 if (VAR_2->func == ((void*)0))
  return ((void*)0);

 return VAR_2;
}
