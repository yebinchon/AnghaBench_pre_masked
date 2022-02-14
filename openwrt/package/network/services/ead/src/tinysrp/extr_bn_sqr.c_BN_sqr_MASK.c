
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int top; scalar_t__* d; scalar_t__ neg; } ;
typedef scalar_t__ BN_ULONG ;
typedef int BN_CTX ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int,scalar_t__*) ;
 int * FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*,int,int) ;

int FUNC_10(BIGNUM *VAR_0, BIGNUM *VAR_1, BN_CTX *VAR_2)
 {
 int VAR_3,VAR_4;
 int VAR_5 = 0;
 BIGNUM *VAR_6,*VAR_7;




 FUNC_4(VAR_1);

 VAR_4=VAR_1->top;
 if (VAR_4 <= 0)
  {
  VAR_0->top=0;
  return(1);
  }

 FUNC_2(VAR_2);
 VAR_7=(VAR_1 != VAR_0) ? VAR_0 : FUNC_1(VAR_2);
 VAR_6=FUNC_1(VAR_2);
 if (VAR_6 == ((void*)0)) goto err;

 VAR_3=(VAR_4+VAR_4);
 if (FUNC_8(VAR_7,VAR_3+1) == ((void*)0)) goto err;

 VAR_0->neg=0;
 if (VAR_4 == 4)
  {

  BN_ULONG VAR_8[8];
  FUNC_7(VAR_7->d,VAR_1->d,4,VAR_8);



  }
 else if (VAR_4 == 8)
  {

  BN_ULONG VAR_9[16];
  FUNC_7(VAR_7->d,VAR_1->d,8,VAR_9);



  }
 else
  {
  if (FUNC_8(VAR_6,VAR_3) == ((void*)0)) goto err;
  FUNC_7(VAR_7->d,VAR_1->d,VAR_4,VAR_6->d);
  }

 VAR_7->top=VAR_3;
 if ((VAR_3 > 0) && (VAR_7->d[VAR_3-1] == 0)) VAR_7->top--;
 if (VAR_7 != VAR_0) FUNC_3(VAR_0,VAR_7);
 VAR_5 = 1;
 err:
 FUNC_0(VAR_2);
 return(VAR_5);
 }
