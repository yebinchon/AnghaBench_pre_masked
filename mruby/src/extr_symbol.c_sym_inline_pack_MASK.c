
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int const uint16_t ;
typedef int mrb_sym ;
typedef scalar_t__ mrb_bool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char const* VAR_6 ;
 char* FUNC_0 (char const*,int) ;

__attribute__((used)) static mrb_sym
FUNC_1(const char *VAR_7, uint16_t VAR_8)
{
  const int VAR_9 = (VAR_1 - 2) / 5;
  const int VAR_10 = (VAR_1 - 2) / 6;

  char VAR_11;
  const char *VAR_12;
  int VAR_13;
  mrb_sym VAR_14 = 0;
  mrb_bool VAR_15 = VAR_5;

  if (VAR_8 > VAR_9) return 0;
  for (VAR_13=0; VAR_13<VAR_8; VAR_13++) {
    uint32_t VAR_16;

    VAR_11 = VAR_7[VAR_13];
    if (VAR_11 == 0) return 0;
    VAR_12 = FUNC_0(VAR_6, (int)VAR_11);
    if (VAR_12 == 0) return 0;
    VAR_16 = (uint32_t)(VAR_12 - VAR_6)+1;
    if (VAR_16 > 27) VAR_15 = VAR_0;
    if (VAR_13 >= VAR_10) break;
    VAR_14 |= VAR_16<<(VAR_13*6+VAR_4);
  }
  if (VAR_15) {
    VAR_14 = 0;
    for (VAR_13=0; VAR_13<VAR_8; VAR_13++) {
      uint32_t VAR_17;

      VAR_11 = VAR_7[VAR_13];
      VAR_12 = FUNC_0(VAR_6, (int)VAR_11);
      VAR_17 = (uint32_t)(VAR_12 - VAR_6)+1;
      VAR_14 |= VAR_17<<(VAR_13*5+VAR_4);
    }
    return VAR_14 | VAR_2 | VAR_3;
  }
  if (VAR_8 > VAR_10) return 0;
  return VAR_14 | VAR_2;
}
