
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef int errcode_t ;
struct TYPE_2__ {int bitmap; int description; int real_end; int end; int start; int fs; int magic; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int *) ;

errcode_t FUNC_1(ext2fs_generic_bitmap VAR_0,
         ext2fs_generic_bitmap *VAR_1)
{
 ext2fs_generic_bitmap_32 VAR_2 = (ext2fs_generic_bitmap_32) VAR_0;

 return (FUNC_0(VAR_2->magic, VAR_2->fs,
        VAR_2->start, VAR_2->end,
        VAR_2->real_end,
        VAR_2->description, VAR_2->bitmap,
        VAR_1));
}
