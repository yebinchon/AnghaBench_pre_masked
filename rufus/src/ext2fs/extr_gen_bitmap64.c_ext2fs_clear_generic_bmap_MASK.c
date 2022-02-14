
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
struct TYPE_6__ {TYPE_1__* bitmap_ops; } ;
struct TYPE_5__ {int (* clear_bmap ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(ext2fs_generic_bitmap VAR_0)
{
 ext2fs_generic_bitmap_64 VAR_1 = (ext2fs_generic_bitmap_64) VAR_0;

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_0);
 else
  VAR_1->bitmap_ops->clear_bmap(VAR_1);
}
