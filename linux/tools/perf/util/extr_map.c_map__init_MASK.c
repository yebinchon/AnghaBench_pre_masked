
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct map {int erange_warned; int refcnt; int * groups; int rb_node; int unmap_ip; int map_ip; int dso; scalar_t__ reloc; void* pgoff; void* end; void* start; } ;
struct dso {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dso*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct map *VAR_2, u64 VAR_3, u64 VAR_4, u64 VAR_5, struct dso *VAR_6)
{
 VAR_2->start = VAR_3;
 VAR_2->end = VAR_4;
 VAR_2->pgoff = VAR_5;
 VAR_2->reloc = 0;
 VAR_2->dso = FUNC_1(VAR_6);
 VAR_2->map_ip = VAR_0;
 VAR_2->unmap_ip = VAR_1;
 FUNC_0(&VAR_2->rb_node);
 VAR_2->groups = ((void*)0);
 VAR_2->erange_warned = 0;
 FUNC_2(&VAR_2->refcnt, 1);
}
