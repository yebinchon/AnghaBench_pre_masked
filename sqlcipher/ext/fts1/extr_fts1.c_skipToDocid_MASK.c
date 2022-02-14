
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef int DocListReader ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(DocListReader *VAR_0, sqlite_int64 VAR_1){
  sqlite_int64 VAR_2 = 0;
  while( !FUNC_0(VAR_0) && (VAR_2=FUNC_1(VAR_0))<VAR_1 ){
    FUNC_2(VAR_0);
  }
  return !FUNC_0(VAR_0) && VAR_2==VAR_1;
}
