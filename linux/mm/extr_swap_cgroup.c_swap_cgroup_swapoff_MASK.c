
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cgroup_ctrl {unsigned long length; struct page** map; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct swap_cgroup_ctrl* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct page**) ;

void FUNC_5(int VAR_4)
{
 struct page **VAR_5;
 unsigned long VAR_6, VAR_7;
 struct swap_cgroup_ctrl *VAR_8;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_3);
 VAR_8 = &VAR_2[VAR_4];
 VAR_5 = VAR_8->map;
 VAR_7 = VAR_8->length;
 VAR_8->map = ((void*)0);
 VAR_8->length = 0;
 FUNC_3(&VAR_3);

 if (VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   struct page *VAR_9 = VAR_5[VAR_6];
   if (VAR_9)
    FUNC_0(VAR_9);
   if (!(VAR_6 % VAR_0))
    FUNC_1();
  }
  FUNC_4(VAR_5);
 }
}
