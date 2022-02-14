
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {struct resource* sibling; TYPE_1__* parent; struct resource* child; } ;
struct TYPE_2__ {struct resource* child; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct resource *VAR_1, bool VAR_2)
{
 struct resource *VAR_3, **VAR_4, *VAR_5;

 VAR_4 = &VAR_1->parent->child;
 for (;;) {
  VAR_3 = *VAR_4;
  if (!VAR_3)
   break;
  if (VAR_3 == VAR_1) {
   if (VAR_2 || !(VAR_3->child)) {
    *VAR_4 = VAR_3->sibling;
   } else {
    for (VAR_5 = VAR_3->child;; VAR_5 = VAR_5->sibling) {
     VAR_5->parent = VAR_3->parent;
     if (!(VAR_5->sibling))
      break;
    }
    *VAR_4 = VAR_3->child;
    VAR_5->sibling = VAR_3->sibling;
   }
   VAR_1->parent = ((void*)0);
   return 0;
  }
  VAR_4 = &VAR_3->sibling;
 }
 return -VAR_0;
}
