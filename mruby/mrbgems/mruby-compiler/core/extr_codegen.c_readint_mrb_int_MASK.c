
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_int ;
typedef scalar_t__ mrb_bool ;
typedef int codegen_scope ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 char* VAR_4 ;
 int FUNC_2 (char const*) ;
 char FUNC_3 (unsigned char) ;

__attribute__((used)) static mrb_int
FUNC_4(codegen_scope *VAR_5, const char *VAR_6, int VAR_7, mrb_bool VAR_8, mrb_bool *VAR_9)
{
  const char *VAR_10 = VAR_6 + FUNC_2(VAR_6);
  mrb_int VAR_11 = 0;
  int VAR_12;

  FUNC_1(VAR_7 >= 2 && VAR_7 <= 36);
  if (*VAR_6 == '+') VAR_6++;
  while (VAR_6 < VAR_10) {
    char VAR_13 = *VAR_6;
    VAR_13 = FUNC_3((unsigned char)VAR_13);
    for (VAR_12=0; VAR_12<VAR_7; VAR_12++) {
      if (VAR_4[VAR_12] == VAR_13) {
        break;
      }
    }
    if (VAR_12 == VAR_7) {
      FUNC_0(VAR_5, "malformed readint input");
    }

    if (VAR_8) {
      if ((VAR_2 + VAR_12)/VAR_7 > VAR_11) {
        *VAR_9 = VAR_3;
        return 0;
      }
      VAR_11 *= VAR_7;
      VAR_11 -= VAR_12;
    }
    else {
      if ((VAR_1 - VAR_12)/VAR_7 < VAR_11) {
        *VAR_9 = VAR_3;
        return 0;
      }
      VAR_11 *= VAR_7;
      VAR_11 += VAR_12;
    }
    VAR_6++;
  }
  *VAR_9 = VAR_0;
  return VAR_11;
}
