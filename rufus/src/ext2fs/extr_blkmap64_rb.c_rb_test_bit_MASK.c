
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_2__ {struct rb_node* rb_node; } ;
struct ext2fs_rb_private {struct bmap_rb_extent* rcursor_next; struct bmap_rb_extent* rcursor; struct bmap_rb_extent* wcursor; int test_hit; TYPE_1__ root; } ;
struct bmap_rb_extent {scalar_t__ start; scalar_t__ count; int node; } ;
typedef scalar_t__ __u64 ;


 struct rb_node* FUNC_0 (int *) ;
 struct bmap_rb_extent* FUNC_1 (struct rb_node*) ;

__attribute__((used)) inline static int
FUNC_2(struct ext2fs_rb_private *VAR_0, __u64 VAR_1)
{
 struct bmap_rb_extent *VAR_2, *VAR_3 = ((void*)0);
 struct rb_node *VAR_4 = ((void*)0), *VAR_5;
 struct rb_node **VAR_6 = &VAR_0->root.rb_node;
 struct bmap_rb_extent *VAR_7;

 VAR_2 = VAR_0->rcursor;
 if (!VAR_2)
  goto search_tree;

 if (VAR_1 >= VAR_2->start && VAR_1 < VAR_2->start + VAR_2->count) {



  return 1;
 }

 VAR_3 = VAR_0->rcursor_next;
 if (!VAR_3) {
  VAR_5 = FUNC_0(&VAR_2->node);
  if (VAR_5)
   VAR_3 = FUNC_1(VAR_5);
  VAR_0->rcursor_next = VAR_3;
 }
 if (VAR_3) {
  if ((VAR_1 >= VAR_2->start + VAR_2->count) &&
      (VAR_1 < VAR_3->start)) {



   return 0;
  }
 }
 VAR_0->rcursor = ((void*)0);
 VAR_0->rcursor_next = ((void*)0);

 VAR_2 = VAR_0->wcursor;
 if (!VAR_2)
  goto search_tree;

 if (VAR_1 >= VAR_2->start && VAR_1 < VAR_2->start + VAR_2->count)
  return 1;

search_tree:

 while (*VAR_6) {
  VAR_4 = *VAR_6;
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_1 < VAR_7->start)
   VAR_6 = &(*VAR_6)->rb_left;
  else if (VAR_1 >= (VAR_7->start + VAR_7->count))
   VAR_6 = &(*VAR_6)->rb_right;
  else {
   VAR_0->rcursor = VAR_7;
   VAR_0->rcursor_next = ((void*)0);
   return 1;
  }
 }
 return 0;
}
