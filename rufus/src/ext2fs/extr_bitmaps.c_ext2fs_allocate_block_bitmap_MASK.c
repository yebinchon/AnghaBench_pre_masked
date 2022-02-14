
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ext2fs_generic_bitmap ;
typedef int ext2fs_block_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef int __u64 ;
struct TYPE_10__ {scalar_t__ s_first_data_block; } ;
struct TYPE_9__ {int flags; int default_bitmap_type; scalar_t__ group_desc_count; TYPE_3__* super; int write_bitmaps; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,int,int,char const*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_1__*,int,int,int,char const*,int ,int *) ;
 int VAR_5 ;

errcode_t FUNC_6(ext2_filsys VAR_6,
           const char *VAR_7,
           ext2fs_block_bitmap *VAR_8)
{
 __u64 VAR_9, VAR_10, VAR_11;

 FUNC_1(VAR_6, VAR_3);

 VAR_6->write_bitmaps = VAR_5;

 VAR_9 = FUNC_0(VAR_6, VAR_6->super->s_first_data_block);
 VAR_10 = FUNC_0(VAR_6, FUNC_4(VAR_6->super)-1);
 VAR_11 = ((__u64) FUNC_2(VAR_6->super)
      * (__u64) VAR_6->group_desc_count)-1 + VAR_9;

 if (VAR_6->flags & VAR_4)
  return (FUNC_3(VAR_6,
    VAR_2,
    VAR_6->default_bitmap_type,
    VAR_9, VAR_10, VAR_11, VAR_7, VAR_8));

 if ((VAR_10 > ~0U) || (VAR_11 > ~0U))
  return VAR_0;

 return (FUNC_5(VAR_1, VAR_6,
        VAR_9, VAR_10, VAR_11,
        VAR_7, 0,
        (ext2fs_generic_bitmap *) VAR_8));
}
