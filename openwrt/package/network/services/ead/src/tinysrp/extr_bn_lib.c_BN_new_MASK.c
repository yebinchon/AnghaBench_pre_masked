
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * d; scalar_t__ dmax; scalar_t__ neg; scalar_t__ top; int flags; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

BIGNUM *FUNC_1(void)
 {
 BIGNUM *VAR_1;

 if ((VAR_1=(BIGNUM *)FUNC_0(sizeof(BIGNUM))) == ((void*)0))
  {
  return(((void*)0));
  }
 VAR_1->flags=VAR_0;
 VAR_1->top=0;
 VAR_1->neg=0;
 VAR_1->dmax=0;
 VAR_1->d=((void*)0);
 return(VAR_1);
 }
