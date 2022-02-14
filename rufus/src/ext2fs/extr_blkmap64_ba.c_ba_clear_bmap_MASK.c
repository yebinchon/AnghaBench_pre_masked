
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
struct TYPE_5__ {int bitarray; } ;
struct TYPE_4__ {int real_end; int start; int private; } ;


 int FUNC_0 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_1(ext2fs_generic_bitmap_64 VAR_0)
{
 ext2fs_ba_private VAR_1 = (ext2fs_ba_private) VAR_0->private;

 FUNC_0(VAR_1->bitarray, 0,
        (size_t) (((VAR_0->real_end - VAR_0->start) / 8) + 1));
}
