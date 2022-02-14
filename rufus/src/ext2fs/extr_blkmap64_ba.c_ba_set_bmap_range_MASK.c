
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
typedef int errcode_t ;
typedef int __u64 ;
struct TYPE_5__ {scalar_t__ bitarray; } ;
struct TYPE_4__ {int private; } ;


 int FUNC_0 (scalar_t__,void*,size_t) ;

__attribute__((used)) static errcode_t FUNC_1(ext2fs_generic_bitmap_64 VAR_0,
         __u64 VAR_1, size_t VAR_2, void *VAR_3)
{
 ext2fs_ba_private VAR_4 = (ext2fs_ba_private) VAR_0->private;

 FUNC_0 (VAR_4->bitarray + (VAR_1 >> 3), VAR_3, (VAR_2 + 7) >> 3);

 return 0;
}
