
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;
typedef int RBuffer ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,int ) ;

int FUNC_1(RBuffer *VAR_5, int *VAR_6, int *VAR_7) {
 st32 VAR_8 = (st32) FUNC_0 (VAR_5, 0);
 if (VAR_6) {
  *VAR_6 = 32;
 }
 if (VAR_7) {
  *VAR_7 = 0;
 }
 switch (VAR_8) {
 case 137:
  return VAR_4;
 case 130:
  if (VAR_6) {
   *VAR_6 = 64;
  }
  return VAR_2;
 case 131:
  if (VAR_6) {
   *VAR_6 = 64;
  }
  return VAR_4;
 case 136:
  return VAR_3;
 case 129:
  if (VAR_6) {
   *VAR_6 = 64;
  }
  return VAR_3;
 case 128:
 case 135:
 case 134:
 case 133:
  return VAR_1;
 case 138:
  return VAR_0;
 case 132:
  return VAR_2;

 }
 return 0;
}
