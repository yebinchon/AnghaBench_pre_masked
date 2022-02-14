
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {scalar_t__ magic; int num; scalar_t__* list; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(ext2_u32_list VAR_1, __u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (VAR_1->magic != VAR_0)
  return -1;

 if (VAR_1->num == 0)
  return -1;

 VAR_3 = 0;
 VAR_4 = VAR_1->num-1;
 if (VAR_2 == VAR_1->list[VAR_3])
  return VAR_3;
 if (VAR_2 == VAR_1->list[VAR_4])
  return VAR_4;

 while (VAR_3 < VAR_4) {
  VAR_5 = ((unsigned)VAR_3 + (unsigned)VAR_4)/2;
  if (VAR_5 == VAR_3 || VAR_5 == VAR_4)
   break;
  if (VAR_2 == VAR_1->list[VAR_5])
   return VAR_5;
  if (VAR_2 < VAR_1->list[VAR_5])
   VAR_4 = VAR_5;
  else
   VAR_3 = VAR_5;
 }
 return -1;
}
