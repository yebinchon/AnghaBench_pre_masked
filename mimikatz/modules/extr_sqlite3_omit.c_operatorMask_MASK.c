
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(int VAR_16){
  u16 VAR_17;
  FUNC_1( FUNC_0(VAR_16) );
  if( VAR_16==VAR_3 ){
    VAR_17 = VAR_11;
  }else if( VAR_16==VAR_5 ){
    VAR_17 = VAR_13;
  }else if( VAR_16==VAR_4 ){
    VAR_17 = VAR_12;
  }else{
    FUNC_1( (VAR_8<<(VAR_16-VAR_0)) < 0x7fff );
    VAR_17 = (u16)(VAR_8<<(VAR_16-VAR_0));
  }
  FUNC_1( VAR_16!=VAR_5 || VAR_17==VAR_13 );
  FUNC_1( VAR_16!=VAR_3 || VAR_17==VAR_11 );
  FUNC_1( VAR_16!=VAR_0 || VAR_17==VAR_8 );
  FUNC_1( VAR_16!=VAR_7 || VAR_17==VAR_15 );
  FUNC_1( VAR_16!=VAR_6 || VAR_17==VAR_14 );
  FUNC_1( VAR_16!=VAR_2 || VAR_17==VAR_10 );
  FUNC_1( VAR_16!=VAR_1 || VAR_17==VAR_9 );
  FUNC_1( VAR_16!=VAR_4 || VAR_17==VAR_12 );
  return VAR_17;
}
