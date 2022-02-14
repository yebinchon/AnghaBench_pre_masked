
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int free_clusters; struct swap_cluster_info* cluster_info; } ;
struct swap_cluster_info {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct swap_cluster_info*) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (struct swap_cluster_info*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct swap_info_struct *VAR_0, unsigned long VAR_1)
{
 struct swap_cluster_info *VAR_2 = VAR_0->cluster_info;

 FUNC_0(FUNC_2(&VAR_0->free_clusters) != VAR_1);
 FUNC_1(&VAR_0->free_clusters, VAR_2);
 FUNC_3(VAR_2 + VAR_1, 0, 0);
}
