
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; struct resource* sibling; struct resource* child; struct resource* parent; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct resource *VAR_1, resource_size_t VAR_2,
    resource_size_t VAR_3)
{
 struct resource *VAR_4, *VAR_5 = VAR_1->parent;
 resource_size_t VAR_6 = VAR_2 + VAR_3 - 1;
 int VAR_7 = -VAR_0;

 if (!VAR_5)
  goto skip;

 if ((VAR_2 < VAR_5->start) || (VAR_6 > VAR_5->end))
  goto out;

 if (VAR_1->sibling && (VAR_1->sibling->start <= VAR_6))
  goto out;

 VAR_4 = VAR_5->child;
 if (VAR_4 != VAR_1) {
  while (VAR_4->sibling != VAR_1)
   VAR_4 = VAR_4->sibling;
  if (VAR_2 <= VAR_4->end)
   goto out;
 }

skip:
 for (VAR_4 = VAR_1->child; VAR_4; VAR_4 = VAR_4->sibling)
  if ((VAR_4->start < VAR_2) || (VAR_4->end > VAR_6))
   goto out;

 VAR_1->start = VAR_2;
 VAR_1->end = VAR_6;
 VAR_7 = 0;

 out:
 return VAR_7;
}
