
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_0(void)
{
 const int VAR_3[3][9] =
 {
  { 1 , 0, 2 , } ,
  { 17, 18, 0 , 19, 20 , } ,
  { 21, 1, 22, 23, 0, 24, 25, 2, 26 }
 };
 int VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
 const int VAR_9[3] = { 3 , 5 , 9 };
 int *VAR_10;
 int *VAR_11[3] = { VAR_0 , VAR_1 , VAR_2 };

 for(VAR_4=0;VAR_4<3;VAR_4++)
 {
  VAR_10 = VAR_11[VAR_4];
  VAR_8 = VAR_9[VAR_4];
  for(VAR_5=0;VAR_5<VAR_8;VAR_5++)
  for(VAR_6=0;VAR_6<VAR_8;VAR_6++)
  for(VAR_7=0;VAR_7<VAR_8;VAR_7++)
  {
   *VAR_10++ = VAR_3[VAR_4][VAR_7];
   *VAR_10++ = VAR_3[VAR_4][VAR_6];
   *VAR_10++ = VAR_3[VAR_4][VAR_5];
  }
 }
}
