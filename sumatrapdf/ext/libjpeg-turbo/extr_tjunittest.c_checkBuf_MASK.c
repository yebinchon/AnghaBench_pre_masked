
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int denom; } ;
typedef TYPE_1__ tjscalingfactor ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (unsigned char,int) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,...) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

int FUNC_4(unsigned char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11,
 tjscalingfactor VAR_12, int VAR_13)
{
 int VAR_14=VAR_6[VAR_10];
 int VAR_15=VAR_4[VAR_10];
 int VAR_16=VAR_3[VAR_10];
 int VAR_17=VAR_2[VAR_10];
 int VAR_18=VAR_5[VAR_10];
 int VAR_19, VAR_20, VAR_21, VAR_22=1;
 int VAR_23=16*VAR_12.num/VAR_12.denom;
 int VAR_24=8*VAR_12.num/VAR_12.denom;

 for(VAR_20=0; VAR_20<VAR_9; VAR_20++)
 {
  for(VAR_21=0; VAR_21<VAR_8; VAR_21++)
  {
   unsigned char VAR_25, VAR_26, VAR_27, VAR_28;
   if(VAR_13&VAR_0) VAR_19=(VAR_9-VAR_20-1)*VAR_8+VAR_21;
   else VAR_19=VAR_20*VAR_8+VAR_21;
   VAR_25=VAR_7[VAR_19*VAR_18+VAR_14];
   VAR_26=VAR_7[VAR_19*VAR_18+VAR_15];
   VAR_27=VAR_7[VAR_19*VAR_18+VAR_16];
   VAR_28=VAR_17>=0? VAR_7[VAR_19*VAR_18+VAR_17]:0xFF;
   if(((VAR_20/VAR_24)+(VAR_21/VAR_24))%2==0)
   {
    if(VAR_20<VAR_23)
    {
     FUNC_2(VAR_25); FUNC_2(VAR_26); FUNC_2(VAR_27);
    }
    else
    {
     FUNC_1(VAR_25); FUNC_1(VAR_26); FUNC_1(VAR_27);
    }
   }
   else
   {
    if(VAR_11==VAR_1)
    {
     if(VAR_20<VAR_23)
     {
      FUNC_0(VAR_25, 76); FUNC_0(VAR_26, 76); FUNC_0(VAR_27, 76);
     }
     else
     {
      FUNC_0(VAR_25, 226); FUNC_0(VAR_26, 226); FUNC_0(VAR_27, 226);
     }
    }
    else
    {
     if(VAR_20<VAR_23)
     {
      FUNC_2(VAR_25); FUNC_1(VAR_26); FUNC_1(VAR_27);
     }
     else
     {
      FUNC_2(VAR_25); FUNC_2(VAR_26); FUNC_1(VAR_27);
     }
    }
   }
   FUNC_2(VAR_28);
  }
 }

 bailout:
 if(VAR_22==0)
 {
  for(VAR_20=0; VAR_20<VAR_9; VAR_20++)
  {
   for(VAR_21=0; VAR_21<VAR_8; VAR_21++)
   {
    FUNC_3("%.3d/%.3d/%.3d ", VAR_7[(VAR_20*VAR_8+VAR_21)*VAR_18+VAR_14],
     VAR_7[(VAR_20*VAR_8+VAR_21)*VAR_18+VAR_15], VAR_7[(VAR_20*VAR_8+VAR_21)*VAR_18+VAR_16]);
   }
   FUNC_3("\n");
  }
 }
 return VAR_22;
}
