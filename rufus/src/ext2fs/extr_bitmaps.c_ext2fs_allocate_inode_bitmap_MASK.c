
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ext2fs_inode_bitmap ;
typedef int ext2fs_generic_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef unsigned int __u64 ;
struct TYPE_8__ {unsigned int s_inodes_count; } ;
struct TYPE_7__ {unsigned int group_desc_count; int flags; int default_bitmap_type; TYPE_5__* super; int write_bitmaps; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,unsigned int,unsigned int,unsigned int,char const*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,unsigned int,unsigned int,unsigned int,char const*,int ,int *) ;
 int VAR_5 ;

errcode_t FUNC_4(ext2_filsys VAR_6,
           const char *VAR_7,
           ext2fs_inode_bitmap *VAR_8)
{
 __u64 VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_6, VAR_1);

 VAR_6->write_bitmaps = VAR_5;

 VAR_9 = 1;
 VAR_10 = VAR_6->super->s_inodes_count;
 VAR_11 = (FUNC_1(VAR_6->super) * VAR_6->group_desc_count);


 if (VAR_6->flags & VAR_4)
  return (FUNC_2(VAR_6,
    VAR_3,
    VAR_6->default_bitmap_type,
    VAR_9, VAR_10, VAR_11, VAR_7, VAR_8));



 if ((VAR_10 > ~0U) || (VAR_11 > ~0U))
  return VAR_0;

 return (FUNC_3(VAR_2, VAR_6,
      VAR_9, VAR_10, VAR_11,
      VAR_7, 0,
      (ext2fs_generic_bitmap *) VAR_8));
}
