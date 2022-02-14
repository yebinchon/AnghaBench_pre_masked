
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ext2fs_struct_generic_bitmap_32 {int dummy; } ;
typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef scalar_t__ ext2fs_generic_bitmap ;
typedef int ext2_filsys ;
typedef int errcode_t ;
typedef void* __u32 ;
struct TYPE_7__ {int magic; int start; int real_end; struct TYPE_7__* bitmap; struct TYPE_7__* description; int base_error_code; void* end; int fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (size_t,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,char*,size_t) ;
 int FUNC_3 (TYPE_1__*,int ,size_t) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (char const*) ;

errcode_t FUNC_6(errcode_t VAR_3, ext2_filsys VAR_4,
         __u32 VAR_5, __u32 VAR_6, __u32 VAR_7,
         const char *VAR_8, char *VAR_9,
         ext2fs_generic_bitmap *VAR_10)
{
 ext2fs_generic_bitmap_32 VAR_11;
 errcode_t VAR_12;
 size_t VAR_13;

 VAR_12 = FUNC_1(sizeof(struct ext2fs_struct_generic_bitmap_32),
    &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11->magic = VAR_3;
 VAR_11->fs = VAR_4;
 VAR_11->start = VAR_5;
 VAR_11->end = VAR_6;
 VAR_11->real_end = VAR_7;
 switch (VAR_3) {
 case 128:
  VAR_11->base_error_code = VAR_2;
  break;
 case 129:
  VAR_11->base_error_code = VAR_0;
  break;
 default:
  VAR_11->base_error_code = VAR_1;
 }
 if (VAR_8) {
  VAR_12 = FUNC_1(FUNC_5(VAR_8)+1, &VAR_11->description);
  if (VAR_12) {
   FUNC_0(&VAR_11);
   return VAR_12;
  }
  FUNC_4(VAR_11->description, VAR_8);
 } else
  VAR_11->description = 0;

 VAR_13 = (size_t) (((VAR_11->real_end - VAR_11->start) / 8) + 1);

 VAR_13 = (VAR_13 + 7) & ~3;
 VAR_12 = FUNC_1(VAR_13, &VAR_11->bitmap);
 if (VAR_12) {
  FUNC_0(&VAR_11->description);
  FUNC_0(&VAR_11);
  return VAR_12;
 }

 if (VAR_9)
  FUNC_2(VAR_11->bitmap, VAR_9, VAR_13);
 else
  FUNC_3(VAR_11->bitmap, 0, VAR_13);
 *VAR_10 = (ext2fs_generic_bitmap) VAR_11;
 return 0;
}
