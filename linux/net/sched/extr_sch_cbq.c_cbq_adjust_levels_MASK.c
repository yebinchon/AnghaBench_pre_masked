
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_class {int level; struct cbq_class* children; struct cbq_class* sibling; struct cbq_class* tparent; } ;



__attribute__((used)) static void FUNC_0(struct cbq_class *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 do {
  int VAR_1 = 0;
  struct cbq_class *VAR_2;

  VAR_2 = VAR_0->children;
  if (VAR_2) {
   do {
    if (VAR_2->level > VAR_1)
     VAR_1 = VAR_2->level;
   } while ((VAR_2 = VAR_2->sibling) != VAR_0->children);
  }
  VAR_0->level = VAR_1 + 1;
 } while ((VAR_0 = VAR_0->tparent) != ((void*)0));
}
