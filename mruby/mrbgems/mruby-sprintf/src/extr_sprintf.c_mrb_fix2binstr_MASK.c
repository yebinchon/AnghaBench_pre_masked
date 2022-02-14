
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (char*,int) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_2, mrb_value VAR_3, int VAR_4)
{
  char VAR_5[66], *VAR_6 = VAR_5 + sizeof VAR_5;
  mrb_int VAR_7 = FUNC_0(VAR_3);
  uint64_t VAR_8 = (uint64_t)VAR_7;
  char VAR_9;

  if (VAR_4 != 2) {
    FUNC_1(VAR_2, VAR_0, "invalid radix %d", VAR_4);
  }
  if (VAR_8 == 0) {
    return FUNC_3(VAR_2, "0");
  }
  *--VAR_6 = '\0';
  do {
    *--VAR_6 = VAR_1[(int)(VAR_8 % VAR_4)];
  } while (VAR_8 /= VAR_4);

  if (VAR_7 < 0) {
    VAR_6 = FUNC_4(VAR_6, VAR_4);
    switch (VAR_4) {
    case 16: VAR_9 = 'f'; break;
    case 8: VAR_9 = '7'; break;
    case 2: VAR_9 = '1'; break;
    default: VAR_9 = 0; break;
    }

    if (VAR_9 && *VAR_6 != VAR_9) {
      *--VAR_6 = VAR_9;
    }
  }

  return FUNC_2(VAR_2, VAR_6);
}
