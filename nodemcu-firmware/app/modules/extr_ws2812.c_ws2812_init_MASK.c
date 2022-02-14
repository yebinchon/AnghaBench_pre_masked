
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int,int,char*) ;
 int FUNC_6 (int *,int,int const) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(lua_State* VAR_12) {
  const int VAR_13 = FUNC_6(VAR_12, 1, VAR_4);
  FUNC_5(VAR_12, VAR_13 == VAR_4 || VAR_13 == VAR_3, 1, "ws2812.SINGLE or ws2812.DUAL expected");



  FUNC_4(FUNC_2(1), VAR_9 / 3200000);

  FUNC_4(FUNC_3(1), VAR_11 | (1 << VAR_10) | (1 << VAR_8));

  if (VAR_13 == VAR_3) {


    FUNC_4(FUNC_2(0), VAR_9 / 3200000);

    FUNC_4(FUNC_3(0), VAR_11 | (1 << VAR_10) | (1 << VAR_8));
  }


  FUNC_8(4, VAR_7, VAR_6);
  FUNC_9(4, 0);


  FUNC_7(10);



  FUNC_0(VAR_2, VAR_0);

  FUNC_1(VAR_5, VAR_1);

  return 0;
}
