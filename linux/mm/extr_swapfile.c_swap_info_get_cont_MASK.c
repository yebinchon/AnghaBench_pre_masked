
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int lock; } ;


 struct swap_info_struct* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct swap_info_struct *FUNC_3(swp_entry_t VAR_0,
     struct swap_info_struct *VAR_1)
{
 struct swap_info_struct *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 != VAR_1) {
  if (VAR_1 != ((void*)0))
   FUNC_2(&VAR_1->lock);
  if (VAR_2 != ((void*)0))
   FUNC_1(&VAR_2->lock);
 }
 return VAR_2;
}
