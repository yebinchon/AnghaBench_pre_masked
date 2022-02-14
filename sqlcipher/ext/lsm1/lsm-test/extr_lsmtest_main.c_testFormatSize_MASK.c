
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1, i64 VAR_2){
  int VAR_3;
  if( VAR_2<(1<<10) ){
    VAR_3 = FUNC_0(VAR_0, VAR_1, "%d byte", (int)VAR_2);
  }else if( VAR_2<(1<<20) ){
    VAR_3 = FUNC_0(VAR_0, VAR_1, "%dK", (int)(VAR_2/(1<<10)));
  }else{
    VAR_3 = FUNC_0(VAR_0, VAR_1, "%dM", (int)(VAR_2/(1<<20)));
  }
  return VAR_3;
}
