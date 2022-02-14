
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef int __u64 ;
struct TYPE_4__ {int start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__u64 FUNC_3(ext2fs_generic_bitmap VAR_1)
{
 ext2fs_generic_bitmap_64 VAR_2 = (ext2fs_generic_bitmap_64) VAR_1;

 if (!VAR_2)
  return VAR_0;

 if (FUNC_0(VAR_2))
  return FUNC_2(VAR_1);

 if (!FUNC_1(VAR_2))
  return VAR_0;

 return VAR_2->start;
}
