
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char FUNC_0 (char,char) ;

__attribute__((used)) static int FUNC_1(char VAR_2, char VAR_3, char VAR_4){
  char VAR_5, VAR_6;
  if( VAR_3==VAR_4 ){

    return 0;
  }
  if( VAR_3==(VAR_4^0x20) && ((VAR_4>='A' && VAR_4<='Z') || (VAR_4>='a' && VAR_4<='z')) ){

    return 0;
  }
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  VAR_6 = FUNC_0(VAR_2, VAR_4);
  if( VAR_5==VAR_6 ){

    return 40;
  }
  if( VAR_5>=VAR_0 && VAR_5<=VAR_1
      && VAR_6>=VAR_0 && VAR_6<=VAR_1 ){

    return 75;
  }

  return 100;
}
