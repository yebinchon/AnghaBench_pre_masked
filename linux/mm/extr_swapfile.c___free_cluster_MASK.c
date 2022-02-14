
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int free_clusters; struct swap_cluster_info* cluster_info; } ;
struct swap_cluster_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct swap_cluster_info*,unsigned long) ;
 int FUNC_1 (struct swap_cluster_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct swap_info_struct *VAR_1, unsigned long VAR_2)
{
 struct swap_cluster_info *VAR_3 = VAR_1->cluster_info;

 FUNC_1(VAR_3 + VAR_2, VAR_0);
 FUNC_0(&VAR_1->free_clusters, VAR_3, VAR_2);
}
