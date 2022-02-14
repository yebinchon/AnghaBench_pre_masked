
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ sign; void* dscale; void* rscale; } ;
typedef TYPE_1__ numeric ;


 void* FUNC_0 (void*,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(numeric *VAR_2, numeric *VAR_3, numeric *VAR_4)
{



 if (VAR_2->sign == VAR_1)
 {
  if (VAR_3->sign == VAR_0)
  {





   if (FUNC_1(VAR_2, VAR_3, VAR_4) != 0)
    return -1;
   VAR_4->sign = VAR_1;
  }
  else
  {





   switch (FUNC_2(VAR_2, VAR_3))
   {
    case 0:





     FUNC_4(VAR_4);
     VAR_4->rscale = FUNC_0(VAR_2->rscale, VAR_3->rscale);
     VAR_4->dscale = FUNC_0(VAR_2->dscale, VAR_3->dscale);
     break;

    case 1:





     if (FUNC_3(VAR_2, VAR_3, VAR_4) != 0)
      return -1;
     VAR_4->sign = VAR_1;
     break;

    case -1:





     if (FUNC_3(VAR_3, VAR_2, VAR_4) != 0)
      return -1;
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
     VAR_4->rscale = FUNC_0(VAR_2->rscale, VAR_3->rscale);
     VAR_4->dscale = FUNC_0(VAR_2->dscale, VAR_3->dscale);
     break;

    case 1:





     if (FUNC_3(VAR_2, VAR_3, VAR_4) != 0)
      return -1;
     VAR_4->sign = VAR_0;
     break;

    case -1:





     if (FUNC_3(VAR_3, VAR_2, VAR_4) != 0)
      return -1;
     VAR_4->sign = VAR_1;
     break;
   }
  }
  else
  {





   if (FUNC_1(VAR_2, VAR_3, VAR_4) != 0)
    return -1;
   VAR_4->sign = VAR_0;
  }
 }

 return 0;
}
