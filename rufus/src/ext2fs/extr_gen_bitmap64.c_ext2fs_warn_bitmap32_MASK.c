
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
struct TYPE_2__ {scalar_t__ description; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char const*,...) ;

void FUNC_1(ext2fs_generic_bitmap VAR_1, const char *VAR_2)
{
 ext2fs_generic_bitmap_64 VAR_3 = (ext2fs_generic_bitmap_64) VAR_1;


 if (VAR_3 && VAR_3->description)
  FUNC_0(0, VAR_0,
   "called %s with 64-bit bitmap for %s", VAR_2,
   VAR_3->description);
 else
  FUNC_0(0, VAR_0,
   "called %s with 64-bit bitmap", VAR_2);

}
