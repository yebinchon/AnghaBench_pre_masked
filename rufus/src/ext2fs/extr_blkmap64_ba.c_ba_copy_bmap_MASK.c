
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {int bitarray; } ;
struct TYPE_6__ {int real_end; int start; scalar_t__ private; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static errcode_t FUNC_2(ext2fs_generic_bitmap_64 VAR_0,
         ext2fs_generic_bitmap_64 VAR_1)
{
 ext2fs_ba_private VAR_2 = (ext2fs_ba_private) VAR_0->private;
 ext2fs_ba_private VAR_3;
 errcode_t VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_0 (VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = (ext2fs_ba_private) VAR_1->private;

 VAR_5 = (size_t) (((VAR_0->real_end - VAR_0->start) / 8) + 1);
 FUNC_1 (VAR_3->bitarray, VAR_2->bitarray, VAR_5);

 return 0;
}
