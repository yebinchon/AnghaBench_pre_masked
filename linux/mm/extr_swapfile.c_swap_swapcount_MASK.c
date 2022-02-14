
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int * swap_map; } ;
struct swap_cluster_info {int dummy; } ;
typedef size_t pgoff_t ;


 struct swap_cluster_info* FUNC_0 (struct swap_info_struct*,size_t) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct swap_info_struct*,struct swap_cluster_info*) ;

__attribute__((used)) static int FUNC_4(struct swap_info_struct *VAR_0, swp_entry_t VAR_1)
{
 int VAR_2 = 0;
 pgoff_t VAR_3 = FUNC_2(VAR_1);
 struct swap_cluster_info *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 VAR_2 = FUNC_1(VAR_0->swap_map[VAR_3]);
 FUNC_3(VAR_0, VAR_4);
 return VAR_2;
}
