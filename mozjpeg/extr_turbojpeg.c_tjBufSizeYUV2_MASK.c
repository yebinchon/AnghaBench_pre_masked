
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;

unsigned long FUNC_4(int VAR_2, int VAR_3, int VAR_4,
 int VAR_5)
{
 int VAR_6=0, VAR_7, VAR_8;

 if(VAR_5<0 || VAR_5>=VAR_0)
    FUNC_1("tjBufSizeYUV2(): Invalid argument");

 VAR_7=(VAR_5==VAR_1? 1:3);
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  int VAR_9=FUNC_3(VAR_8, VAR_2, VAR_5);
  int VAR_10=FUNC_0(VAR_9, VAR_3);
  int VAR_11=FUNC_2(VAR_8, VAR_4, VAR_5);

  if(VAR_9<0 || VAR_11<0) return -1;
  else VAR_6+=VAR_10*VAR_11;
 }

 bailout:
 return VAR_6;
}
