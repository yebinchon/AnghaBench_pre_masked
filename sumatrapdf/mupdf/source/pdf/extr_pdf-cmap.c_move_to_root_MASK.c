
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int parent; unsigned int left; unsigned int right; } ;
typedef TYPE_1__ cmap_splay ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(cmap_splay *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 == VAR_0)
  return;
 do
 {
  unsigned int VAR_3, VAR_4;
  unsigned int VAR_5 = VAR_1[VAR_2].parent;
  if (VAR_5 == VAR_0)
   break;
  VAR_3 = VAR_1[VAR_5].parent;
  if (VAR_3 == VAR_0)
  {

   VAR_1[VAR_2].parent = VAR_0;
   VAR_1[VAR_5].parent = VAR_2;
   if (VAR_1[VAR_5].left == VAR_2)
   {

    VAR_1[VAR_5].left = VAR_1[VAR_2].right;
    if (VAR_1[VAR_5].left != VAR_0)
     VAR_1[VAR_1[VAR_5].left].parent = VAR_5;
    VAR_1[VAR_2].right = VAR_5;
   }
   else
   {

    FUNC_0(VAR_1[VAR_5].right == VAR_2);
    VAR_1[VAR_5].right = VAR_1[VAR_2].left;
    if (VAR_1[VAR_5].right != VAR_0)
     VAR_1[VAR_1[VAR_5].right].parent = VAR_5;
    VAR_1[VAR_2].left = VAR_5;
   }
   break;
  }

  VAR_4 = VAR_1[VAR_3].parent;
  VAR_1[VAR_2].parent = VAR_4;
  if (VAR_4 != VAR_0) {
   if (VAR_1[VAR_4].left == VAR_3)
    VAR_1[VAR_4].left = VAR_2;
   else
   {
    FUNC_0(VAR_1[VAR_4].right == VAR_3);
    VAR_1[VAR_4].right = VAR_2;
   }
  }
  VAR_1[VAR_5].parent = VAR_2;
  if (VAR_1[VAR_5].left == VAR_2)
  {
   VAR_1[VAR_5].left = VAR_1[VAR_2].right;
   if (VAR_1[VAR_5].left != VAR_0)
    VAR_1[VAR_1[VAR_5].left].parent = VAR_5;
   VAR_1[VAR_2].right = VAR_5;
   if (VAR_1[VAR_3].left == VAR_5)
   {

    VAR_1[VAR_3].parent = VAR_5;
    VAR_1[VAR_3].left = VAR_1[VAR_5].right;
    if (VAR_1[VAR_3].left != VAR_0)
     VAR_1[VAR_1[VAR_3].left].parent = VAR_3;
    VAR_1[VAR_5].right = VAR_3;
   }
   else
   {

    FUNC_0(VAR_1[VAR_3].right == VAR_5);
    VAR_1[VAR_3].parent = VAR_2;
    VAR_1[VAR_3].right = VAR_1[VAR_2].left;
    if (VAR_1[VAR_3].right != VAR_0)
     VAR_1[VAR_1[VAR_3].right].parent = VAR_3;
    VAR_1[VAR_2].left = VAR_3;
   }
  }
  else
  {
   FUNC_0(VAR_1[VAR_5].right == VAR_2);
   VAR_1[VAR_5].right = VAR_1[VAR_2].left;
   if (VAR_1[VAR_5].right != VAR_0)
    VAR_1[VAR_1[VAR_5].right].parent = VAR_5;
   VAR_1[VAR_2].left = VAR_5;
   if (VAR_1[VAR_3].left == VAR_5)
   {

    VAR_1[VAR_3].parent = VAR_2;
    VAR_1[VAR_3].left = VAR_1[VAR_2].right;
    if (VAR_1[VAR_3].left != VAR_0)
     VAR_1[VAR_1[VAR_3].left].parent = VAR_3;
    VAR_1[VAR_2].right = VAR_3;
   }
   else
   {

    FUNC_0(VAR_1[VAR_3].right == VAR_5);
    VAR_1[VAR_3].parent = VAR_5;
    VAR_1[VAR_3].right = VAR_1[VAR_5].left;
    if (VAR_1[VAR_3].right != VAR_0)
     VAR_1[VAR_1[VAR_3].right].parent = VAR_3;
    VAR_1[VAR_5].left = VAR_3;
   }
  }
 } while (1);
}
