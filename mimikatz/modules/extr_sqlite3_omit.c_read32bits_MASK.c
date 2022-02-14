
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int sqlite3_file ;
typedef int i64 ;
typedef int ac ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1, i64 VAR_2, u32 *VAR_3){
  unsigned char VAR_4[4];
  int VAR_5 = FUNC_1(VAR_1, VAR_4, sizeof(VAR_4), VAR_2);
  if( VAR_5==VAR_0 ){
    *VAR_3 = FUNC_0(VAR_4);
  }
  return VAR_5;
}
