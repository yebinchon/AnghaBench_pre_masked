
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_struct_u32_iterate {int dummy; } ;
typedef int ext2_u32_list ;
typedef TYPE_1__* ext2_u32_iterate ;
typedef scalar_t__ errcode_t ;
struct TYPE_4__ {scalar_t__ ptr; int bb; int magic; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,TYPE_1__**) ;

errcode_t FUNC_2(ext2_u32_list VAR_2,
     ext2_u32_iterate *VAR_3)
{
 ext2_u32_iterate VAR_4;
 errcode_t VAR_5;

 FUNC_0(VAR_2, VAR_1);

 VAR_5 = FUNC_1(sizeof(struct ext2_struct_u32_iterate), &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->magic = VAR_0;
 VAR_4->bb = VAR_2;
 VAR_4->ptr = 0;
 *VAR_3 = VAR_4;
 return 0;
}
