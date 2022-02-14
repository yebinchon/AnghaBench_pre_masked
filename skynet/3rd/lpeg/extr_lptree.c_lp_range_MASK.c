
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int byte ;
typedef int TTree ;


 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  int VAR_1;
  int VAR_2 = FUNC_2(VAR_0);
  TTree *VAR_3 = FUNC_3(VAR_0);
  for (VAR_1 = 1; VAR_1 <= VAR_2; VAR_1++) {
    int VAR_4;
    size_t VAR_5;
    const char *VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_5);
    FUNC_0(VAR_0, VAR_5 == 2, VAR_1, "range must have two characters");
    for (VAR_4 = (byte)VAR_6[0]; VAR_4 <= (byte)VAR_6[1]; VAR_4++)
      FUNC_4(FUNC_5(VAR_3), VAR_4);
  }
  return 1;
}
