
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int sqlite3 ;


 int FUNC_0 (void*,int ,size_t) ;
 void* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int) ;

void *FUNC_3(sqlite3 *VAR_0, u64 VAR_1){
  void *VAR_2;
  FUNC_2( VAR_0==0 );
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if( VAR_2 ) FUNC_0(VAR_2, 0, (size_t)VAR_1);
  return VAR_2;
}
