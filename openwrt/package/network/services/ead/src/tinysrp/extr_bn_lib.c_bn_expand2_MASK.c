
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dmax; int top; int max; scalar_t__* d; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;

BIGNUM *FUNC_6(BIGNUM *VAR_1, int VAR_2)
 {
 BN_ULONG *VAR_3,*VAR_4;
 const BN_ULONG *VAR_5;
 int VAR_6;

 FUNC_1(VAR_1);

 if (VAR_2 > VAR_1->dmax)
  {
  FUNC_1(VAR_1);
  if (FUNC_0(VAR_1,VAR_0))
   {
   return(((void*)0));
   }
  VAR_4=VAR_3=(BN_ULONG *)FUNC_3(sizeof(BN_ULONG)*(VAR_2+1));
  if (VAR_3 == ((void*)0))
   {
   return(((void*)0));
   }

  VAR_5=VAR_1->d;

  if (VAR_5 != ((void*)0))
   {
   for (VAR_6=VAR_1->top>>2; VAR_6>0; VAR_6--,VAR_3+=4,VAR_5+=4)
    {
    BN_ULONG VAR_7,VAR_8,VAR_9,VAR_10;
    VAR_7=VAR_5[0]; VAR_8=VAR_5[1]; VAR_9=VAR_5[2]; VAR_10=VAR_5[3];
    VAR_3[0]=VAR_7; VAR_3[1]=VAR_8; VAR_3[2]=VAR_9; VAR_3[3]=VAR_10;
    }
   switch (VAR_1->top&3)
    {
    case 3: VAR_3[2]=VAR_5[2];
    case 2: VAR_3[1]=VAR_5[1];
    case 1: VAR_3[0]=VAR_5[0];
    case 0: ;
    }

   FUNC_2(VAR_1->d);
   }

  VAR_1->d=VAR_4;
  VAR_1->dmax=VAR_2;



  VAR_3= &(VAR_1->d[VAR_1->top]);
  for (VAR_6=(VAR_1->dmax - VAR_1->top)>>3; VAR_6>0; VAR_6--,VAR_3+=8)
   {
   VAR_3[0]=0; VAR_3[1]=0; VAR_3[2]=0; VAR_3[3]=0;
   VAR_3[4]=0; VAR_3[5]=0; VAR_3[6]=0; VAR_3[7]=0;
   }
  for (VAR_6=(VAR_1->dmax - VAR_1->top)&7; VAR_6>0; VAR_6--,VAR_3++)
   VAR_3[0]=0;
  }
 return(VAR_1);
 }
