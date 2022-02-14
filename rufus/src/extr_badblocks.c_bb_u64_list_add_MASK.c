
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int errcode_t ;
typedef TYPE_1__* bb_u64_list ;
struct TYPE_4__ {scalar_t__* list; int num; int size; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__* FUNC_2 (scalar_t__*,int) ;

__attribute__((used)) static errcode_t FUNC_3(bb_u64_list VAR_2, uint64_t VAR_3)
{
 int VAR_4, VAR_5;
 uint64_t* VAR_6 = VAR_2->list;

 FUNC_0(VAR_2, VAR_0);

 if (VAR_2->num >= VAR_2->size) {
  VAR_2->size += 100;
  VAR_2->list = FUNC_2(VAR_2->list, VAR_2->size * sizeof(uint64_t));
  if (VAR_2->list == ((void*)0)) {
   VAR_2->list = VAR_6;
   VAR_2->size -= 100;
   return VAR_1;
  }

  FUNC_1(&VAR_2->list[VAR_2->size-100], 0, 100 * sizeof(uint64_t));
 }




 VAR_4 = VAR_2->num-1;
 if ((VAR_2->num != 0) && (VAR_2->list[VAR_4] == VAR_3))
  return 0;
 if ((VAR_2->num == 0) || (VAR_2->list[VAR_4] < VAR_3)) {
  VAR_2->list[VAR_2->num++] = VAR_3;
  return 0;
 }

 VAR_5 = VAR_2->num;
 for (VAR_4=0; VAR_4 < VAR_2->num; VAR_4++) {
  if (VAR_2->list[VAR_4] == VAR_3)
   return 0;
  if (VAR_2->list[VAR_4] > VAR_3) {
   VAR_5 = VAR_4;
   break;
  }
 }
 for (VAR_4=VAR_2->num; VAR_4 > VAR_5; VAR_4--)
  VAR_2->list[VAR_4] = VAR_2->list[VAR_4-1];
 VAR_2->list[VAR_5] = VAR_3;
 VAR_2->num++;
 return 0;
}
