
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {struct ebitmap_node* next; int maps; int startbit; } ;
struct ebitmap {int highbit; struct ebitmap_node* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ebitmap*) ;
 int FUNC_1 (struct ebitmap*) ;
 int VAR_3 ;
 struct ebitmap_node* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct ebitmap *VAR_4, struct ebitmap *VAR_5)
{
 struct ebitmap_node *VAR_6, *VAR_7, *VAR_8;

 FUNC_1(VAR_4);
 VAR_6 = VAR_5->node;
 VAR_8 = ((void*)0);
 while (VAR_6) {
  VAR_7 = FUNC_2(VAR_3, VAR_2);
  if (!VAR_7) {
   FUNC_0(VAR_4);
   return -VAR_1;
  }
  VAR_7->startbit = VAR_6->startbit;
  FUNC_3(VAR_7->maps, VAR_6->maps, VAR_0 / 8);
  VAR_7->next = ((void*)0);
  if (VAR_8)
   VAR_8->next = VAR_7;
  else
   VAR_4->node = VAR_7;
  VAR_8 = VAR_7;
  VAR_6 = VAR_6->next;
 }

 VAR_4->highbit = VAR_5->highbit;
 return 0;
}
