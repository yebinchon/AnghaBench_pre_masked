
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int*,int) ;
 int VAR_4 ;
 size_t FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,char*) ;
 int* VAR_5 ;
 int FUNC_6 (size_t,int ,int ) ;

__attribute__((used)) static int FUNC_7(lua_State* VAR_6) {
  uint8_t VAR_7 = FUNC_3(VAR_6, 1);
  FUNC_1(VAR_4, VAR_7);
  uint32_t VAR_8 = VAR_5[VAR_7];

  uint8_t VAR_9 = FUNC_3(VAR_6, 2);
  FUNC_1(VAR_4, VAR_9);
  uint32_t VAR_10 = VAR_5[VAR_9];

  size_t VAR_11;
  const char *VAR_12 = FUNC_4(VAR_6, 3, &VAR_11);
  uint32_t VAR_13 = VAR_11 / 4;

  if (VAR_13 > 100000) {
    return FUNC_5(VAR_6, "The supplied buffer is too long, and might cause the callback watchdog to bark.");
  }


  FUNC_6(VAR_7, VAR_3, VAR_0);
  FUNC_0(VAR_8, VAR_1);
  FUNC_6(VAR_9, VAR_3, VAR_0);
  FUNC_0(VAR_10, VAR_2);


  FUNC_2(VAR_8, VAR_10, (uint32_t *) VAR_12, (uint32_t) VAR_13);
  return 0;
}
