
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int top; int neg; int d; } ;
typedef int BN_CTX ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int,int ,int) ;
 int * FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*,int,int) ;

int FUNC_12(BIGNUM *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2, BN_CTX *VAR_3)
 {
 int VAR_4,VAR_5,VAR_6;
 BIGNUM *VAR_7;
 int VAR_8 = 0;
 FUNC_5(VAR_1);
 FUNC_5(VAR_2);
 FUNC_5(VAR_0);

 VAR_5=VAR_1->top;
 VAR_6=VAR_2->top;

 if ((VAR_5 == 0) || (VAR_6 == 0))
  {
  FUNC_4(VAR_0);
  return(1);
  }
 VAR_4=VAR_5+VAR_6;

 FUNC_2(VAR_3);
 if ((VAR_0 == VAR_1) || (VAR_0 == VAR_2))
  {
  if ((VAR_7 = FUNC_1(VAR_3)) == ((void*)0)) goto err;
  }
 else
  VAR_7 = VAR_0;
 VAR_7->neg=VAR_1->neg^VAR_2->neg;
 if (FUNC_10(VAR_7,VAR_4) == ((void*)0)) goto err;
 VAR_7->top=VAR_4;
 FUNC_9(VAR_7->d,VAR_1->d,VAR_5,VAR_2->d,VAR_6);




 FUNC_6(VAR_7);
 if (VAR_0 != VAR_7) FUNC_3(VAR_0,VAR_7);
 VAR_8=1;
err:
 FUNC_0(VAR_3);
 return(VAR_8);
 }
