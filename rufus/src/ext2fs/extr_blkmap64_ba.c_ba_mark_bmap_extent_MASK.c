
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
typedef scalar_t__ blk64_t ;
typedef int __u64 ;
struct TYPE_5__ {int bitarray; } ;
struct TYPE_4__ {scalar_t__ start; int private; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(ext2fs_generic_bitmap_64 VAR_0, __u64 VAR_1,
    unsigned int VAR_2)
{
 ext2fs_ba_private VAR_3 = (ext2fs_ba_private) VAR_0->private;
 blk64_t VAR_4 = (blk64_t) VAR_1;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_0(VAR_4 + VAR_5 - VAR_0->start, VAR_3->bitarray);
}
