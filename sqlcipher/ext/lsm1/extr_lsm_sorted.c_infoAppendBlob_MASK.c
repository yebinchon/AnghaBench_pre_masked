
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int LsmString ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *,char*,char) ;

__attribute__((used)) static int FUNC_2(LsmString *VAR_1, int VAR_2, u8 *VAR_3, int VAR_4){
  int VAR_5;
  for(VAR_5=0; VAR_5<VAR_4; VAR_5++){
    if( VAR_2 ){
      FUNC_1(VAR_1, "%02X", VAR_3[VAR_5]);
    }else{
      FUNC_1(VAR_1, "%c", FUNC_0(VAR_3[VAR_5]) ?VAR_3[VAR_5] : '.');
    }
  }
  return VAR_0;
}
