
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; int type; int free_clusters; } ;
struct swap_cluster_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct swap_info_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *) ;
 int FUNC_5 (struct swap_cluster_info*,unsigned long,int ) ;
 struct swap_cluster_info* FUNC_6 (struct swap_info_struct*,unsigned long) ;
 int FUNC_7 (struct swap_info_struct*,unsigned long,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct swap_cluster_info*) ;

__attribute__((used)) static int FUNC_10(struct swap_info_struct *VAR_4, swp_entry_t *VAR_5)
{
 unsigned long VAR_6;
 struct swap_cluster_info *VAR_7;
 unsigned long VAR_8, VAR_9;
 unsigned char *VAR_10;





 if (!FUNC_0(VAR_1)) {
  FUNC_1(1);
  return 0;
 }

 if (FUNC_3(&VAR_4->free_clusters))
  return 0;

 VAR_6 = FUNC_4(&VAR_4->free_clusters);
 VAR_8 = VAR_6 * VAR_2;
 VAR_7 = FUNC_6(VAR_4, VAR_8);
 FUNC_2(VAR_4, VAR_6);
 FUNC_5(VAR_7, VAR_2, VAR_0);

 VAR_10 = VAR_4->swap_map + VAR_8;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_10[VAR_9] = VAR_3;
 FUNC_9(VAR_7);
 FUNC_7(VAR_4, VAR_8, VAR_2);
 *VAR_5 = FUNC_8(VAR_4->type, VAR_8);

 return 1;
}
