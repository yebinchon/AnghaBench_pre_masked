
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (struct swap_info_struct*,int ,int) ;
 int FUNC_1 (struct swap_info_struct*,int ,int) ;
 struct swap_info_struct* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct swap_info_struct*,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(swp_entry_t VAR_3)
{
 struct swap_info_struct *VAR_4;
 unsigned char VAR_5;

 if (FUNC_3(VAR_3))
  return 1;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_4, VAR_3, 1);
  if (VAR_5 == VAR_0 &&
      !FUNC_4(VAR_4, VAR_3))
   FUNC_1(VAR_4, FUNC_5(VAR_3),
           VAR_2 | VAR_1);
 }
 return VAR_4 != ((void*)0);
}
