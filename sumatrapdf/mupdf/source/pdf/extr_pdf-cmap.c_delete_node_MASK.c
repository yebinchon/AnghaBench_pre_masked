
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ttop; size_t tlen; TYPE_2__* tree; } ;
typedef TYPE_1__ pdf_cmap ;
struct TYPE_5__ {unsigned int parent; unsigned int right; unsigned int left; } ;
typedef TYPE_2__ cmap_splay ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(pdf_cmap *VAR_1, unsigned int VAR_2)
{
 cmap_splay *VAR_3 = VAR_1->tree;
 unsigned int VAR_4;
 unsigned int VAR_5;

 FUNC_0(VAR_2 != VAR_0);

 VAR_4 = VAR_3[VAR_2].parent;
 if (VAR_3[VAR_2].right == VAR_0)
 {
  if (VAR_4 == VAR_0)
  {
   VAR_5 = VAR_1->ttop = VAR_3[VAR_2].left;
  }
  else if (VAR_3[VAR_4].left == VAR_2)
  {
   VAR_5 = VAR_3[VAR_4].left = VAR_3[VAR_2].left;
  }
  else
  {
   FUNC_0(VAR_3[VAR_4].right == VAR_2);
   VAR_5 = VAR_3[VAR_4].right = VAR_3[VAR_2].left;
  }
  if (VAR_5 != VAR_0)
   VAR_3[VAR_5].parent = VAR_4;
  else
   VAR_5 = VAR_4;
 }
 else if (VAR_3[VAR_2].left == VAR_0)
 {
  if (VAR_4 == VAR_0)
  {
   VAR_5 = VAR_1->ttop = VAR_3[VAR_2].right;
  }
  else if (VAR_3[VAR_4].left == VAR_2)
  {
   VAR_5 = VAR_3[VAR_4].left = VAR_3[VAR_2].right;
  }
  else
  {
   FUNC_0(VAR_3[VAR_4].right == VAR_2);
   VAR_5 = VAR_3[VAR_4].right = VAR_3[VAR_2].right;
  }
  if (VAR_5 != VAR_0)
   VAR_3[VAR_5].parent = VAR_4;
  else
   VAR_5 = VAR_4;
 }
 else
 {

  unsigned int VAR_6 = VAR_2;
  VAR_5 = VAR_3[VAR_2].left;
  while (VAR_3[VAR_5].right != VAR_0) {
   VAR_6 = VAR_5;
   VAR_5 = VAR_3[VAR_5].right;
  }

  if (VAR_6 == VAR_2)
  {
   VAR_3[VAR_6].left = VAR_3[VAR_5].left;
   if (VAR_3[VAR_6].left != VAR_0)
    VAR_3[VAR_3[VAR_6].left].parent = VAR_6;
  }
  else
  {
   VAR_3[VAR_6].right = VAR_3[VAR_5].left;
   if (VAR_3[VAR_6].right != VAR_0)
    VAR_3[VAR_3[VAR_6].right].parent = VAR_6;
  }

  VAR_3[VAR_5].parent = VAR_4;
  if (VAR_4 == VAR_0)
  {
   VAR_3[VAR_5].parent = VAR_0;
   VAR_1->ttop = VAR_5;
  }
  else if (VAR_3[VAR_4].left == VAR_2)
   VAR_3[VAR_4].left = VAR_5;
  else
  {
   FUNC_0(VAR_3[VAR_4].right == VAR_2);
   VAR_3[VAR_4].right = VAR_5;
  }
  VAR_3[VAR_5].left = VAR_3[VAR_2].left;
  if (VAR_3[VAR_5].left != VAR_0)
   VAR_3[VAR_3[VAR_5].left].parent = VAR_5;
  VAR_3[VAR_5].right = VAR_3[VAR_2].right;
  if (VAR_3[VAR_5].right != VAR_0)
   VAR_3[VAR_3[VAR_5].right].parent = VAR_5;
 }


 VAR_1->tlen--;
 if (VAR_2 != (unsigned int) VAR_1->tlen)
 {
  if (VAR_5 == (unsigned int) VAR_1->tlen)
   VAR_5 = VAR_2;
  VAR_3[VAR_2] = VAR_3[VAR_1->tlen];
  VAR_4 = VAR_3[VAR_2].parent;
  if (VAR_4 == VAR_0)
   VAR_1->ttop = VAR_2;
  else if (VAR_3[VAR_4].left == (unsigned int) VAR_1->tlen)
   VAR_3[VAR_4].left = VAR_2;
  else
  {
   FUNC_0(VAR_3[VAR_4].right == (unsigned int) VAR_1->tlen);
   VAR_3[VAR_4].right = VAR_2;
  }
  if (VAR_3[VAR_2].left != VAR_0)
  {
   FUNC_0(VAR_3[VAR_3[VAR_2].left].parent == (unsigned int) VAR_1->tlen);
   VAR_3[VAR_3[VAR_2].left].parent = VAR_2;
  }
  if (VAR_3[VAR_2].right != VAR_0)
  {
   FUNC_0(VAR_3[VAR_3[VAR_2].right].parent == (unsigned int) VAR_1->tlen);
   VAR_3[VAR_3[VAR_2].right].parent = VAR_2;
  }
 }


 return VAR_5;
}
