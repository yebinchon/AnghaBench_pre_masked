
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
typedef int blk_t ;
struct TYPE_5__ {int num; int list; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

int FUNC_2(ext2_u32_list VAR_1, ext2_u32_list VAR_2)
{
 FUNC_0(VAR_1, VAR_0);
 FUNC_0(VAR_2, VAR_0);

 if (VAR_1->num != VAR_2->num)
  return 0;

 if (FUNC_1(VAR_1->list, VAR_2->list, VAR_1->num * sizeof(blk_t)) != 0)
  return 0;
 return 1;
}
