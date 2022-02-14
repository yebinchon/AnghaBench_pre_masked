
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int percpu_cluster; int * cluster_info; int free_clusters; } ;
struct percpu_cluster {int index; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct percpu_cluster* FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct swap_info_struct *VAR_1,
 unsigned long VAR_2)
{
 struct percpu_cluster *VAR_3;
 bool VAR_4;

 VAR_2 /= VAR_0;
 VAR_4 = !FUNC_1(&VAR_1->free_clusters) &&
  VAR_2 != FUNC_2(&VAR_1->free_clusters) &&
  FUNC_0(&VAR_1->cluster_info[VAR_2]);

 if (!VAR_4)
  return 0;

 VAR_3 = FUNC_4(VAR_1->percpu_cluster);
 FUNC_3(&VAR_3->index);
 return 1;
}
