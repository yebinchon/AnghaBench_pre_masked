
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ sign; void* dscale; } ;
typedef TYPE_1__ NumericVar ;


 void* FUNC_0 (void*,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(const NumericVar *VAR_2, const NumericVar *VAR_3, NumericVar *VAR_4)
{



 if (VAR_2->sign == VAR_1)
 {
  if (VAR_3->sign == VAR_0)
  {





   FUNC_1(VAR_2, VAR_3, VAR_4);
   VAR_4->sign = VAR_1;
  }
  else
  {





   switch (FUNC_2(VAR_2, VAR_3))
   {
    case 0:





     FUNC_4(VAR_4);
     VAR_4->dscale = FUNC_0(VAR_2->dscale, VAR_3->dscale);
     break;

    case 1:





     FUNC_3(VAR_2, VAR_3, VAR_4);
     VAR_4->sign = VAR_1;
     break;

    case -1:





     FUNC_3(VAR_3, VAR_2, VAR_4);
     VAR_4->sign = VAR_0;
     break;
   }
  }
 }
 else
 {
  if (VAR_3->sign == VAR_0)
  {





   switch (FUNC_2(VAR_2, VAR_3))
   {
    case 0:





     FUNC_4(VAR_4);
     VAR_4->dscale = FUNC_0(VAR_2->dscale, VAR_3->dscale);
     break;

    case 1:





     FUNC_3(VAR_2, VAR_3, VAR_4);
     VAR_4->sign = VAR_0;
     break;

    case -1:





     FUNC_3(VAR_3, VAR_2, VAR_4);
     VAR_4->sign = VAR_1;
     break;
   }
  }
  else
  {





   FUNC_1(VAR_2, VAR_3, VAR_4);
   VAR_4->sign = VAR_0;
  }
 }
}
