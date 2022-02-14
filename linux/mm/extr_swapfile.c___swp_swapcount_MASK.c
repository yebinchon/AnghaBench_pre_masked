
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;


 struct swap_info_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct swap_info_struct*) ;
 int FUNC_2 (struct swap_info_struct*,int ) ;

int FUNC_3(swp_entry_t VAR_0)
{
 int VAR_1 = 0;
 struct swap_info_struct *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  VAR_1 = FUNC_2(VAR_2, VAR_0);
  FUNC_1(VAR_2);
 }
 return VAR_1;
}
