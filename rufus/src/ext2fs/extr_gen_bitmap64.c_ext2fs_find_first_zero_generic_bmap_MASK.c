
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ start ;
typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ end ;
typedef int blk_t ;
typedef int __u64 ;
struct TYPE_7__ {int cluster_bits; int start; int end; TYPE_1__* bitmap_ops; } ;
struct TYPE_6__ {int (* test_bmap ) (TYPE_2__*,int) ;scalar_t__ (* find_first_zero ) (TYPE_2__*,int,int,int*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,int,int*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,int*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

errcode_t FUNC_7(ext2fs_generic_bitmap VAR_3,
           __u64 VAR_4, __u64 VAR_5, __u64 *VAR_6)
{
 ext2fs_generic_bitmap_64 VAR_7 = (ext2fs_generic_bitmap_64) VAR_3;
 __u64 VAR_8, VAR_9, VAR_10;
 errcode_t VAR_11;

 if (!VAR_3)
  return VAR_0;

 if (FUNC_0(VAR_3)) {
  blk_t VAR_12 = 0;

  if (((VAR_4) & ~0xffffffffULL) ||
      ((VAR_5) & ~0xffffffffULL)) {
   FUNC_3(VAR_3, VAR_2, VAR_4);
   return VAR_0;
  }

  VAR_11 = FUNC_2(VAR_3, VAR_4,
              VAR_5, &VAR_12);
  if (VAR_11 == 0)
   *VAR_6 = VAR_12;
  return VAR_11;
 }

 if (!FUNC_1(VAR_3))
  return VAR_0;

 VAR_8 = VAR_4 >> VAR_7->cluster_bits;
 VAR_9 = VAR_5 >> VAR_7->cluster_bits;

 if (VAR_8 < VAR_7->start || VAR_9 > VAR_7->end || VAR_4 > VAR_5) {
  FUNC_6(VAR_7, VAR_2, VAR_4);
  return VAR_0;
 }

 if (VAR_7->bitmap_ops->find_first_zero) {
  VAR_11 = VAR_7->bitmap_ops->find_first_zero(VAR_7, VAR_8,
            VAR_9, &VAR_10);
  if (VAR_11)
   return VAR_11;
 found:
  VAR_10 <<= VAR_7->cluster_bits;
  *VAR_6 = (VAR_10 >= VAR_4) ? VAR_10 : VAR_4;
  return 0;
 }

 for (VAR_10 = VAR_8; VAR_10 <= VAR_9; VAR_10++)
  if (!VAR_7->bitmap_ops->test_bmap(VAR_7, VAR_10))
   goto found;

 return VAR_1;
}
