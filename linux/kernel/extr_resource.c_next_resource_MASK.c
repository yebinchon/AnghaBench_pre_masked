
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {struct resource* sibling; struct resource* parent; struct resource* child; } ;



__attribute__((used)) static struct resource *FUNC_0(struct resource *VAR_0, bool VAR_1)
{

 if (VAR_1)
  return VAR_0->sibling;

 if (VAR_0->child)
  return VAR_0->child;
 while (!VAR_0->sibling && VAR_0->parent)
  VAR_0 = VAR_0->parent;
 return VAR_0->sibling;
}
