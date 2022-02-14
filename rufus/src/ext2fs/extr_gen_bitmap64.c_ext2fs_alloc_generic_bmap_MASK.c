
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct timezone {int dummy; } ;
struct ext2fs_struct_generic_bitmap_64 {int dummy; } ;
struct ext2_bitmap_ops {int (* new_bmap ) (TYPE_4__*,TYPE_3__*) ;} ;
typedef TYPE_3__* ext2fs_generic_bitmap_64 ;
typedef scalar_t__ ext2fs_generic_bitmap ;
typedef int ext2_ino_t ;
typedef TYPE_4__* ext2_filsys ;
typedef int errcode_t ;
typedef void* __u64 ;
struct TYPE_16__ {scalar_t__ cluster_ratio_bits; TYPE_1__* super; } ;
struct TYPE_14__ {int type; int created; } ;
struct TYPE_15__ {int magic; struct TYPE_15__* description; struct ext2_bitmap_ops* bitmap_ops; int base_error_code; scalar_t__ cluster_bits; void* real_end; void* end; void* start; TYPE_4__* fs; TYPE_2__ stats; } ;
struct TYPE_13__ {int s_inodes_count; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct ext2_bitmap_ops VAR_4 ;
 struct ext2_bitmap_ops VAR_5 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (scalar_t__,TYPE_3__**) ;
 int FUNC_2 (int,TYPE_3__**) ;
 int FUNC_3 (TYPE_4__*,int*) ;
 int FUNC_4 (int *,struct timezone*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;

errcode_t FUNC_9(ext2_filsys VAR_6, errcode_t VAR_7,
        int VAR_8, __u64 VAR_9, __u64 VAR_10,
        __u64 VAR_11,
        const char *VAR_12,
        ext2fs_generic_bitmap *VAR_13)
{
 ext2fs_generic_bitmap_64 VAR_14;
 struct ext2_bitmap_ops *VAR_15;
 ext2_ino_t VAR_16;
 errcode_t VAR_17;

 if (!VAR_8)
  VAR_8 = 131;

 switch (VAR_8) {
 case 131:
  VAR_15 = &VAR_4;
  break;
 case 130:
  VAR_15 = &VAR_5;
  break;
 case 132:
  VAR_17 = FUNC_3(VAR_6, &VAR_16);
  if (VAR_17 || VAR_16 > (VAR_6->super->s_inodes_count / 320))
   VAR_15 = &VAR_4;
  else
   VAR_15 = &VAR_5;
  break;
 default:
  return VAR_0;
 }

 VAR_17 = FUNC_2(sizeof(struct ext2fs_struct_generic_bitmap_64),
        &VAR_14);
 if (VAR_17)
  return VAR_17;
 VAR_14->magic = VAR_7;
 VAR_14->fs = VAR_6;
 VAR_14->start = VAR_9;
 VAR_14->end = VAR_10;
 VAR_14->real_end = VAR_11;
 VAR_14->bitmap_ops = VAR_15;
 VAR_14->cluster_bits = 0;
 switch (VAR_7) {
 case 128:
  VAR_14->base_error_code = VAR_3;
  break;
 case 129:
  VAR_14->base_error_code = VAR_1;
  VAR_14->cluster_bits = VAR_6->cluster_ratio_bits;
  break;
 default:
  VAR_14->base_error_code = VAR_2;
 }
 if (VAR_12) {
  VAR_17 = FUNC_1(FUNC_7(VAR_12)+1, &VAR_14->description);
  if (VAR_17) {
   FUNC_0(&VAR_14);
   return VAR_17;
  }
  FUNC_6(VAR_14->description, VAR_12);
 } else
  VAR_14->description = 0;

 VAR_17 = VAR_14->bitmap_ops->new_bmap(VAR_6, VAR_14);
 if (VAR_17) {
  FUNC_0(&VAR_14->description);
  FUNC_0(&VAR_14);
  return VAR_17;
 }

 *VAR_13 = (ext2fs_generic_bitmap) VAR_14;
 return 0;
}
