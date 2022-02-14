
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;


 int FUNC_0 (char const*,int ,int,int **) ;
 int FUNC_1 (int) ;

TestDb *FUNC_2(const char *VAR_0, int VAR_1, int *VAR_2){
  TestDb *VAR_3 = 0;
  if( *VAR_2==0 ){
    int VAR_4;
    VAR_4 = FUNC_0(VAR_0, 0, VAR_1, &VAR_3);
    if( VAR_4!=0 ){
      FUNC_1(VAR_4);
      *VAR_2 = VAR_4;
    }
  }
  return VAR_3;
}
