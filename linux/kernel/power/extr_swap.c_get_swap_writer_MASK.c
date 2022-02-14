
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_page {int dummy; } ;
struct swap_map_handle {scalar_t__ cur_swap; scalar_t__ first_sector; int reqd_free_pages; scalar_t__ k; struct swap_map_page* cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct swap_map_handle*) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct swap_map_handle *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_6();
 if (VAR_6) {
  if (VAR_6 != -VAR_1)
   FUNC_2("Cannot find swap device, try swapon -a\n");
  return VAR_6;
 }
 VAR_5->cur = (struct swap_map_page *)FUNC_1(VAR_3);
 if (!VAR_5->cur) {
  VAR_6 = -VAR_0;
  goto err_close;
 }
 VAR_5->cur_swap = FUNC_0(VAR_4);
 if (!VAR_5->cur_swap) {
  VAR_6 = -VAR_1;
  goto err_rel;
 }
 VAR_5->k = 0;
 VAR_5->reqd_free_pages = FUNC_4();
 VAR_5->first_sector = VAR_5->cur_swap;
 return 0;
err_rel:
 FUNC_3(VAR_5);
err_close:
 FUNC_5(VAR_2);
 return VAR_6;
}
