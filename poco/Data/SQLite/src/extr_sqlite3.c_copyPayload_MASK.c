
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DbPage ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_1,
  void *VAR_2,
  int VAR_3,
  int VAR_4,
  DbPage *VAR_5
){
  if( VAR_4 ){

    int VAR_6 = FUNC_1(VAR_5);
    if( VAR_6!=VAR_0 ){
      return VAR_6;
    }
    FUNC_0(VAR_1, VAR_2, VAR_3);
  }else{

    FUNC_0(VAR_2, VAR_1, VAR_3);
  }
  return VAR_0;
}
