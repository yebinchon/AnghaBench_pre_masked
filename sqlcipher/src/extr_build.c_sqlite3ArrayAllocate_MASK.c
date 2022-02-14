
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int sqlite3 ;


 int FUNC_0 (char*,int ,int) ;
 void* FUNC_1 (int *,void*,int) ;

void *FUNC_2(
  sqlite3 *VAR_0,
  void *VAR_1,
  int VAR_2,
  int *VAR_3,
  int *VAR_4
){
  char *VAR_5;
  sqlite3_int64 VAR_6 = *VAR_4 = *VAR_3;
  if( (VAR_6 & (VAR_6-1))==0 ){
    sqlite3_int64 VAR_7 = (VAR_6==0) ? 1 : 2*VAR_6;
    void *VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_7*VAR_2);
    if( VAR_8==0 ){
      *VAR_4 = -1;
      return VAR_1;
    }
    VAR_1 = VAR_8;
  }
  VAR_5 = (char*)VAR_1;
  FUNC_0(&VAR_5[VAR_6 * VAR_2], 0, VAR_2);
  ++*VAR_3;
  return VAR_1;
}
