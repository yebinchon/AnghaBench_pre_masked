
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_map_page_list {struct swap_map_page* map; struct swap_map_page_list* next; } ;
struct swap_map_page {scalar_t__ next_swap; } ;
struct swap_map_handle {struct swap_map_page_list* maps; struct swap_map_page* cur; scalar_t__ k; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {unsigned int flags; scalar_t__ image; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,struct swap_map_page*,int *) ;
 struct swap_map_page_list* FUNC_2 (int,int ) ;
 int FUNC_3 (struct swap_map_handle*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct swap_map_handle *VAR_7,
  unsigned int *VAR_8)
{
 int VAR_9;
 struct swap_map_page_list *VAR_10, *VAR_11;
 sector_t VAR_12;

 *VAR_8 = VAR_6->flags;

 if (!VAR_6->image)
  return -VAR_0;

 VAR_7->cur = ((void*)0);
 VAR_11 = VAR_7->maps = ((void*)0);
 VAR_12 = VAR_6->image;
 while (VAR_12) {
  VAR_10 = FUNC_2(sizeof(*VAR_7->maps), VAR_2);
  if (!VAR_10) {
   FUNC_3(VAR_7);
   return -VAR_1;
  }
  if (!VAR_7->maps)
   VAR_7->maps = VAR_10;
  if (VAR_11)
   VAR_11->next = VAR_10;
  VAR_11 = VAR_10;

  VAR_10->map = (struct swap_map_page *)
      FUNC_0(VAR_3 | VAR_5);
  if (!VAR_10->map) {
   FUNC_3(VAR_7);
   return -VAR_1;
  }

  VAR_9 = FUNC_1(VAR_4, 0, VAR_12, VAR_10->map, ((void*)0));
  if (VAR_9) {
   FUNC_3(VAR_7);
   return VAR_9;
  }
  VAR_12 = VAR_10->map->next_swap;
 }
 VAR_7->k = 0;
 VAR_7->cur = VAR_7->maps->map;
 return 0;
}
