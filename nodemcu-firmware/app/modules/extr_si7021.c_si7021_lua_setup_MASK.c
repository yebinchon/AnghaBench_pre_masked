
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_2) {

 FUNC_3(VAR_1);
 FUNC_1(50000);


 uint8_t VAR_3[1];
 FUNC_2(VAR_0, VAR_3, 1);
 if (VAR_3[0] != 0x3A)
  return FUNC_0(VAR_2, "found no device");

 return 0;
}
