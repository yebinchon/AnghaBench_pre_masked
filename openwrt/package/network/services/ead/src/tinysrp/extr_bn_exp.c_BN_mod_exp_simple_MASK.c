
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*,int) ;
 int FUNC_6 (int *,int const*,int const*,int *) ;
 int FUNC_7 (int *,int *,int *,int const*,int *) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_0 ;

int FUNC_11(BIGNUM *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3,
      const BIGNUM *VAR_4, BN_CTX *VAR_5)
 {
 int VAR_6,VAR_7,VAR_8,VAR_9=0,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14=0;
 int VAR_15=1;
 BIGNUM *VAR_16;
 BIGNUM VAR_17[VAR_0];

 VAR_8=FUNC_8(VAR_3);

 if (VAR_8 == 0)
  {
  FUNC_9(VAR_1);
  return(1);
  }

 FUNC_2(VAR_5);
 if ((VAR_16 = FUNC_1(VAR_5)) == ((void*)0)) goto err;

 FUNC_4(&(VAR_17[0]));
 VAR_14=1;
 if (!FUNC_6(&(VAR_17[0]),VAR_2,VAR_4,VAR_5)) goto err;

 VAR_12 = FUNC_10(VAR_8);
 if (VAR_12 > 1)
  {
  if (!FUNC_7(VAR_16,&(VAR_17[0]),&(VAR_17[0]),VAR_4,VAR_5))
   goto err;
  VAR_7=1<<(VAR_12-1);
  for (VAR_6=1; VAR_6<VAR_7; VAR_6++)
   {
   FUNC_4(&(VAR_17[VAR_6]));
   if (!FUNC_7(&(VAR_17[VAR_6]),&(VAR_17[VAR_6-1]),VAR_16,VAR_4,VAR_5))
    goto err;
   }
  VAR_14=VAR_6;
  }

 VAR_15=1;


 VAR_13=0;
 VAR_10=VAR_8-1;
 VAR_11=0;

 if (!FUNC_9(VAR_1)) goto err;

 for (;;)
  {
  if (FUNC_5(VAR_3,VAR_10) == 0)
   {
   if (!VAR_15)
    if (!FUNC_7(VAR_1,VAR_1,VAR_1,VAR_4,VAR_5))
    goto err;
   if (VAR_10 == 0) break;
   VAR_10--;
   continue;
   }




  VAR_7=VAR_10;
  VAR_13=1;
  VAR_11=0;
  for (VAR_6=1; VAR_6<VAR_12; VAR_6++)
   {
   if (VAR_10-VAR_6 < 0) break;
   if (FUNC_5(VAR_3,VAR_10-VAR_6))
    {
    VAR_13<<=(VAR_6-VAR_11);
    VAR_13|=1;
    VAR_11=VAR_6;
    }
   }


  VAR_7=VAR_11+1;

  if (!VAR_15)
   for (VAR_6=0; VAR_6<VAR_7; VAR_6++)
    {
    if (!FUNC_7(VAR_1,VAR_1,VAR_1,VAR_4,VAR_5))
     goto err;
    }


  if (!FUNC_7(VAR_1,VAR_1,&(VAR_17[VAR_13>>1]),VAR_4,VAR_5))
   goto err;


  VAR_10-=VAR_11+1;
  VAR_13=0;
  VAR_15=0;
  if (VAR_10 < 0) break;
  }
 VAR_9=1;
err:
 FUNC_0(VAR_5);
 for (VAR_6=0; VAR_6<VAR_14; VAR_6++)
  FUNC_3(&(VAR_17[VAR_6]));
 return(VAR_9);
 }
