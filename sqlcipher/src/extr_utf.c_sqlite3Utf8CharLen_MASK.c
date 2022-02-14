
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (int) ;

int FUNC_2(const char *VAR_0, int VAR_1){
  int VAR_2 = 0;
  const u8 *VAR_3 = (const u8*)VAR_0;
  const u8 *VAR_4;
  if( VAR_1>=0 ){
    VAR_4 = &VAR_3[VAR_1];
  }else{
    VAR_4 = (const u8*)(-1);
  }
  FUNC_1( VAR_3<=VAR_4 );
  while( *VAR_3!=0 && VAR_3<VAR_4 ){
    FUNC_0(VAR_3);
    VAR_2++;
  }
  return VAR_2;
}
