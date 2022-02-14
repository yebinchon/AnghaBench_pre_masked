
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; } ;
struct TYPE_9__ {struct rb_node* rb_node; } ;
struct ext2fs_rb_private {TYPE_5__ root; int * rcursor; } ;
struct bmap_rb_extent {struct rb_node node; } ;
typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef scalar_t__ errcode_t ;
struct TYPE_8__ {scalar_t__ private; } ;


 scalar_t__ FUNC_0 (int,struct bmap_rb_extent**) ;
 struct rb_node* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct rb_node*,TYPE_5__*) ;
 struct rb_node* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct rb_node*,struct rb_node*,struct rb_node**) ;
 struct rb_node* FUNC_5 (struct rb_node*) ;
 int FUNC_6 (struct bmap_rb_extent*,struct bmap_rb_extent*,int) ;
 struct bmap_rb_extent* FUNC_7 (struct rb_node*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static errcode_t FUNC_9(ext2fs_generic_bitmap_64 VAR_0,
         ext2fs_generic_bitmap_64 VAR_1)
{
 struct ext2fs_rb_private *VAR_2, *VAR_3;
 struct bmap_rb_extent *VAR_4, *VAR_5;
 struct rb_node *VAR_6, *VAR_7, *VAR_8, **VAR_9;
 errcode_t VAR_10 = 0;

 VAR_10 = FUNC_8 (VAR_1);
 if (VAR_10)
  return VAR_10;

 VAR_2 = (struct ext2fs_rb_private *) VAR_0->private;
 VAR_3 = (struct ext2fs_rb_private *) VAR_1->private;
 VAR_2->rcursor = ((void*)0);
 VAR_3->rcursor = ((void*)0);

 VAR_7 = FUNC_1(&VAR_2->root);
 while (VAR_7) {
  VAR_4 = FUNC_7(VAR_7);
  VAR_10 = FUNC_0(sizeof (struct bmap_rb_extent),
     &VAR_5);
  if (VAR_10)
   break;

  FUNC_6(VAR_5, VAR_4, sizeof(struct bmap_rb_extent));

  VAR_6 = &VAR_5->node;
  VAR_9 = &VAR_3->root.rb_node;

  VAR_8 = ((void*)0);
  if (*VAR_9) {
   VAR_8 = FUNC_3(&VAR_3->root);
   VAR_9 = &(VAR_8)->rb_right;
  }

  FUNC_4(VAR_6, VAR_8, VAR_9);
  FUNC_2(VAR_6, &VAR_3->root);

  VAR_7 = FUNC_5(VAR_7);
 }

 return VAR_10;
}
