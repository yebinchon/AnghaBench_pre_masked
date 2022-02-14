
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
struct TYPE_4__ {scalar_t__ magic; struct TYPE_4__* list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(ext2_u32_list VAR_1)
{
 if (VAR_1->magic != VAR_0)
  return;

 if (VAR_1->list)
  FUNC_0(&VAR_1->list);
 VAR_1->list = 0;
 FUNC_0(&VAR_1);
}
