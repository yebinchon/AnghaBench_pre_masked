
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rtfClass; scalar_t__ rtfMajor; } ;
typedef TYPE_1__ RTF_Info ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(RTF_Info *VAR_4)
{
 int VAR_5 = 1;

 while (FUNC_0 (VAR_4) != VAR_1)
 {
  if (VAR_4->rtfClass == VAR_3)
  {
   if (VAR_4->rtfMajor == VAR_0)
    ++VAR_5;
   else if (VAR_4->rtfMajor == VAR_2)
   {
    if (--VAR_5 < 1)
     break;
   }
  }
 }
}
