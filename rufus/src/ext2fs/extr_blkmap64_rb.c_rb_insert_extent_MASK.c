
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct ext2fs_rb_private {struct bmap_rb_extent* wcursor; int mark_hit; int * rcursor_next; struct rb_root root; } ;
struct bmap_rb_extent {scalar_t__ start; scalar_t__ count; struct rb_node node; } ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (struct rb_node*,struct rb_root*) ;
 int FUNC_1 (struct rb_node*,struct rb_root*) ;
 int FUNC_2 (struct rb_node*,struct rb_node*,struct rb_node**) ;
 struct rb_node* FUNC_3 (struct rb_node*) ;
 struct rb_node* FUNC_4 (struct rb_node*) ;
 struct bmap_rb_extent* FUNC_5 (struct rb_node*) ;
 int FUNC_6 (struct ext2fs_rb_private*,struct bmap_rb_extent*) ;
 int FUNC_7 (struct bmap_rb_extent**,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(__u64 VAR_0, __u64 VAR_1,
       struct ext2fs_rb_private *VAR_2)
{
 struct rb_root *VAR_3 = &VAR_2->root;
 struct rb_node *VAR_4 = ((void*)0), **VAR_5 = &VAR_3->rb_node;
 struct rb_node *VAR_6, *VAR_7, *VAR_8;
 struct bmap_rb_extent *VAR_9;
 struct bmap_rb_extent *VAR_10;
 int VAR_11 = 0;

 if (VAR_1 == 0)
  return 0;

 VAR_2->rcursor_next = ((void*)0);
 VAR_10 = VAR_2->wcursor;
 if (VAR_10) {
  if (VAR_0 >= VAR_10->start &&
      VAR_0 <= (VAR_10->start + VAR_10->count)) {



   goto got_extent;
  }
 }

 while (*VAR_5) {
  VAR_4 = *VAR_5;
  VAR_10 = FUNC_5(VAR_4);

  if (VAR_0 < VAR_10->start) {
   VAR_5 = &(*VAR_5)->rb_left;
  } else if (VAR_0 > (VAR_10->start + VAR_10->count)) {
   VAR_5 = &(*VAR_5)->rb_right;
  } else {
got_extent:
   if ((VAR_0 + VAR_1) <= (VAR_10->start + VAR_10->count))
    return 1;

   if ((VAR_10->start + VAR_10->count) == VAR_0)
    VAR_11 = 0;
   else
    VAR_11 = 1;

   VAR_1 += (VAR_0 - VAR_10->start);
   VAR_0 = VAR_10->start;
   VAR_9 = VAR_10;
   VAR_6 = &VAR_10->node;

   goto skip_insert;
  }
 }

 FUNC_7(&VAR_9, VAR_0, VAR_1);

 VAR_6 = &VAR_9->node;
 FUNC_2(VAR_6, VAR_4, VAR_5);
 FUNC_1(VAR_6, VAR_3);
 VAR_2->wcursor = VAR_9;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  VAR_10 = FUNC_5(VAR_7);
  if ((VAR_10->start + VAR_10->count) == VAR_0) {
   VAR_0 = VAR_10->start;
   VAR_1 += VAR_10->count;
   FUNC_0(VAR_7, VAR_3);
   FUNC_6(VAR_2, VAR_10);
  }
 }

skip_insert:

 for (VAR_7 = FUNC_3(VAR_6); VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  VAR_8 = FUNC_3(VAR_7);
  VAR_10 = FUNC_5(VAR_7);

  if ((VAR_10->start + VAR_10->count) <= VAR_0)
   continue;


  if ((VAR_0 + VAR_1) < VAR_10->start)
   break;


  if ((VAR_0 + VAR_1) >= (VAR_10->start + VAR_10->count)) {
   FUNC_0(VAR_7, VAR_3);
   FUNC_6(VAR_2, VAR_10);
   continue;
  } else {

   VAR_1 += ((VAR_10->start + VAR_10->count) -
      (VAR_0 + VAR_1));
   FUNC_0(VAR_7, VAR_3);
   FUNC_6(VAR_2, VAR_10);
   break;
  }
 }

 VAR_9->start = VAR_0;
 VAR_9->count = VAR_1;

 return VAR_11;
}
