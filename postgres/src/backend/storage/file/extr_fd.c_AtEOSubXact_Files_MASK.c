
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ create_subid; } ;
typedef scalar_t__ SubTransactionId ;
typedef size_t Index ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

void
FUNC_1(bool VAR_2, SubTransactionId VAR_3,
      SubTransactionId VAR_4)
{
 Index VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  if (VAR_0[VAR_5].create_subid == VAR_3)
  {
   if (VAR_2)
    VAR_0[VAR_5].create_subid = VAR_4;
   else
   {

    FUNC_0(&VAR_0[VAR_5--]);
   }
  }
 }
}
