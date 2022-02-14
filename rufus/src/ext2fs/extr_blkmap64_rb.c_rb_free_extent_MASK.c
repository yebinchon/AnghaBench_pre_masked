
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_rb_private {struct bmap_rb_extent* rcursor_next; struct bmap_rb_extent* rcursor; struct bmap_rb_extent* wcursor; } ;
struct bmap_rb_extent {int dummy; } ;


 int FUNC_0 (struct bmap_rb_extent**) ;

__attribute__((used)) inline
static void FUNC_1(struct ext2fs_rb_private *VAR_0,
      struct bmap_rb_extent *VAR_1)
{
 if (VAR_0->wcursor == VAR_1)
  VAR_0->wcursor = ((void*)0);
 if (VAR_0->rcursor == VAR_1)
  VAR_0->rcursor = ((void*)0);
 if (VAR_0->rcursor_next == VAR_1)
  VAR_0->rcursor_next = ((void*)0);
 FUNC_0(&VAR_1);
}
