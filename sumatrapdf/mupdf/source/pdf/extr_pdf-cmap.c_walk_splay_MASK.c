
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int left; unsigned int right; unsigned int parent; } ;
typedef TYPE_1__ cmap_splay ;


 unsigned int VAR_0 ;



 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(cmap_splay *VAR_1, unsigned int VAR_2, void (*VAR_3)(cmap_splay *, void *), void *VAR_4)
{
 int VAR_5 = 128;

 while (VAR_2 != VAR_0)
 {
  switch (VAR_5)
  {
  case 128:
   if (VAR_1[VAR_2].left != VAR_0)
   {
    VAR_2 = VAR_1[VAR_2].left;
    VAR_5 = 128;
    break;
   }

  case 130:
   VAR_3(&VAR_1[VAR_2], VAR_4);
   if (VAR_1[VAR_2].right != VAR_0)
   {
    VAR_2 = VAR_1[VAR_2].right;
    VAR_5 = 128;
    break;
   }

  case 129:
   {
    unsigned int VAR_6 = VAR_1[VAR_2].parent;
    if (VAR_6 == VAR_0)
     return;
    if (VAR_1[VAR_6].left == VAR_2)
     VAR_5 = 130;
    else
    {
     FUNC_0(VAR_1[VAR_6].right == VAR_2);
     VAR_5 = 129;
    }
    VAR_2 = VAR_6;
   }
  }
 }
}
