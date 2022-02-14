
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct TYPE_5__ {struct rb_node* rb_node; } ;
struct ext2fs_rb_private {TYPE_3__ root; } ;
struct bmap_rb_extent {scalar_t__ start; scalar_t__ count; } ;
typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ private; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 struct bmap_rb_extent* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static int FUNC_3(ext2fs_generic_bitmap_64 VAR_0,
         __u64 VAR_1, unsigned int VAR_2)
{
 struct rb_node *VAR_3 = ((void*)0), **VAR_4;
 struct rb_node *VAR_5, *VAR_6;
 struct ext2fs_rb_private *VAR_7;
 struct bmap_rb_extent *VAR_8;
 int VAR_9 = 1;

 VAR_7 = (struct ext2fs_rb_private *) VAR_0->private;
 VAR_4 = &VAR_7->root.rb_node;
 VAR_1 -= VAR_0->start;

 if (VAR_2 == 0 || FUNC_0(&VAR_7->root))
  return 1;






 while (*VAR_4) {
  VAR_3 = *VAR_4;
  VAR_8 = FUNC_2(VAR_3);
  if (VAR_1 < VAR_8->start) {
   VAR_4 = &(*VAR_4)->rb_left;
  } else if (VAR_1 >= (VAR_8->start + VAR_8->count)) {
   VAR_4 = &(*VAR_4)->rb_right;
  } else {




   return 0;
  }
 }

 VAR_5 = VAR_3;
 while (VAR_5) {
  VAR_6 = FUNC_1(VAR_5);
  VAR_8 = FUNC_2(VAR_5);
  VAR_5 = VAR_6;

  if ((VAR_8->start + VAR_8->count) <= VAR_1)
   continue;


  if ((VAR_1 + VAR_2) <= VAR_8->start)
   break;

  VAR_9 = 0;
  break;
 }
 return VAR_9;
}
