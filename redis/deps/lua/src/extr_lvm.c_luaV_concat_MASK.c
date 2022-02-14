
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int base; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_15__ {size_t len; } ;
struct TYPE_13__ {int buff; } ;
typedef int StkId ;


 TYPE_11__* FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,size_t) ;
 char* FUNC_5 (TYPE_1__*,int *,size_t) ;
 int FUNC_6 (char*,int ,size_t) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13 (lua_State *VAR_2, int VAR_3, int VAR_4) {
  do {
    StkId VAR_5 = VAR_2->base + VAR_4 + 1;
    int VAR_6 = 2;
    if (!(FUNC_12(VAR_5-2) || FUNC_11(VAR_5-2)) || !FUNC_9(VAR_2, VAR_5-1)) {
      if (!FUNC_1(VAR_2, VAR_5-2, VAR_5-1, VAR_5-2, VAR_1))
        FUNC_2(VAR_2, VAR_5-2, VAR_5-1);
    } else if (FUNC_10(VAR_5-1)->len == 0)
      (void)FUNC_9(VAR_2, VAR_5 - 2);
    else {

      size_t VAR_7 = FUNC_10(VAR_5-1)->len;
      char *VAR_8;
      int VAR_9;

      for (VAR_6 = 1; VAR_6 < VAR_3 && FUNC_9(VAR_2, VAR_5-VAR_6-1); VAR_6++) {
        size_t VAR_10 = FUNC_10(VAR_5-VAR_6-1)->len;
        if (VAR_10 >= VAR_0 - VAR_7) FUNC_3(VAR_2, "string length overflow");
        VAR_7 += VAR_10;
      }
      VAR_8 = FUNC_5(VAR_2, &FUNC_0(VAR_2)->buff, VAR_7);
      VAR_7 = 0;
      for (VAR_9=VAR_6; VAR_9>0; VAR_9--) {
        size_t VAR_11 = FUNC_10(VAR_5-VAR_9)->len;
        FUNC_6(VAR_8+VAR_7, FUNC_8(VAR_5-VAR_9), VAR_11);
        VAR_7 += VAR_11;
      }
      FUNC_7(VAR_2, VAR_5-VAR_6, FUNC_4(VAR_2, VAR_8, VAR_7));
    }
    VAR_3 -= VAR_6-1;
    VAR_4 -= VAR_6-1;
  } while (VAR_3 > 1);
}
