
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mp_int ;
struct TYPE_5__ {scalar_t__* digits; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

int
FUNC_3(mp_int VAR_1)
{
 FUNC_2(VAR_1 != ((void*)0));

 if (FUNC_1(VAR_1) == 1 && VAR_1->digits[0] == 0)
 {
  return 0;
 }
 else if (FUNC_0(VAR_1) == VAR_0)
 {
  return 1;
 }
 else
 {
  return -1;
 }
}
