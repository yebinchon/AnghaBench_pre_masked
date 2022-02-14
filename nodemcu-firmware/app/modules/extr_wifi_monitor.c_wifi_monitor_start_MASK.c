
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int (*) ()) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_10) {
  int VAR_11 = 1;
  if (FUNC_5(VAR_10, VAR_11) == VAR_3) {
    int VAR_12 = FUNC_1(VAR_10, VAR_11);
    VAR_11++;
    if (FUNC_5(VAR_10, VAR_11) == VAR_3) {
      int VAR_13 = FUNC_1(VAR_10, VAR_11);

      int VAR_14 = 0xff;
      VAR_11++;

      if (FUNC_5(VAR_10, VAR_11) == VAR_3) {
        VAR_14 = FUNC_1(VAR_10, VAR_11);
        VAR_11++;
      }
      VAR_6 = VAR_12 - 1;
      VAR_7 = VAR_13;
      VAR_5 = VAR_14;
    } else {
      return FUNC_2(VAR_10, "Must supply offset and value");
    }
  } else {

    VAR_6 = 12;
    VAR_7 = 0x00;
    VAR_5 = 0x0C;
  }
  if (FUNC_5(VAR_10, VAR_11) == VAR_1 || FUNC_5(VAR_10, VAR_11) == VAR_2)
  {
    FUNC_4(VAR_10, VAR_11);
    VAR_8 = FUNC_3(VAR_10, VAR_0);
    uint8 VAR_15 = FUNC_11();
    FUNC_12(0);
    FUNC_8(1);
    FUNC_7(0);
    FUNC_10();
    FUNC_9(VAR_9);


    if (VAR_15 == VAR_4) {
      FUNC_6();
    } else {
      FUNC_0(FUNC_6);
    }
    return 0;
  }
  return FUNC_2(VAR_10, "Missing callback");
}
