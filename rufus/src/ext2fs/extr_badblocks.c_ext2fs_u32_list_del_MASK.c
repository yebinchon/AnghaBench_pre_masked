
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
typedef int __u32 ;
struct TYPE_4__ {int num; int * list; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(ext2_u32_list VAR_0, __u32 VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0->num == 0)
  return -1;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return -1;

 for (VAR_3 = VAR_2 ; VAR_3 < VAR_0->num-1; VAR_3++)
  VAR_0->list[VAR_3] = VAR_0->list[VAR_3+1];
 VAR_0->num--;
 return 0;
}
