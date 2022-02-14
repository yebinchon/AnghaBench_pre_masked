
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *) ;

int FUNC_6( lua_State *VAR_3 ) {
  int VAR_4, VAR_5;

  VAR_4 = FUNC_1(VAR_3, 1, VAR_0);
  VAR_5 = FUNC_1(VAR_3, 2, 0);

  if (VAR_4 == VAR_2) {
    FUNC_4("net.createConnection with net.UDP type", "in next version");
    return FUNC_3( VAR_3 );
  }
  if (VAR_4 != VAR_0) return FUNC_0(VAR_3, "invalid type");
  if (VAR_5) {
    FUNC_4("net.createConnection with secure flag", "in next version");



    return FUNC_0(VAR_3, "secure connections not enabled");

  }
  FUNC_2(VAR_3, VAR_1);
  return 1;
}
