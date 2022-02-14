
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,size_t) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void *FUNC_3(int *VAR_2, sqlite3_int64 VAR_3){
  void *VAR_4;
  FUNC_0( VAR_3>0 );
  if( *VAR_2==VAR_1 ){
    VAR_4 = FUNC_2(VAR_3);
    if( VAR_4 ){
      FUNC_1(VAR_4, 0, (size_t)VAR_3);
    }else{
      *VAR_2 = VAR_0;
    }
  }else{
    VAR_4 = 0;
  }
  return VAR_4;
}
