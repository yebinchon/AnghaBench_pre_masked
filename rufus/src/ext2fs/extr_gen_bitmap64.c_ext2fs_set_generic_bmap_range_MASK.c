
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef int errcode_t ;
typedef int __u64 ;
struct TYPE_8__ {TYPE_1__* bitmap_ops; int magic; } ;
struct TYPE_7__ {int (* set_bmap_range ) (TYPE_2__*,int ,unsigned int,void*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,unsigned int,void*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,unsigned int,void*) ;

errcode_t FUNC_6(ext2fs_generic_bitmap VAR_3,
     __u64 VAR_4, unsigned int VAR_5,
     void *VAR_6)
{
 ext2fs_generic_bitmap_64 VAR_7 = (ext2fs_generic_bitmap_64) VAR_3;

 if (!VAR_7)
  return VAR_0;

 if (FUNC_0(VAR_7)) {
  if ((VAR_4+VAR_5-1) & ~0xffffffffULL) {
   FUNC_4(VAR_3, VAR_1,
         0xffffffff);
   return VAR_0;
  }
  return FUNC_3(VAR_3, VAR_7->magic,
             VAR_4, VAR_5, VAR_6);
 }

 if (!FUNC_1(VAR_7))
  return VAR_0;

 FUNC_2(VAR_7, VAR_2);

 return VAR_7->bitmap_ops->set_bmap_range(VAR_7, VAR_4, VAR_5, VAR_6);
}
