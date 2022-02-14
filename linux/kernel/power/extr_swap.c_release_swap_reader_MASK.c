
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_map_page_list {struct swap_map_page_list* next; scalar_t__ map; } ;
struct swap_map_handle {int * cur; struct swap_map_page_list* maps; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct swap_map_page_list*) ;

__attribute__((used)) static void FUNC_2(struct swap_map_handle *VAR_0)
{
 struct swap_map_page_list *VAR_1;

 while (VAR_0->maps) {
  if (VAR_0->maps->map)
   FUNC_0((unsigned long)VAR_0->maps->map);
  VAR_1 = VAR_0->maps;
  VAR_0->maps = VAR_0->maps->next;
  FUNC_1(VAR_1);
 }
 VAR_0->cur = ((void*)0);
}
