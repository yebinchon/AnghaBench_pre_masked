
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  int VAR_7 = FUNC_1(VAR_3) - VAR_4;
  FUNC_4(VAR_3, VAR_2);
  FUNC_2(VAR_3, VAR_7);

  VAR_6 = FUNC_3(VAR_3, VAR_4, (VAR_5 ? 0 : VAR_1), VAR_7);

  FUNC_5(VAR_3, VAR_7);

  if (VAR_6 != 0) FUNC_0(VAR_3, VAR_0, 0);
  return VAR_6;
}
