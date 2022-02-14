
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct footnote_ref {unsigned int id; } ;
struct footnote_list {struct footnote_item* head; } ;
struct footnote_item {struct footnote_item* next; struct footnote_ref* ref; } ;


 unsigned int FUNC_0 (int *,size_t) ;

__attribute__((used)) static struct footnote_ref *
FUNC_1(struct footnote_list *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1, VAR_2);
 struct footnote_item *VAR_4 = ((void*)0);

 VAR_4 = VAR_0->head;

 while (VAR_4 != ((void*)0)) {
  if (VAR_4->ref->id == VAR_3)
   return VAR_4->ref;
  VAR_4 = VAR_4->next;
 }

 return ((void*)0);
}
