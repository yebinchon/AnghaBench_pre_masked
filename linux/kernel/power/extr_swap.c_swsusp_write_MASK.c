
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {int dummy; } ;
struct swap_map_handle {int dummy; } ;
struct snapshot_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct snapshot_handle) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct swap_map_handle*) ;
 int FUNC_3 (struct snapshot_handle*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct swap_map_handle*,struct snapshot_handle*,unsigned long) ;
 int FUNC_6 (struct swap_map_handle*,struct snapshot_handle*,unsigned long) ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (struct snapshot_handle*) ;
 int FUNC_9 (struct swap_map_handle*,struct swsusp_info*,int *) ;
 int FUNC_10 (struct swap_map_handle*,unsigned int,int) ;

int FUNC_11(unsigned int VAR_4)
{
 struct swap_map_handle VAR_5;
 struct snapshot_handle VAR_6;
 struct swsusp_info *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7();
 VAR_9 = FUNC_2(&VAR_5);
 if (VAR_9) {
  FUNC_4("Cannot get swap writer\n");
  return VAR_9;
 }
 if (VAR_4 & VAR_3) {
  if (!FUNC_1(VAR_8)) {
   FUNC_4("Not enough free swap\n");
   VAR_9 = -VAR_1;
   goto out_finish;
  }
 }
 FUNC_3(&VAR_6, 0, sizeof(struct snapshot_handle));
 VAR_9 = FUNC_8(&VAR_6);
 if (VAR_9 < (int)VAR_2) {
  if (VAR_9 >= 0)
   VAR_9 = -VAR_0;

  goto out_finish;
 }
 VAR_7 = (struct swsusp_info *)FUNC_0(VAR_6);
 VAR_9 = FUNC_9(&VAR_5, VAR_7, ((void*)0));
 if (!VAR_9) {
  VAR_9 = (VAR_4 & VAR_3) ?
   FUNC_5(&VAR_5, &VAR_6, VAR_8 - 1) :
   FUNC_6(&VAR_5, &VAR_6, VAR_8 - 1);
 }
out_finish:
 VAR_9 = FUNC_10(&VAR_5, VAR_4, VAR_9);
 return VAR_9;
}
