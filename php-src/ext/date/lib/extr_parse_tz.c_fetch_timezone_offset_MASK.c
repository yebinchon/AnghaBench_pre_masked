
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ttinfo ;
struct TYPE_4__ {size_t timecnt; int typecnt; } ;
struct TYPE_5__ {scalar_t__* trans; size_t* trans_idx; TYPE_1__ bit64; int * type; } ;
typedef TYPE_2__ timelib_tzinfo ;
typedef scalar_t__ timelib_sll ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ttinfo* FUNC_0(timelib_tzinfo *VAR_1, timelib_sll VAR_2, timelib_sll *VAR_3)
{
 uint32_t VAR_4;



 if (!VAR_1->bit64.timecnt || !VAR_1->trans) {
  if (VAR_1->bit64.typecnt == 1) {
   *VAR_3 = VAR_0;
   return &(VAR_1->type[0]);
  }
  return ((void*)0);
 }





 if (VAR_2 < VAR_1->trans[0]) {
  *VAR_3 = VAR_0;
  return &(VAR_1->type[0]);
 }



 for (VAR_4 = 0; VAR_4 < VAR_1->bit64.timecnt; VAR_4++) {
  if (VAR_2 < VAR_1->trans[VAR_4]) {
   *VAR_3 = VAR_1->trans[VAR_4 - 1];
   return &(VAR_1->type[VAR_1->trans_idx[VAR_4 - 1]]);
  }
 }
 *VAR_3 = VAR_1->trans[VAR_1->bit64.timecnt - 1];
 return &(VAR_1->type[VAR_1->trans_idx[VAR_1->bit64.timecnt - 1]]);
}
