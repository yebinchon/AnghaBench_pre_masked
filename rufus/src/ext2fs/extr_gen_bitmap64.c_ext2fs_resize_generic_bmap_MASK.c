
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef TYPE_3__* ext2fs_generic_bitmap ;
typedef int errcode_t ;
typedef int __u64 ;
struct TYPE_12__ {int magic; } ;
struct TYPE_11__ {TYPE_1__* bitmap_ops; } ;
struct TYPE_10__ {int (* resize_bmap ) (TYPE_2__*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

errcode_t FUNC_5(ext2fs_generic_bitmap VAR_2,
         __u64 VAR_3,
         __u64 VAR_4)
{
 ext2fs_generic_bitmap_64 VAR_5 = (ext2fs_generic_bitmap_64) VAR_2;

 if (!VAR_5)
  return VAR_0;

 if (FUNC_0(VAR_5))
  return FUNC_3(VAR_2->magic, VAR_3,
          VAR_4, VAR_2);

 if (!FUNC_1(VAR_5))
  return VAR_0;

 FUNC_2(VAR_5, VAR_1);

 return VAR_5->bitmap_ops->resize_bmap(VAR_5, VAR_3, VAR_4);
}
