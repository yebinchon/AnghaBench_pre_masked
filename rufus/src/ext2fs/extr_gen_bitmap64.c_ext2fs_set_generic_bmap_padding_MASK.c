
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ __u64 ;
struct TYPE_6__ {TYPE_1__* bitmap_ops; scalar_t__ end; scalar_t__ real_end; } ;
struct TYPE_5__ {int (* mark_bmap_extent ) (TYPE_2__*,scalar_t__,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;

void FUNC_3(ext2fs_generic_bitmap VAR_0)
{
 ext2fs_generic_bitmap_64 VAR_1 = (ext2fs_generic_bitmap_64) VAR_0;
 __u64 VAR_2, VAR_3;

 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_0);
  return;
 }

 VAR_2 = VAR_1->end + 1;
 VAR_3 = VAR_1->real_end - VAR_1->end;
 VAR_1->bitmap_ops->mark_bmap_extent(VAR_1, VAR_2, VAR_3);

}
