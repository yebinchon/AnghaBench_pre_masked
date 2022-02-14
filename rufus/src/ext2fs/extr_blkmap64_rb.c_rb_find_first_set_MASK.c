
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
typedef int errcode_t ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 struct bmap_rb_extent* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static errcode_t FUNC_3(ext2fs_generic_bitmap_64 VAR_2,
       __u64 VAR_3, __u64 VAR_4, __u64 *VAR_5)
{
 struct rb_node *VAR_6 = ((void*)0), **VAR_7;
 struct rb_node *VAR_8;
 struct ext2fs_rb_private *VAR_9;
 struct bmap_rb_extent *VAR_10;

 VAR_9 = (struct ext2fs_rb_private *) VAR_2->private;
 VAR_7 = &VAR_9->root.rb_node;
 VAR_3 -= VAR_2->start;
 VAR_4 -= VAR_2->start;

 if (VAR_3 > VAR_4)
  return VAR_0;

 if (FUNC_0(&VAR_9->root))
  return VAR_1;

 while (*VAR_7) {
  VAR_6 = *VAR_7;
  VAR_10 = FUNC_2(VAR_6);
  if (VAR_3 < VAR_10->start) {
   VAR_7 = &(*VAR_7)->rb_left;
  } else if (VAR_3 >= (VAR_10->start + VAR_10->count)) {
   VAR_7 = &(*VAR_7)->rb_right;
  } else {

   *VAR_5 = VAR_3 + VAR_2->start;
   return 0;
  }
 }

 VAR_8 = VAR_6;
 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10->start < VAR_3) {
  VAR_8 = FUNC_1(VAR_8);
  if (VAR_8 == ((void*)0))
   return VAR_1;
  VAR_10 = FUNC_2(VAR_8);
 }
 if (VAR_10->start <= VAR_4) {
  *VAR_5 = VAR_10->start + VAR_2->start;
  return 0;
 }
 return VAR_1;
}
