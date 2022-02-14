
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; } ;
struct swap_cluster_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct swap_cluster_info*) ;
 struct swap_cluster_info* FUNC_1 (struct swap_info_struct*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct swap_info_struct*,struct swap_cluster_info*) ;

__attribute__((used)) static bool FUNC_6(struct swap_info_struct *VAR_1,
      swp_entry_t VAR_2)
{
 struct swap_cluster_info *VAR_3;
 unsigned char *VAR_4 = VAR_1->swap_map;
 unsigned long VAR_5 = FUNC_4(VAR_2);
 unsigned long VAR_6 = FUNC_2(VAR_5, VAR_0);
 int VAR_7;
 bool VAR_8 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_6);
 if (!VAR_3 || !FUNC_0(VAR_3)) {
  if (FUNC_3(VAR_4[VAR_5]))
   VAR_8 = 1;
  goto unlock_out;
 }
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_3(VAR_4[VAR_6 + VAR_7])) {
   VAR_8 = 1;
   break;
  }
 }
unlock_out:
 FUNC_5(VAR_1, VAR_3);
 return VAR_8;
}
