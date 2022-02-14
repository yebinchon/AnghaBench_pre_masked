
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


 int FUNC_0 (scalar_t__,void*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 int FUNC_3 (char*,int,int) ;
 struct bmap_rb_extent* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static errcode_t FUNC_5(ext2fs_generic_bitmap_64 VAR_0,
         __u64 VAR_1, size_t VAR_2, void *VAR_3)
{

 struct rb_node *VAR_4 = ((void*)0), *VAR_5, **VAR_6;
 struct ext2fs_rb_private *VAR_7;
 struct bmap_rb_extent *VAR_8;
 __u64 VAR_9, VAR_10;

 VAR_7 = (struct ext2fs_rb_private *) VAR_0->private;
 VAR_6 = &VAR_7->root.rb_node;
 VAR_1 -= VAR_0->start;

 if (FUNC_1(&VAR_7->root))
  return 0;

 while (*VAR_6) {
  VAR_4 = *VAR_6;
  VAR_8 = FUNC_4(VAR_4);
  if (VAR_1 < VAR_8->start) {
   VAR_6 = &(*VAR_6)->rb_left;
  } else if (VAR_1 >= (VAR_8->start + VAR_8->count)) {
   VAR_6 = &(*VAR_6)->rb_right;
  } else
   break;
 }

 FUNC_3(VAR_3, 0, (VAR_2 + 7) >> 3);

 for (; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = FUNC_2(VAR_4);
  VAR_8 = FUNC_4(VAR_4);

  VAR_10 = VAR_8->start;
  VAR_9 = VAR_8->count;
  if (VAR_10 >= VAR_1 + VAR_2)
   break;
  if (VAR_10 < VAR_1) {
   if (VAR_10 + VAR_9 < VAR_1)
    continue;
   VAR_9 -= VAR_1 - VAR_10;
   VAR_10 = VAR_1;
  }
  if (VAR_10 + VAR_9 > VAR_1 + VAR_2)
   VAR_9 = VAR_1 + VAR_2 - VAR_10;

  while (VAR_9 > 0) {
   if ((VAR_9 >= 8) &&
       ((VAR_10 - VAR_1) % 8) == 0) {
    int VAR_11 = VAR_9 >> 3;
    int VAR_12 = (VAR_10 - VAR_1) >> 3;

    FUNC_3(((char *) VAR_3) + VAR_12, 0xFF, VAR_11);
    VAR_10 += VAR_11 << 3;
    VAR_9 -= VAR_11 << 3;
    continue;
   }
   FUNC_0((VAR_10 - VAR_1), VAR_3);
   VAR_10++;
   VAR_9--;
  }
 }
 return 0;
}
