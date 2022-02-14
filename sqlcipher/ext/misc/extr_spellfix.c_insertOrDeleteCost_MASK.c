
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char FUNC_0 (char,char) ;

__attribute__((used)) static int FUNC_1(char VAR_2, char VAR_3, char VAR_4){
  char VAR_5 = FUNC_0(VAR_2, VAR_3);
  char VAR_6;

  if( VAR_5==VAR_0 ){

    return 1;
  }
  if( VAR_2==VAR_3 ){

    return 10;
  }
  if( VAR_5==VAR_1 && (VAR_2=='r' || VAR_4=='r') ){
    return 20;
  }
  VAR_6 = FUNC_0(VAR_2, VAR_2);
  if( VAR_5==VAR_6 ){
    if( VAR_5==VAR_1 ){

      return 15;
    }else{

      return 50;
    }
  }


  return 100;
}
