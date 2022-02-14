
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int t ;
struct TYPE_6__ {int top; int* d; int neg; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int*,int ,int) ;

int FUNC_3(BIGNUM *VAR_2, const BIGNUM *VAR_3, int VAR_4)
 {
 int VAR_5,VAR_6,VAR_7,VAR_8;
 BN_ULONG *VAR_9,*VAR_10;
 BN_ULONG VAR_11;

 VAR_2->neg=VAR_3->neg;
 if (FUNC_1(VAR_2,VAR_3->top+(VAR_4/VAR_0)+1) == ((void*)0)) return(0);
 VAR_6=VAR_4/VAR_0;
 VAR_7=VAR_4%VAR_0;
 VAR_8=VAR_0-VAR_7;
 VAR_10=VAR_3->d;
 VAR_9=VAR_2->d;
 VAR_9[VAR_3->top+VAR_6]=0;
 if (VAR_7 == 0)
  for (VAR_5=VAR_3->top-1; VAR_5>=0; VAR_5--)
   VAR_9[VAR_6+VAR_5]=VAR_10[VAR_5];
 else
  for (VAR_5=VAR_3->top-1; VAR_5>=0; VAR_5--)
   {
   VAR_11=VAR_10[VAR_5];
   VAR_9[VAR_6+VAR_5+1]|=(VAR_11>>VAR_8)&VAR_1;
   VAR_9[VAR_6+VAR_5]=(VAR_11<<VAR_7)&VAR_1;
   }
 FUNC_2(VAR_9,0,VAR_6*sizeof(VAR_9[0]));


 VAR_2->top=VAR_3->top+VAR_6+1;
 FUNC_0(VAR_2);
 return(1);
 }
