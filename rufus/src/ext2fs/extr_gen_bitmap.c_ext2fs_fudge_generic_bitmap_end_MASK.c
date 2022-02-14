
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ext2fs_inode_bitmap ;
typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef scalar_t__ ext2_ino_t ;
typedef int errcode_t ;
struct TYPE_3__ {scalar_t__ real_end; scalar_t__ end; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

errcode_t FUNC_1(ext2fs_inode_bitmap VAR_0,
       errcode_t VAR_1, errcode_t VAR_2,
       ext2_ino_t VAR_3, ext2_ino_t *VAR_4)
{
 ext2fs_generic_bitmap_32 VAR_5 = (ext2fs_generic_bitmap_32) VAR_0;

 FUNC_0(VAR_5, VAR_1);

 if (VAR_3 > VAR_5->real_end)
  return VAR_2;
 if (VAR_4)
  *VAR_4 = VAR_5->end;
 VAR_5->end = VAR_3;
 return 0;
}
