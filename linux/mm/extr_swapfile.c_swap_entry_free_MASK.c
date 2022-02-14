
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; int cluster_info; } ;
struct swap_cluster_info {int dummy; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct swap_info_struct*,int ,unsigned long) ;
 struct swap_cluster_info* FUNC_2 (struct swap_info_struct*,unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct swap_info_struct*,unsigned long,int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (struct swap_cluster_info*) ;

__attribute__((used)) static void FUNC_7(struct swap_info_struct *VAR_1, swp_entry_t VAR_2)
{
 struct swap_cluster_info *VAR_3;
 unsigned long VAR_4 = FUNC_5(VAR_2);
 unsigned char VAR_5;

 VAR_3 = FUNC_2(VAR_1, VAR_4);
 VAR_5 = VAR_1->swap_map[VAR_4];
 FUNC_0(VAR_5 != VAR_0);
 VAR_1->swap_map[VAR_4] = 0;
 FUNC_1(VAR_1, VAR_1->cluster_info, VAR_4);
 FUNC_6(VAR_3);

 FUNC_3(VAR_2, 1);
 FUNC_4(VAR_1, VAR_4, 1);
}
