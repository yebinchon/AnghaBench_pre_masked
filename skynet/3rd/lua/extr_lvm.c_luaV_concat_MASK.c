
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int TString ;
typedef int StkId ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int * FUNC_6 (TYPE_1__*,size_t) ;
 int * FUNC_7 (TYPE_1__*,char*,size_t) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,int,int) ;
 int FUNC_11 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int) ;
 size_t FUNC_14 (int) ;

void FUNC_15 (lua_State *VAR_3, int VAR_4) {
  FUNC_9(VAR_4 >= 2);
  do {
    StkId VAR_5 = VAR_3->top;
    int VAR_6 = 2;
    if (!(FUNC_13(VAR_5-2) || FUNC_2(VAR_5-2)) || !FUNC_12(VAR_3, VAR_5-1))
      FUNC_8(VAR_3, VAR_5-2, VAR_5-1, VAR_5-2, VAR_2);
    else if (FUNC_4(VAR_5 - 1))
      FUNC_0(FUNC_12(VAR_3, VAR_5 - 2));
    else if (FUNC_4(VAR_5 - 2)) {
      FUNC_10(VAR_3, VAR_5 - 2, VAR_5 - 1);
    }
    else {

      size_t VAR_7 = FUNC_14(VAR_5 - 1);
      TString *VAR_8;

      for (VAR_6 = 1; VAR_6 < VAR_4 && FUNC_12(VAR_3, VAR_5 - VAR_6 - 1); VAR_6++) {
        size_t VAR_9 = FUNC_14(VAR_5 - VAR_6 - 1);
        if (VAR_9 >= (VAR_1/sizeof(char)) - VAR_7)
          FUNC_5(VAR_3, "string length overflow");
        VAR_7 += VAR_9;
      }
      if (VAR_7 <= VAR_0) {
        char VAR_10[VAR_0];
        FUNC_1(VAR_5, VAR_6, VAR_10);
        VAR_8 = FUNC_7(VAR_3, VAR_10, VAR_7);
      }
      else {
        VAR_8 = FUNC_6(VAR_3, VAR_7);
        FUNC_1(VAR_5, VAR_6, FUNC_3(VAR_8));
      }
      FUNC_11(VAR_3, VAR_5 - VAR_6, VAR_8);
    }
    VAR_4 -= VAR_6-1;
    VAR_3->top -= VAR_6-1;
  } while (VAR_4 > 1);
}
