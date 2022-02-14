
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int cronent_ud_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 size_t FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_3) {
  cronent_ud_t *VAR_4 = FUNC_1(VAR_3, 1, "cron.entry");
  size_t VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5 == -1) return 0;
  FUNC_2(VAR_3, VAR_0, VAR_2[VAR_5]);
  FUNC_3(VAR_2 + VAR_5, VAR_2 + VAR_5 + 1, sizeof(int) * (VAR_1 - VAR_5 - 1));
  VAR_1--;
  return 0;
}
