
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int FUNC_0(const char *VAR_1, const char *VAR_2){
  unsigned char *VAR_3, *VAR_4;
  int VAR_5;
  VAR_3 = (unsigned char *)VAR_1;
  VAR_4 = (unsigned char *)VAR_2;
  for(;;){
    VAR_5 = (int)VAR_0[*VAR_3] - (int)VAR_0[*VAR_4];
    if( VAR_5 || *VAR_3==0 ) break;
    VAR_3++;
    VAR_4++;
  }
  return VAR_5;
}
