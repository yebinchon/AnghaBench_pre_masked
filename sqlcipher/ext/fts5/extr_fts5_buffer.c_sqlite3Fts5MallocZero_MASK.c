
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;
 void* FUNC_1 (scalar_t__) ;

void *FUNC_2(int *VAR_2, sqlite3_int64 VAR_3){
  void *VAR_4 = 0;
  if( *VAR_2==VAR_1 ){
    VAR_4 = FUNC_1(VAR_3);
    if( VAR_4==0 ){
      if( VAR_3>0 ) *VAR_2 = VAR_0;
    }else{
      FUNC_0(VAR_4, 0, (size_t)VAR_3);
    }
  }
  return VAR_4;
}
