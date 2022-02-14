
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebitmap_node {struct ebitmap_node* next; } ;
struct ebitmap {struct ebitmap_node* node; scalar_t__ highbit; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ebitmap_node*) ;

void FUNC_1(struct ebitmap *VAR_1)
{
 struct ebitmap_node *VAR_2, *VAR_3;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->node;
 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_0, VAR_3);
 }

 VAR_1->highbit = 0;
 VAR_1->node = ((void*)0);
 return;
}
