
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; int* d; int neg; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(BIGNUM *VAR_2, BIGNUM *VAR_3, int VAR_4)
 {
 int VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;
 BN_ULONG *VAR_10,*VAR_11;
 BN_ULONG VAR_12,VAR_13;

 VAR_7=VAR_4/VAR_0;
 VAR_9=VAR_4%VAR_0;
 VAR_8=VAR_0-VAR_9;
 if (VAR_7 > VAR_3->top || VAR_3->top == 0)
  {
  FUNC_0(VAR_2);
  return(1);
  }
 if (VAR_2 != VAR_3)
  {
  VAR_2->neg=VAR_3->neg;
  if (FUNC_2(VAR_2,VAR_3->top-VAR_7+1) == ((void*)0)) return(0);
  }

 VAR_11= &(VAR_3->d[VAR_7]);
 VAR_10=VAR_2->d;
 VAR_6=VAR_3->top-VAR_7;
 VAR_2->top=VAR_6;

 if (VAR_9 == 0)
  {
  for (VAR_5=VAR_6+1; VAR_5 > 0; VAR_5--)
   *(VAR_10++)= *(VAR_11++);
  }
 else
  {
  VAR_12= *(VAR_11++);
  for (VAR_5=1; VAR_5<VAR_6; VAR_5++)
   {
   VAR_13 =(VAR_12>>VAR_9)&VAR_1;
   VAR_12= *(VAR_11++);
   *(VAR_10++) =(VAR_13|(VAR_12<<VAR_8))&VAR_1;
   }
  *(VAR_10++) =(VAR_12>>VAR_9)&VAR_1;
  }
 *VAR_10=0;
 FUNC_1(VAR_2);
 return(1);
 }
