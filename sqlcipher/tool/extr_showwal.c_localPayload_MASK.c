
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 int VAR_0 ;

__attribute__((used)) static i64 FUNC_0(i64 VAR_1, char VAR_2){
  i64 VAR_3;
  i64 VAR_4;
  i64 VAR_5;
  i64 VAR_6;
  if( VAR_2==13 ){

    VAR_3 = VAR_0-35;
    VAR_4 = (VAR_0-12)*32/255-23;
  }else{
    VAR_3 = (VAR_0-12)*64/255-23;
    VAR_4 = (VAR_0-12)*32/255-23;
  }
  if( VAR_1>VAR_3 ){
    VAR_5 = VAR_4 + (VAR_1-VAR_4)%(VAR_0-4);
    if( VAR_5<=VAR_3 ){
      VAR_6 = VAR_5;
    }else{
      VAR_6 = VAR_4;
    }
  }else{
    VAR_6 = VAR_1;
  }
  return VAR_6;
}
