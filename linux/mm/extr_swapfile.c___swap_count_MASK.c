
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int * swap_map; } ;
typedef size_t pgoff_t ;


 struct swap_info_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct swap_info_struct*) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

int FUNC_4(swp_entry_t VAR_0)
{
 struct swap_info_struct *VAR_1;
 pgoff_t VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_1->swap_map[VAR_2]);
  FUNC_1(VAR_1);
 }
 return VAR_3;
}
