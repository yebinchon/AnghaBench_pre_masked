
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef scalar_t__ strm_string ;
typedef int strm_state ;
typedef int strm_int ;
typedef scalar_t__ strm_array ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int * FUNC_10 (int ) ;
 int * FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;

strm_string
FUNC_20(strm_value VAR_2)
{
  if (FUNC_16(VAR_2)) {
    strm_string VAR_3 = FUNC_19(VAR_2);
    return FUNC_4(VAR_3, FUNC_5(VAR_3));
  }
  else if (FUNC_7(VAR_2)) {
    strm_state* VAR_4 = FUNC_10(VAR_2);
    char *VAR_5 = FUNC_1(32);
    strm_int VAR_6, VAR_7 = 0, VAR_8 = 32;
    strm_array VAR_9 = FUNC_18(VAR_2);

    if (VAR_5 == ((void*)0)) return VAR_0;
    VAR_5[VAR_7++] = '[';
    if (VAR_4) {
      strm_string VAR_10 = FUNC_12(VAR_4);
      strm_int VAR_11 = FUNC_13(VAR_10);

      if (VAR_10 != VAR_1) {
        VAR_5[VAR_7++] = '@';
        if (VAR_7+VAR_11+2 > VAR_8) {
          char* VAR_12;
          VAR_8 *= 2;
          VAR_12 = FUNC_3(VAR_5, VAR_8);
          if (VAR_12 == ((void*)0)) {
            FUNC_0(VAR_5);
            return VAR_0;
          }
          VAR_5 = VAR_12;
        }
        FUNC_2(VAR_5+VAR_7, FUNC_15(VAR_10), VAR_11);
        VAR_7 += VAR_11;
        if (FUNC_9(VAR_9) > 0) {
          VAR_5[VAR_7++] = ' ';
        }
      }
    }
    for (VAR_6=0; VAR_6<FUNC_9(VAR_9); VAR_6++) {
      strm_string VAR_13 = FUNC_20(FUNC_11(VAR_9)[VAR_6]);
      strm_string VAR_14 = (FUNC_8(VAR_9) &&
                         FUNC_16(FUNC_11(FUNC_8(VAR_9))[VAR_6])) ?
        FUNC_19(FUNC_11(FUNC_8(VAR_9))[VAR_6]) : VAR_1;
      strm_int VAR_15 = (VAR_14 ? (FUNC_13(VAR_14)+1) : 0) + FUNC_13(VAR_13) + 3;

      if (VAR_7+VAR_15 > VAR_8) {
        VAR_8 *= 2;
        VAR_5 = FUNC_3(VAR_5, VAR_8);
      }
      if (VAR_6 > 0) {
        VAR_5[VAR_7++] = ',';
        VAR_5[VAR_7++] = ' ';
      }
      if (VAR_14) {
        if (!FUNC_6(VAR_14)) {
          VAR_14 = FUNC_4(VAR_14, FUNC_5(VAR_14));
        }
        FUNC_2(VAR_5+VAR_7, FUNC_15(VAR_14), FUNC_13(VAR_14));
        VAR_7 += FUNC_13(VAR_14);
        VAR_5[VAR_7++] = ':';
      }
      FUNC_2(VAR_5+VAR_7, FUNC_15(VAR_13), FUNC_13(VAR_13));
      VAR_7 += FUNC_13(VAR_13);
    }
    VAR_5[VAR_7++] = ']';
    return FUNC_14(VAR_5, VAR_7);
  }
  else {
    return FUNC_17(VAR_2);
  }
}
