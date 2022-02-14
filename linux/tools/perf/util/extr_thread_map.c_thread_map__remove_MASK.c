
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_thread_map {int nr; TYPE_1__* map; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct perf_thread_map *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->nr < 1)
  return -VAR_0;

 if (VAR_2 >= VAR_1->nr)
  return -VAR_0;




 FUNC_0(&VAR_1->map[VAR_2].comm);

 for (VAR_3 = VAR_2; VAR_3 < VAR_1->nr - 1; VAR_3++)
  VAR_1->map[VAR_3] = VAR_1->map[VAR_3 + 1];

 VAR_1->nr--;
 return 0;
}
