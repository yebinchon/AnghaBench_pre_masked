
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
struct TYPE_2__ {scalar_t__ base_error_code; scalar_t__ description; } ;


 int FUNC_0 (int ,scalar_t__,char*,unsigned long,...) ;

void FUNC_1(ext2fs_generic_bitmap VAR_0,
       int VAR_1, unsigned long VAR_2)
{
 ext2fs_generic_bitmap_32 VAR_3 = (ext2fs_generic_bitmap_32) VAR_0;


 if (VAR_3->description)
  FUNC_0(0, VAR_3->base_error_code+VAR_1,
   "#%lu for %s", VAR_2, VAR_3->description);
 else
  FUNC_0(0, VAR_3->base_error_code + VAR_1, "#%lu", VAR_2);

}
