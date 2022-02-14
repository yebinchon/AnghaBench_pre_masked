
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union value {int tbl; int boolean; int string; int d; int n; } ;
typedef int uint8_t ;
typedef int lua_State ;







 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (int *,int ,size_t*) ;

__attribute__((used)) static void
FUNC_7(lua_State *VAR_0, lua_State *VAR_1, uint8_t VAR_2, union value *VAR_3) {
 switch(VAR_2) {
 case 130:
  FUNC_5(VAR_0, VAR_3->n);
  break;
 case 131:
  FUNC_1(VAR_0, VAR_3->d);
  break;
 case 129: {
  size_t VAR_4 = 0;
  const char *VAR_5 = FUNC_6(VAR_1, VAR_3->string, &VAR_4);
  FUNC_3(VAR_0, VAR_5, VAR_4);
  break;
 }
 case 132:
  FUNC_0(VAR_0, VAR_3->boolean);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_3->tbl);
  break;
 default:
  FUNC_4(VAR_0);
  break;
 }
}
