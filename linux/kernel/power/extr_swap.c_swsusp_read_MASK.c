
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {scalar_t__ pages; } ;
struct swap_map_handle {int dummy; } ;
struct snapshot_handle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct snapshot_handle) ;
 int FUNC_1 (struct swap_map_handle*,unsigned int*) ;
 int FUNC_2 (struct swap_map_handle*,struct snapshot_handle*,scalar_t__) ;
 int FUNC_3 (struct swap_map_handle*,struct snapshot_handle*,scalar_t__) ;
 int FUNC_4 (struct snapshot_handle*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct snapshot_handle*) ;
 int FUNC_7 (struct swap_map_handle*,struct swsusp_info*,int *) ;
 int FUNC_8 (struct swap_map_handle*) ;

int FUNC_9(unsigned int *VAR_3)
{
 int VAR_4;
 struct swap_map_handle VAR_5;
 struct snapshot_handle VAR_6;
 struct swsusp_info *VAR_7;

 FUNC_4(&VAR_6, 0, sizeof(struct snapshot_handle));
 VAR_4 = FUNC_6(&VAR_6);
 if (VAR_4 < (int)VAR_1)
  return VAR_4 < 0 ? VAR_4 : -VAR_0;
 VAR_7 = (struct swsusp_info *)FUNC_0(VAR_6);
 VAR_4 = FUNC_1(&VAR_5, VAR_3);
 if (VAR_4)
  goto end;
 if (!VAR_4)
  VAR_4 = FUNC_7(&VAR_5, VAR_7, ((void*)0));
 if (!VAR_4) {
  VAR_4 = (*VAR_3 & VAR_2) ?
   FUNC_2(&VAR_5, &VAR_6, VAR_7->pages - 1) :
   FUNC_3(&VAR_5, &VAR_6, VAR_7->pages - 1);
 }
 FUNC_8(&VAR_5);
end:
 if (!VAR_4)
  FUNC_5("Image successfully loaded\n");
 else
  FUNC_5("Error %d resuming\n", VAR_4);
 return VAR_4;
}
