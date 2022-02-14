
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int neg; } ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;

int FUNC_4(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2)
 {
 const BIGNUM *VAR_3;

 FUNC_3(VAR_1);
 FUNC_3(VAR_2);






 if (VAR_1->neg ^ VAR_2->neg)
  {

  if (VAR_1->neg)
   { VAR_3=VAR_1; VAR_1=VAR_2; VAR_2=VAR_3; }



  if (FUNC_1(VAR_1,VAR_2) < 0)
   {
   if (!FUNC_2(VAR_0,VAR_2,VAR_1)) return(0);
   VAR_0->neg=1;
   }
  else
   {
   if (!FUNC_2(VAR_0,VAR_1,VAR_2)) return(0);
   VAR_0->neg=0;
   }
  return(1);
  }

 if (VAR_1->neg)
  VAR_0->neg=1;
 else
  VAR_0->neg=0;

 if (!FUNC_0(VAR_0,VAR_1,VAR_2)) return(0);
 return(1);
 }
