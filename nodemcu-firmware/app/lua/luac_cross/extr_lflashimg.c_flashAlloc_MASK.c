
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void *FUNC_2(lua_State* VAR_4, size_t VAR_5) {
  void *VAR_6 = (void *)(VAR_3 + VAR_2);
  VAR_2 += FUNC_0(VAR_5)>>VAR_1;
  if (VAR_2 > VAR_0) {
    FUNC_1("Out of Flash memory");
  }
  return VAR_6;
}
