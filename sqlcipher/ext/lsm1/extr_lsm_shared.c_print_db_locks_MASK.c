
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(lsm_db *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<16; VAR_1++){
    int VAR_2 = 0;
    const char *VAR_3[] = {0, "shared", "exclusive"};
    const char *VAR_4[] = {
      0, "dms1", "dms2", "writer", "worker", "checkpointer",
      "reader0", "reader1", "reader2", "reader3", "reader4", "reader5"
    };
    int VAR_5 = FUNC_1(VAR_0, VAR_1);
    if( VAR_3[VAR_5] ){
      FUNC_0("%s(%s on %s)", (VAR_2?" ":""), VAR_3[VAR_5], VAR_4[VAR_1]);
      VAR_2 = 1;
    }
  }
  FUNC_0("\n");
}
