
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; struct resource* sibling; struct resource* child; struct resource* parent; } ;


 scalar_t__ FUNC_0 (int) ;
 struct resource* FUNC_1 (struct resource*,struct resource*) ;

__attribute__((used)) static struct resource * FUNC_2(struct resource *VAR_0, struct resource *VAR_1)
{
 struct resource *VAR_2, *VAR_3;

 for (;; VAR_0 = VAR_2) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (!VAR_2)
   return VAR_2;

  if (VAR_2 == VAR_0)
   return VAR_2;
  if (FUNC_0(VAR_2 == VAR_1))
   return VAR_2;

  if ((VAR_2->start > VAR_1->start) || (VAR_2->end < VAR_1->end))
   break;
  if ((VAR_2->start == VAR_1->start) && (VAR_2->end == VAR_1->end))
   break;
 }

 for (VAR_3 = VAR_2; ; VAR_3 = VAR_3->sibling) {

  if (VAR_3->start < VAR_1->start || VAR_3->end > VAR_1->end)
   return VAR_3;
  if (!VAR_3->sibling)
   break;
  if (VAR_3->sibling->start > VAR_1->end)
   break;
 }

 VAR_1->parent = VAR_0;
 VAR_1->sibling = VAR_3->sibling;
 VAR_1->child = VAR_2;

 VAR_3->sibling = ((void*)0);
 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->sibling)
  VAR_3->parent = VAR_1;

 if (VAR_0->child == VAR_2) {
  VAR_0->child = VAR_1;
 } else {
  VAR_3 = VAR_0->child;
  while (VAR_3->sibling != VAR_2)
   VAR_3 = VAR_3->sibling;
  VAR_3->sibling = VAR_1;
 }
 return ((void*)0);
}
