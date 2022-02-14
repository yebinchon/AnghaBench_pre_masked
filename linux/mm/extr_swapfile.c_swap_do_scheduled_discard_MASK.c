
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {scalar_t__ swap_map; int lock; int discard_clusters; struct swap_cluster_info* cluster_info; } ;
struct swap_cluster_info {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct swap_info_struct*,unsigned int) ;
 unsigned int FUNC_1 (int *,struct swap_cluster_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct swap_info_struct*,unsigned int,unsigned int) ;
 struct swap_cluster_info* FUNC_4 (struct swap_info_struct*,unsigned int) ;
 int FUNC_5 (scalar_t__,int ,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct swap_cluster_info*) ;

__attribute__((used)) static void FUNC_9(struct swap_info_struct *VAR_1)
{
 struct swap_cluster_info *VAR_2, *VAR_3;
 unsigned int VAR_4;

 VAR_2 = VAR_1->cluster_info;

 while (!FUNC_2(&VAR_1->discard_clusters)) {
  VAR_4 = FUNC_1(&VAR_1->discard_clusters, VAR_2);
  FUNC_7(&VAR_1->lock);

  FUNC_3(VAR_1, VAR_4 * VAR_0,
    VAR_0);

  FUNC_6(&VAR_1->lock);
  VAR_3 = FUNC_4(VAR_1, VAR_4 * VAR_0);
  FUNC_0(VAR_1, VAR_4);
  FUNC_5(VAR_1->swap_map + VAR_4 * VAR_0,
    0, VAR_0);
  FUNC_8(VAR_3);
 }
}
