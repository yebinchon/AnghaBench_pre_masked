
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int* VAR_2 ;
 int* VAR_3 ;

unsigned long FUNC_2(int VAR_4, int VAR_5, int VAR_6)
{
  unsigned long VAR_7 = 0;
  int VAR_8, VAR_9, VAR_10;

 if(VAR_4<1 || VAR_5<1 || VAR_6<0 || VAR_6>=VAR_0)
    FUNC_1("tjBufSize(): Invalid argument");




 VAR_8=VAR_3[VAR_6];
 VAR_9=VAR_2[VAR_6];
 VAR_10=VAR_6==VAR_1? 0: 4*64/(VAR_8*VAR_9);
 VAR_7=FUNC_0(VAR_4, VAR_8) * FUNC_0(VAR_5, VAR_9) * (2 + VAR_10) + 2048;

 bailout:
 return VAR_7;
}
