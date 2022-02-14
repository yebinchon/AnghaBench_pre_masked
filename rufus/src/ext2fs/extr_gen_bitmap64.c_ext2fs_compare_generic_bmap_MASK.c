
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef int errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

errcode_t FUNC_4(errcode_t VAR_1,
          ext2fs_generic_bitmap VAR_2,
          ext2fs_generic_bitmap VAR_3)
{
 ext2fs_generic_bitmap_64 VAR_4 = (ext2fs_generic_bitmap_64) VAR_2;
 ext2fs_generic_bitmap_64 VAR_5 = (ext2fs_generic_bitmap_64) VAR_3;
 blk64_t VAR_6;

 if (!VAR_4 || !VAR_5)
  return VAR_0;
 if (VAR_4->magic != VAR_5->magic)
  return VAR_0;


 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4->magic, VAR_1,
           VAR_2, VAR_3);

 if (!FUNC_1(VAR_4))
  return VAR_0;

 if ((VAR_4->start != VAR_5->start) ||
     (VAR_4->end != VAR_5->end))
  return VAR_1;

 for (VAR_6 = VAR_4->end - ((VAR_4->end - VAR_4->start) % 8); VAR_6 <= VAR_4->end; VAR_6++)
  if (FUNC_3(VAR_2, VAR_6) !=
      FUNC_3(VAR_3, VAR_6))
   return VAR_1;

 return 0;
}
