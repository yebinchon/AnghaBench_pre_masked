
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef scalar_t__ ext2fs_generic_bitmap ;
typedef scalar_t__ ext2fs_block_bitmap ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int __u64 ;
struct TYPE_11__ {int s_first_data_block; } ;
struct TYPE_10__ {int flags; int default_bitmap_type; scalar_t__ group_desc_count; TYPE_3__* super; int cluster_ratio_bits; int write_bitmaps; } ;
struct TYPE_9__ {scalar_t__ cluster_bits; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int,int,int,char const*,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char const*,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_4 ;

errcode_t FUNC_5(ext2_filsys VAR_5,
         const char *VAR_6,
         ext2fs_block_bitmap *VAR_7)
{
 __u64 VAR_8, VAR_9, VAR_10;
 ext2fs_generic_bitmap VAR_11;
 ext2fs_generic_bitmap_64 VAR_12;
 errcode_t VAR_13;

 FUNC_1(VAR_5, VAR_2);

 VAR_5->write_bitmaps = VAR_4;

 if (!VAR_5->cluster_ratio_bits)
  return FUNC_3(VAR_5, VAR_6, VAR_7);

 if ((VAR_5->flags & VAR_3) == 0)
  return VAR_0;

 VAR_8 = VAR_5->super->s_first_data_block;
 VAR_9 = FUNC_4(VAR_5->super)-1;
 VAR_10 = ((__u64) FUNC_0(VAR_5->super)
      * (__u64) VAR_5->group_desc_count)-1 + VAR_8;

 VAR_13 = FUNC_2(VAR_5, VAR_1,
        VAR_5->default_bitmap_type, VAR_8,
        VAR_9, VAR_10, VAR_6, &VAR_11);
 if (VAR_13)
  return VAR_13;
 VAR_12 = (ext2fs_generic_bitmap_64) VAR_11;
 VAR_12->cluster_bits = 0;
 *VAR_7 = VAR_11;
 return 0;
}
