
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

void FUNC_1(unsigned char *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11=VAR_5[VAR_9];
 int VAR_12=VAR_3[VAR_9];
 int VAR_13=VAR_2[VAR_9];
 int VAR_14=VAR_4[VAR_9];
 int VAR_15, VAR_16, VAR_17, VAR_18=16;

 FUNC_0(VAR_6, 0, VAR_7*VAR_8*VAR_14);
 if(VAR_9==VAR_1)
 {
  for(VAR_16=0; VAR_16<VAR_8; VAR_16++)
  {
   for(VAR_17=0; VAR_17<VAR_7; VAR_17++)
   {
    if(VAR_10&VAR_0) VAR_15=(VAR_8-VAR_16-1)*VAR_7+VAR_17;
    else VAR_15=VAR_16*VAR_7+VAR_17;
    if(((VAR_16/8)+(VAR_17/8))%2==0) VAR_6[VAR_15]=(VAR_16<VAR_18)? 255:0;
    else VAR_6[VAR_15]=(VAR_16<VAR_18)? 76:226;
   }
  }
 }
 else
 {
  for(VAR_16=0; VAR_16<VAR_8; VAR_16++)
  {
   for(VAR_17=0; VAR_17<VAR_7; VAR_17++)
   {
    if(VAR_10&VAR_0) VAR_15=(VAR_8-VAR_16-1)*VAR_7+VAR_17;
    else VAR_15=VAR_16*VAR_7+VAR_17;
    if(((VAR_16/8)+(VAR_17/8))%2==0)
    {
     if(VAR_16<VAR_18)
     {
      VAR_6[VAR_15*VAR_14+VAR_11]=255;
      VAR_6[VAR_15*VAR_14+VAR_12]=255;
      VAR_6[VAR_15*VAR_14+VAR_13]=255;
     }
    }
    else
    {
     VAR_6[VAR_15*VAR_14+VAR_11]=255;
     if(VAR_16>=VAR_18) VAR_6[VAR_15*VAR_14+VAR_12]=255;
    }
   }
  }
 }
}
