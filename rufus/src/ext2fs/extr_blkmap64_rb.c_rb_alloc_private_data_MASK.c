
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2fs_rb_private {scalar_t__ mark_hit; scalar_t__ test_hit; int * wcursor; int * rcursor_next; int * rcursor; int root; } ;
typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef scalar_t__ errcode_t ;
struct TYPE_3__ {void* private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct ext2fs_rb_private**) ;

__attribute__((used)) static errcode_t FUNC_1 (ext2fs_generic_bitmap_64 VAR_1)
{
 struct ext2fs_rb_private *VAR_2;
 errcode_t VAR_3;

 VAR_3 = FUNC_0(sizeof (struct ext2fs_rb_private), &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->root = VAR_0;
 VAR_2->rcursor = ((void*)0);
 VAR_2->rcursor_next = ((void*)0);
 VAR_2->wcursor = ((void*)0);






 VAR_1->private = (void *) VAR_2;
 return 0;
}
