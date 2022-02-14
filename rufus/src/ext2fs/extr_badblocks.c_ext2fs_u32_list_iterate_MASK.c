
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
typedef TYPE_2__* ext2_u32_iterate ;
typedef int __u32 ;
struct TYPE_5__ {scalar_t__ magic; scalar_t__ ptr; TYPE_1__* bb; } ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ num; int * list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(ext2_u32_iterate VAR_2, __u32 *VAR_3)
{
 ext2_u32_list VAR_4;

 if (VAR_2->magic != VAR_0)
  return 0;

 VAR_4 = VAR_2->bb;

 if (VAR_4->magic != VAR_1)
  return 0;

 if (VAR_2->ptr < VAR_4->num) {
  *VAR_3 = VAR_4->list[VAR_2->ptr++];
  return 1;
 }
 *VAR_3 = 0;
 return 0;
}
