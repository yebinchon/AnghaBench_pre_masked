
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ ext2_ino_t ;
typedef int errcode_t ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {scalar_t__ real_end; scalar_t__ end; int magic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int,scalar_t__,scalar_t__*) ;

errcode_t FUNC_3(ext2fs_generic_bitmap VAR_1,
     errcode_t VAR_2,
     __u64 VAR_3, __u64 *VAR_4)
{
 ext2fs_generic_bitmap_64 VAR_5 = (ext2fs_generic_bitmap_64) VAR_1;

 if (!VAR_5)
  return VAR_0;

 if (FUNC_0(VAR_5)) {
  ext2_ino_t VAR_6;
  int VAR_7;

  VAR_7 = FUNC_2(VAR_1,
        VAR_5->magic,
        VAR_2, VAR_3, &VAR_6);
  if (VAR_4)
   *VAR_4 = VAR_6;
  return VAR_7;
 }

 if (!FUNC_1(VAR_5))
  return VAR_0;

 if (VAR_3 > VAR_5->real_end)
  return VAR_2;
 if (VAR_4)
  *VAR_4 = VAR_5->end;
 VAR_5->end = VAR_3;
 return 0;
}
