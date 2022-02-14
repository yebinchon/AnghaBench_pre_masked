
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cgroup_ctrl {unsigned long length; struct page** map; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 () ;
 struct swap_cgroup_ctrl* VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5)
{
 struct page *VAR_6;
 struct swap_cgroup_ctrl *VAR_7;
 unsigned long VAR_8, VAR_9;

 VAR_7 = &VAR_4[VAR_5];

 for (VAR_8 = 0; VAR_8 < VAR_7->length; VAR_8++) {
  VAR_6 = FUNC_1(VAR_1 | VAR_3);
  if (!VAR_6)
   goto not_enough_page;
  VAR_7->map[VAR_8] = VAR_6;

  if (!(VAR_8 % VAR_2))
   FUNC_2();
 }
 return 0;
not_enough_page:
 VAR_9 = VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_0(VAR_7->map[VAR_8]);

 return -VAR_0;
}
