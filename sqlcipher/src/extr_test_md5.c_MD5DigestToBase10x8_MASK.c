
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_0[16], char VAR_1[50]){
  int VAR_2, VAR_3;
  unsigned int VAR_4;
  for(VAR_2=VAR_3=0; VAR_2<16; VAR_2+=2){
    VAR_4 = VAR_0[VAR_2]*256 + VAR_0[VAR_2+1];
    if( VAR_2>0 ) VAR_1[VAR_3++] = '-';
    FUNC_0(50-VAR_3, &VAR_1[VAR_3], "%05u", VAR_4);
    VAR_3 += 5;
  }
  VAR_1[VAR_3] = 0;
}
