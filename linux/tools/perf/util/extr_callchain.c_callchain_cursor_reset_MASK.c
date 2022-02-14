
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cursor_node {int map; struct callchain_cursor_node* next; } ;
struct callchain_cursor {struct callchain_cursor_node* first; struct callchain_cursor_node** last; scalar_t__ nr; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct callchain_cursor *VAR_0)
{
 struct callchain_cursor_node *VAR_1;

 VAR_0->nr = 0;
 VAR_0->last = &VAR_0->first;

 for (VAR_1 = VAR_0->first; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  FUNC_0(VAR_1->map);
}
