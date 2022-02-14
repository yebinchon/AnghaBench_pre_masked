
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*,scalar_t__*,int) ;

int FUNC_1(int VAR_1, int *VAR_2, int *VAR_3, int VAR_4){
  sqlite3_int64 VAR_5 = 0, VAR_6 = 0;
  int VAR_7;



  VAR_7 = FUNC_0(VAR_1, &VAR_5, &VAR_6, VAR_4);
  if( VAR_7==0 ){
    *VAR_2 = (int)VAR_5;
    *VAR_3 = (int)VAR_6;
  }
  return VAR_7;
}
