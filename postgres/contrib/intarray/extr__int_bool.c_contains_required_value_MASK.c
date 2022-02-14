
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ val; int left; } ;
typedef TYPE_1__ ITEM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static bool
FUNC_1(ITEM *VAR_1)
{

 FUNC_0();

 if (VAR_1->type == VAR_0)
  return 1;
 else if (VAR_1->val == (int32) '!')
 {





  return 0;
 }
 else if (VAR_1->val == (int32) '&')
 {

  if (FUNC_1(VAR_1 + VAR_1->left))
   return 1;
  else
   return FUNC_1(VAR_1 - 1);
 }
 else
 {

  if (FUNC_1(VAR_1 + VAR_1->left))
   return FUNC_1(VAR_1 - 1);
  else
   return 0;
 }
}
