
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int lock; } ;
typedef int entries ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct swap_info_struct*,int ) ;
 struct swap_info_struct* FUNC_3 (int ,struct swap_info_struct*) ;
 int VAR_1 ;

void FUNC_4(swp_entry_t *VAR_2, int VAR_3)
{
 struct swap_info_struct *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_3 <= 0)
  return;

 VAR_5 = ((void*)0);
 VAR_4 = ((void*)0);






 if (VAR_0 > 1)
  FUNC_0(VAR_2, VAR_3, sizeof(VAR_2[0]), VAR_1, ((void*)0));
 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  VAR_4 = FUNC_3(VAR_2[VAR_6], VAR_5);
  if (VAR_4)
   FUNC_2(VAR_4, VAR_2[VAR_6]);
  VAR_5 = VAR_4;
 }
 if (VAR_4)
  FUNC_1(&VAR_4->lock);
}
