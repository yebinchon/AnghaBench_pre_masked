
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_browser {scalar_t__ nr_entries; struct list_head* top; struct list_head* entries; } ;
struct list_head {int prev; int next; } ;
typedef scalar_t__ off_t ;





 int FUNC_0 (int ) ;
 struct list_head* FUNC_1 (struct ui_browser*,int ) ;
 struct list_head* FUNC_2 (struct ui_browser*,int ) ;

void FUNC_3(struct ui_browser *VAR_0, off_t VAR_1, int VAR_2)
{
 struct list_head *VAR_3 = VAR_0->entries;
 struct list_head *VAR_4;

 if (VAR_0->nr_entries == 0)
  return;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_3->next);
  break;
 case 130:
  VAR_4 = VAR_0->top;
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_0, VAR_3->prev);
  break;
 default:
  return;
 }

 FUNC_0(VAR_4 != ((void*)0));

 if (VAR_1 > 0) {
  while (VAR_1-- != 0)
   VAR_4 = FUNC_1(VAR_0, VAR_4->next);
 } else {
  while (VAR_1++ != 0)
   VAR_4 = FUNC_2(VAR_0, VAR_4->prev);
 }

 VAR_0->top = VAR_4;
}
