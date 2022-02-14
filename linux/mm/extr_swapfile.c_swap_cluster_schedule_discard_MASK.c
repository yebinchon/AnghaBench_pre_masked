
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int discard_work; int cluster_info; int discard_clusters; scalar_t__ swap_map; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct swap_info_struct *VAR_2,
  unsigned int VAR_3)
{






 FUNC_1(VAR_2->swap_map + VAR_3 * VAR_0,
   VAR_1, VAR_0);

 FUNC_0(&VAR_2->discard_clusters, VAR_2->cluster_info, VAR_3);

 FUNC_2(&VAR_2->discard_work);
}
