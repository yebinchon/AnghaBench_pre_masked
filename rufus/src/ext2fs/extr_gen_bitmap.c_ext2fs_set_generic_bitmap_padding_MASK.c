
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; scalar_t__ real_end; int bitmap; } ;


 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1(ext2fs_generic_bitmap VAR_0)
{
 ext2fs_generic_bitmap_32 VAR_1 = (ext2fs_generic_bitmap_32) VAR_0;
 __u32 VAR_2, VAR_3;


 for (VAR_2=VAR_1->end+1, VAR_3 = VAR_2 - VAR_1->start;
      VAR_2 <= VAR_1->real_end && VAR_2 > VAR_1->end;
      VAR_2++, VAR_3++)
  FUNC_0(VAR_3, VAR_1->bitmap);
}
