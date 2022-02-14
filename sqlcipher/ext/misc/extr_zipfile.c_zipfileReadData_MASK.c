
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ i64 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,long,int ) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(
  FILE *VAR_3,
  u8 *VAR_4,
  int VAR_5,
  i64 VAR_6,
  char **VAR_7
){
  size_t VAR_8;
  FUNC_1(VAR_3, (long)VAR_6, VAR_0);
  VAR_8 = FUNC_0(VAR_4, 1, VAR_5, VAR_3);
  if( (int)VAR_8!=VAR_5 ){
    *VAR_7 = FUNC_2("error in fread()");
    return VAR_1;
  }
  return VAR_2;
}
