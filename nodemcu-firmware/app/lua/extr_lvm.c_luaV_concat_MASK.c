
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_18__ {int base; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ lu_mem ;
struct TYPE_20__ {size_t n; } ;
struct TYPE_19__ {size_t len; } ;
struct TYPE_17__ {scalar_t__ memlimit; TYPE_6__ buff; } ;
typedef int StkId ;


 TYPE_15__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,size_t) ;
 char* FUNC_6 (TYPE_1__*,TYPE_6__*,size_t) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (char*,int ,size_t) ;
 int FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 TYPE_3__* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*) ;

void FUNC_16 (lua_State *VAR_2, int VAR_3, int VAR_4) {
  lu_mem VAR_5 = VAR_0;
  if (FUNC_0(VAR_2)->memlimit < VAR_5) VAR_5 = FUNC_0(VAR_2)->memlimit;
  do {


    StkId VAR_6 = VAR_2->base + VAR_4 + 1;
    FUNC_2(VAR_2);
    int VAR_7 = 2;
    if (!(FUNC_14(VAR_6-2) || FUNC_13(VAR_6-2)) || !FUNC_11(VAR_2, VAR_6-1)) {
      FUNC_15(VAR_2);
      if (!FUNC_1(VAR_2, VAR_6-2, VAR_6-1, VAR_6-2, VAR_1)) {

        VAR_6 = VAR_2->base + VAR_4 + 1;
        FUNC_3(VAR_2, VAR_6-2, VAR_6-1);
      }
    } else if (FUNC_12(VAR_6-1)->len == 0) {
      (void)FUNC_11(VAR_2, VAR_6 - 2);
    } else {

      size_t VAR_8 = FUNC_12(VAR_6-1)->len;
      char *VAR_9;
      int VAR_10;

      for (VAR_7 = 1; VAR_7 < VAR_3 && FUNC_11(VAR_2, VAR_6-VAR_7-1); VAR_7++) {
        size_t VAR_11 = FUNC_12(VAR_6-VAR_7-1)->len;
        if (VAR_11 >= VAR_5 - VAR_8) FUNC_4(VAR_2, "string length overflow");
        VAR_8 += VAR_11;
      }
      FUNC_0(VAR_2)->buff.n = VAR_8;
      VAR_9 = FUNC_6(VAR_2, &FUNC_0(VAR_2)->buff, VAR_8);
      VAR_8 = 0;
      for (VAR_10=VAR_7; VAR_10>0; VAR_10--) {
        size_t VAR_12 = FUNC_12(VAR_6-VAR_10)->len;
        FUNC_8(VAR_9+VAR_8, FUNC_10(VAR_6-VAR_10), VAR_12);
        VAR_8 += VAR_12;
      }
      FUNC_9(VAR_2, VAR_6-VAR_7, FUNC_5(VAR_2, VAR_9, VAR_8));
      FUNC_7(&FUNC_0(VAR_2)->buff);
    }
    VAR_3 -= VAR_7-1;
    VAR_4 -= VAR_7-1;
    FUNC_15(VAR_2);
  } while (VAR_3 > 1);
}
