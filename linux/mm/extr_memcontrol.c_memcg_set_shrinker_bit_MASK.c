
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memcg_shrinker_map {int map; } ;
struct mem_cgroup {TYPE_1__** nodeinfo; } ;
struct TYPE_2__ {int shrinker_map; } ;


 int FUNC_0 (struct mem_cgroup*) ;
 struct memcg_shrinker_map* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;

void FUNC_6(struct mem_cgroup *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_2 >= 0 && VAR_0 && !FUNC_0(VAR_0)) {
  struct memcg_shrinker_map *VAR_3;

  FUNC_2();
  VAR_3 = FUNC_1(VAR_0->nodeinfo[VAR_1]->shrinker_map);

  FUNC_5();
  FUNC_4(VAR_2, VAR_3->map);
  FUNC_3();
 }
}
