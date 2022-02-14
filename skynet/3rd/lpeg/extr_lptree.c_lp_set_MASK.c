
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int byte ;
typedef int TTree ;


 char* FUNC_0 (int *,int,size_t*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0) {
  size_t VAR_1;
  const char *VAR_2 = FUNC_0(VAR_0, 1, &VAR_1);
  TTree *VAR_3 = FUNC_1(VAR_0);
  while (VAR_1--) {
    FUNC_2(FUNC_3(VAR_3), (byte)(*VAR_2));
    VAR_2++;
  }
  return 1;
}
