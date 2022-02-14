
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(void *VAR_1, int VAR_2, char **VAR_3, char **VAR_4){
  int VAR_5;
  static unsigned VAR_6 = 0;
  FUNC_1("ROW #%u:\n", ++VAR_6);
  if( VAR_3 ){
    for(VAR_5=0; VAR_5<VAR_2; VAR_5++){
      FUNC_1(" %s=", VAR_4[VAR_5]);
      if( VAR_3[VAR_5] ){
        FUNC_1("[%s]\n", VAR_3[VAR_5]);
      }else{
        FUNC_1("NULL\n");
      }
    }
  }
  FUNC_0(VAR_0);
  return 0;
}
