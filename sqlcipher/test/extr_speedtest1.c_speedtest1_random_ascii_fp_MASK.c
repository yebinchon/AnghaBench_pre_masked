
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,char*,int,int,int) ;

void FUNC_2(char *VAR_0){
  int VAR_1 = FUNC_0();
  int VAR_2 = FUNC_0();
  int VAR_3;
  VAR_3 = VAR_2%10;
  if( VAR_3<0 ) VAR_3 = -VAR_3;
  VAR_2 /= 10;
  FUNC_1(100,VAR_0,"%d.%de%d",VAR_2,VAR_3,VAR_1%200);
}
