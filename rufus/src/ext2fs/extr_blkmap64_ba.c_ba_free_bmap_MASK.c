
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
struct TYPE_6__ {struct TYPE_6__* bitarray; } ;
struct TYPE_5__ {int private; } ;


 int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_1(ext2fs_generic_bitmap_64 VAR_0)
{
 ext2fs_ba_private VAR_1 = (ext2fs_ba_private) VAR_0->private;

 if (!VAR_1)
  return;

 if (VAR_1->bitarray) {
  FUNC_0 (&VAR_1->bitarray);
  VAR_1->bitarray = 0;
 }
 FUNC_0 (&VAR_1);
 VAR_1 = 0;
}
