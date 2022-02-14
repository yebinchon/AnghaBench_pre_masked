
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int maps; } ;
struct map {struct map_groups* groups; } ;


 int FUNC_0 (int *,struct map*) ;
 int FUNC_1 (int *,struct map*) ;

__attribute__((used)) static void FUNC_2(struct map_groups *VAR_0, struct map *VAR_1)
{
 FUNC_0(&VAR_0->maps, VAR_1);
 FUNC_1(&VAR_0->maps, VAR_1);
 VAR_1->groups = VAR_0;
}
