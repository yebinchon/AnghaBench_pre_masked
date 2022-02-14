
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static void FUNC_0(unsigned char *VAR_4, int VAR_5, int VAR_6,
 unsigned char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 unsigned char *VAR_12=VAR_4, *VAR_13;
 int VAR_14=VAR_2[VAR_5];
 int VAR_15=VAR_6? -VAR_10*VAR_14:VAR_10*VAR_14;
 unsigned char *VAR_16=VAR_7, *VAR_17;
 int VAR_18=VAR_2[VAR_8];
 int VAR_19=VAR_9? -VAR_10*VAR_18:VAR_10*VAR_18;
 int VAR_20, VAR_21;

 if(VAR_6) VAR_12=&VAR_4[VAR_10*VAR_14*(VAR_11-1)];
 if(VAR_9) VAR_16=&VAR_7[VAR_10*VAR_18*(VAR_11-1)];
 for(VAR_20=0; VAR_20<VAR_11; VAR_20++, VAR_12+=VAR_15, VAR_16+=VAR_19)
 {
  for(VAR_21=0, VAR_13=VAR_12, VAR_17=VAR_16; VAR_21<VAR_10; VAR_21++, VAR_13+=VAR_14,
   VAR_17+=VAR_18)
  {
   VAR_17[VAR_3[VAR_8]]=VAR_13[VAR_3[VAR_5]];
   VAR_17[VAR_1[VAR_8]]=VAR_13[VAR_1[VAR_5]];
   VAR_17[VAR_0[VAR_8]]=VAR_13[VAR_0[VAR_5]];
  }
 }
}
