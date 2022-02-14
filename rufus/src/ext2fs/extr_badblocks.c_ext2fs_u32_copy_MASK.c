
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
typedef scalar_t__ errcode_t ;
struct TYPE_5__ {int badblocks_flags; int list; int num; int size; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_1__**) ;

errcode_t FUNC_1(ext2_u32_list VAR_0, ext2_u32_list *VAR_1)
{
 errcode_t VAR_2;

 VAR_2 = FUNC_0(VAR_0->size, VAR_0->num, VAR_0->list, VAR_1);
 if (VAR_2)
  return VAR_2;
 (*VAR_1)->badblocks_flags = VAR_0->badblocks_flags;
 return 0;
}
