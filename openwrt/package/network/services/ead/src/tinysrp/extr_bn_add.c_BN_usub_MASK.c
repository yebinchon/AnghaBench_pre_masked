
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int*,int*,int) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int*,int*,int) ;

int FUNC_5(BIGNUM *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3)
 {
 int VAR_4,VAR_5;
 register BN_ULONG VAR_6,VAR_7,*VAR_8,*VAR_9,*VAR_10;
 int VAR_11,VAR_12;




 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 if (VAR_2->top < VAR_3->top)
  {
  return(0);
  }

 VAR_4=VAR_2->top;
 VAR_5=VAR_3->top;
 if (FUNC_3(VAR_1,VAR_4) == ((void*)0)) return(0);

 VAR_8=VAR_2->d;
 VAR_9=VAR_3->d;
 VAR_10=VAR_1->d;


 VAR_12=0;
 for (VAR_11=0; VAR_11<VAR_5; VAR_11++)
  {
  VAR_6= *(VAR_8++);
  VAR_7= *(VAR_9++);
  if (VAR_12)
   {
   VAR_12=(VAR_6 <= VAR_7);
   VAR_6=(VAR_6-VAR_7-1)&VAR_0;
   }
  else
   {
   VAR_12=(VAR_6 < VAR_7);
   VAR_6=(VAR_6-VAR_7)&VAR_0;
   }



  *(VAR_10++)=VAR_6&VAR_0;
  }







 if (VAR_12)
  {
  while (VAR_11 < VAR_4)
   {
   VAR_11++;
   VAR_6= *(VAR_8++);
   VAR_7=(VAR_6-1)&VAR_0;
   *(VAR_10++)=VAR_7;
   if (VAR_6 > VAR_7) break;
   }
  }



 if (VAR_10 != VAR_8)
  {
  for (;;)
   {
   if (VAR_11++ >= VAR_4) break;
   VAR_10[0]=VAR_8[0];
   if (VAR_11++ >= VAR_4) break;
   VAR_10[1]=VAR_8[1];
   if (VAR_11++ >= VAR_4) break;
   VAR_10[2]=VAR_8[2];
   if (VAR_11++ >= VAR_4) break;
   VAR_10[3]=VAR_8[3];
   VAR_10+=4;
   VAR_8+=4;
   }
  }


 VAR_1->top=VAR_4;
 FUNC_1(VAR_1);
 return(1);
 }
