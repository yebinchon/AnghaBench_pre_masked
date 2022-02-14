
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ val; int left; } ;
typedef TYPE_1__ ITEM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,TYPE_1__*) ;

bool
FUNC_2(ITEM *VAR_1, void *VAR_2, bool VAR_3, bool (*VAR_4) (void *VAR_5, ITEM *VAR_6))
{

 FUNC_0();

 if (VAR_1->type == VAR_0)
  return (*VAR_4) (VAR_2, VAR_1);
 else if (VAR_1->val == (int32) '!')
 {
  return VAR_3 ?
   ((FUNC_2(VAR_1 + 1, VAR_2, VAR_3, VAR_4)) ? 0 : 1)
   : 1;
 }
 else if (VAR_1->val == (int32) '&')
 {
  if (FUNC_2(VAR_1 + VAR_1->left, VAR_2, VAR_3, VAR_4))
   return FUNC_2(VAR_1 + 1, VAR_2, VAR_3, VAR_4);
  else
   return 0;
 }
 else
 {
  if (FUNC_2(VAR_1 + VAR_1->left, VAR_2, VAR_3, VAR_4))
   return 1;
  else
   return FUNC_2(VAR_1 + 1, VAR_2, VAR_3, VAR_4);
 }
}
