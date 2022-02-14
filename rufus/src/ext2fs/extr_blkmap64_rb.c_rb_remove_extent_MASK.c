
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct ext2fs_rb_private {struct rb_root root; } ;
struct bmap_rb_extent {scalar_t__ start; scalar_t__ count; struct rb_node node; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ FUNC_0 (struct rb_root*) ;
 int FUNC_1 (struct rb_node*,struct rb_root*) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 struct bmap_rb_extent* FUNC_3 (struct rb_node*) ;
 int FUNC_4 (struct ext2fs_rb_private*,struct bmap_rb_extent*) ;
 int FUNC_5 (scalar_t__,scalar_t__,struct ext2fs_rb_private*) ;

__attribute__((used)) static int FUNC_6(__u64 VAR_0, __u64 VAR_1,
       struct ext2fs_rb_private *VAR_2)
{
 struct rb_root *VAR_3 = &VAR_2->root;
 struct rb_node *VAR_4 = ((void*)0), **VAR_5 = &VAR_3->rb_node;
 struct rb_node *VAR_6;
 struct bmap_rb_extent *VAR_7;
 __u64 VAR_8, VAR_9;
 int VAR_10 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 while (*VAR_5) {
  VAR_4 = *VAR_5;
  VAR_7 = FUNC_3(VAR_4);
  if (VAR_0 < VAR_7->start) {
   VAR_5 = &(*VAR_5)->rb_left;
   continue;
  } else if (VAR_0 >= (VAR_7->start + VAR_7->count)) {
   VAR_5 = &(*VAR_5)->rb_right;
   continue;
  }

  if ((VAR_0 > VAR_7->start) &&
      (VAR_0 + VAR_1) < (VAR_7->start + VAR_7->count)) {

   VAR_8 = VAR_0 + VAR_1;
   VAR_9 = (VAR_7->start + VAR_7->count) - VAR_8;

   VAR_7->count = VAR_0 - VAR_7->start;

   FUNC_5(VAR_8, VAR_9, VAR_2);
   return 1;
  }

  if ((VAR_0 + VAR_1) >= (VAR_7->start + VAR_7->count)) {
   VAR_7->count = VAR_0 - VAR_7->start;
   VAR_10 = 1;
  }

  if (0 == VAR_7->count) {
   VAR_4 = FUNC_2(&VAR_7->node);
   FUNC_1(&VAR_7->node, VAR_3);
   FUNC_4(VAR_2, VAR_7);
   break;
  }

  if (VAR_0 == VAR_7->start) {
   VAR_7->start += VAR_1;
   VAR_7->count -= VAR_1;
   return 1;
  }
 }


 for (; VAR_4 != ((void*)0); VAR_4 = VAR_6) {
  VAR_6 = FUNC_2(VAR_4);
  VAR_7 = FUNC_3(VAR_4);
  if ((VAR_7->start + VAR_7->count) <= VAR_0)
   continue;


  if ((VAR_0 + VAR_1) < VAR_7->start)
   break;


  if ((VAR_0 + VAR_1) >= (VAR_7->start + VAR_7->count)) {
   FUNC_1(VAR_4, VAR_3);
   FUNC_4(VAR_2, VAR_7);
   VAR_10 = 1;
   continue;
  } else {

   VAR_7->count -= ((VAR_0 + VAR_1) - VAR_7->start);
   VAR_7->start = VAR_0 + VAR_1;
   VAR_10 = 1;
   break;
  }
 }

 return VAR_10;
}
