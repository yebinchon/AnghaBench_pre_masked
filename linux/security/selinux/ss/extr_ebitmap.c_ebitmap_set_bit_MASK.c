
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {unsigned long startbit; struct ebitmap_node* next; int maps; } ;
struct ebitmap {unsigned long highbit; struct ebitmap_node* node; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ebitmap_node*,unsigned long) ;
 int FUNC_1 (struct ebitmap_node*,unsigned long) ;
 unsigned int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,struct ebitmap_node*) ;
 struct ebitmap_node* FUNC_4 (int ,int ) ;

int FUNC_5(struct ebitmap *VAR_4, unsigned long VAR_5, int VAR_6)
{
 struct ebitmap_node *VAR_7, *VAR_8, *VAR_9;

 VAR_8 = ((void*)0);
 VAR_7 = VAR_4->node;
 while (VAR_7 && VAR_7->startbit <= VAR_5) {
  if ((VAR_7->startbit + VAR_0) > VAR_5) {
   if (VAR_6) {
    FUNC_1(VAR_7, VAR_5);
   } else {
    unsigned int VAR_10;

    FUNC_0(VAR_7, VAR_5);

    VAR_10 = FUNC_2(VAR_7->maps, VAR_0);
    if (VAR_10 < VAR_0)
     return 0;


    if (!VAR_7->next) {




     if (VAR_8)
      VAR_4->highbit = VAR_8->startbit
            + VAR_0;
     else
      VAR_4->highbit = 0;
    }
    if (VAR_8)
     VAR_8->next = VAR_7->next;
    else
     VAR_4->node = VAR_7->next;
    FUNC_3(VAR_3, VAR_7);
   }
   return 0;
  }
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
 }

 if (!VAR_6)
  return 0;

 VAR_9 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->startbit = VAR_5 - (VAR_5 % VAR_0);
 FUNC_1(VAR_9, VAR_5);

 if (!VAR_7)

  VAR_4->highbit = VAR_9->startbit + VAR_0;

 if (VAR_8) {
  VAR_9->next = VAR_8->next;
  VAR_8->next = VAR_9;
 } else {
  VAR_9->next = VAR_4->node;
  VAR_4->node = VAR_9;
 }

 return 0;
}
