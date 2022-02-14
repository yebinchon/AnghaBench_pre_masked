
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_u32_list ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int num; int size; scalar_t__* list; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long,int,scalar_t__**) ;

errcode_t FUNC_2(ext2_u32_list VAR_1, __u32 VAR_2)
{
 errcode_t VAR_3;
 int VAR_4, VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_1, VAR_0);

 if (VAR_1->num >= VAR_1->size) {
  VAR_6 = VAR_1->size * sizeof(__u32);
  VAR_1->size += 100;
  VAR_3 = FUNC_1(VAR_6, VAR_1->size * sizeof(__u32),
        &VAR_1->list);
  if (VAR_3) {
   VAR_1->size -= 100;
   return VAR_3;
  }
 }




 VAR_4 = VAR_1->num-1;
 if ((VAR_1->num != 0) && (VAR_1->list[VAR_4] == VAR_2))
  return 0;
 if ((VAR_1->num == 0) || (VAR_1->list[VAR_4] < VAR_2)) {
  VAR_1->list[VAR_1->num++] = VAR_2;
  return 0;
 }

 VAR_5 = VAR_1->num;
 for (VAR_4=0; VAR_4 < VAR_1->num; VAR_4++) {
  if (VAR_1->list[VAR_4] == VAR_2)
   return 0;
  if (VAR_1->list[VAR_4] > VAR_2) {
   VAR_5 = VAR_4;
   break;
  }
 }
 for (VAR_4=VAR_1->num; VAR_4 > VAR_5; VAR_4--)
  VAR_1->list[VAR_4] = VAR_1->list[VAR_4-1];
 VAR_1->list[VAR_5] = VAR_2;
 VAR_1->num++;
 return 0;
}
