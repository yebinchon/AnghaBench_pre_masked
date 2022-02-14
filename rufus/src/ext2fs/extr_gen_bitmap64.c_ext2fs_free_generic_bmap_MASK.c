
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
struct TYPE_10__ {scalar_t__ magic; struct TYPE_10__* description; TYPE_1__* bitmap_ops; } ;
struct TYPE_9__ {int (* free_bmap ) (TYPE_2__*) ;int (* print_stats ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(ext2fs_generic_bitmap VAR_0)
{
 ext2fs_generic_bitmap_64 VAR_1 = (ext2fs_generic_bitmap_64) VAR_0;

 if (!VAR_1)
  return;

 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_0);
  return;
 }

 if (!FUNC_1(VAR_1))
  return;
 VAR_1->bitmap_ops->free_bmap(VAR_1);

 if (VAR_1->description) {
  FUNC_3(&VAR_1->description);
  VAR_1->description = 0;
 }
 VAR_1->magic = 0;
 FUNC_3(&VAR_1);
}
