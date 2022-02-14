
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_map_page_list {TYPE_1__* map; struct swap_map_page_list* next; } ;
struct swap_map_handle {size_t k; struct swap_map_page_list* maps; TYPE_1__* cur; } ;
struct hib_bio_batch {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int * entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ,int ,void*,struct hib_bio_batch*) ;
 int FUNC_2 (struct swap_map_page_list*) ;
 int FUNC_3 (struct swap_map_handle*) ;

__attribute__((used)) static int FUNC_4(struct swap_map_handle *VAR_4, void *VAR_5,
  struct hib_bio_batch *VAR_6)
{
 sector_t VAR_7;
 int VAR_8;
 struct swap_map_page_list *VAR_9;

 if (!VAR_4->cur)
  return -VAR_1;
 VAR_7 = VAR_4->cur->entries[VAR_4->k];
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_3, 0, VAR_7, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;
 if (++VAR_4->k >= VAR_2) {
  VAR_4->k = 0;
  FUNC_0((unsigned long)VAR_4->maps->map);
  VAR_9 = VAR_4->maps;
  VAR_4->maps = VAR_4->maps->next;
  FUNC_2(VAR_9);
  if (!VAR_4->maps)
   FUNC_3(VAR_4);
  else
   VAR_4->cur = VAR_4->maps->map;
 }
 return VAR_8;
}
