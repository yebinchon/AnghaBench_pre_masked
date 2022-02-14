
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpl {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;





 int VAR_1 ;

 int VAR_2 ;




 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct tmpl*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,struct tmpl*) ;
 int FUNC_10 (int *,struct tmpl*,int*,int*,int*,int*,unsigned int*) ;
 int FUNC_11 (int *,unsigned char const*,int,int ,int,unsigned int) ;
 int FUNC_12 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_13 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_14 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_15 (int *,unsigned char const*,int,int ,int,unsigned int) ;
 int FUNC_16 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_17 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_18 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_19 (int *,unsigned char const*,int,int ,unsigned int) ;
 int FUNC_20 (int *,unsigned char const*,int,int ,unsigned int) ;
 scalar_t__ FUNC_21 (int *,unsigned char const*,int,int ,int,unsigned int) ;

__attribute__((used)) static mrb_value
FUNC_22(mrb_state *VAR_4, mrb_value VAR_5, int VAR_6)
{
  mrb_value VAR_7;
  struct tmpl VAR_8;
  int VAR_9;
  unsigned int VAR_10;
  int VAR_11, VAR_12, VAR_13;
  int VAR_14, VAR_15;
  const unsigned char *VAR_16;

  FUNC_9(VAR_4, &VAR_8);

  VAR_14 = 0;
  VAR_15 = (int)FUNC_2(VAR_5);

  VAR_7 = FUNC_5(VAR_4);
  while (FUNC_4(&VAR_8)) {
    FUNC_10(VAR_4, &VAR_8, &VAR_11, &VAR_13, &VAR_12, &VAR_9, &VAR_10);

    if (VAR_11 == VAR_1)
      continue;
    else if (VAR_11 == VAR_2) {
      VAR_14 += FUNC_21(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_9, VAR_10);
      continue;
    }

    if (VAR_10 & VAR_3) {
      VAR_16 = (const unsigned char *)FUNC_3(VAR_5) + VAR_14;
      switch (VAR_11) {
      case 133:
        VAR_14 += FUNC_15(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_9, VAR_10);
        break;
      case 129:
        VAR_14 += FUNC_11(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_9, VAR_10);
        break;
      case 137:
        VAR_14 += FUNC_17(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;
      }
      continue;
    }

    while (VAR_9 != 0) {
      if (VAR_15 - VAR_14 < VAR_12) {
        while (VAR_9-- > 0) {
          FUNC_6(VAR_4, VAR_7, FUNC_7());
        }
        break;
      }

      VAR_16 = (const unsigned char*)FUNC_3(VAR_5) + VAR_14;
      switch (VAR_11) {
      case 136:
        VAR_14 += FUNC_12(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;
      case 130:
        VAR_14 += FUNC_19(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;
      case 132:
        VAR_14 += FUNC_16(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;
      case 131:
        VAR_14 += FUNC_18(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;

      case 134:
        VAR_14 += FUNC_14(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;
      case 135:
        VAR_14 += FUNC_13(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;

      case 128:
        VAR_14 += FUNC_20(VAR_4, VAR_16, VAR_15 - VAR_14, VAR_7, VAR_10);
        break;
      default:
        FUNC_8(VAR_4, VAR_0, "mruby-pack's bug");
      }
      if (VAR_9 > 0) {
        VAR_9--;
      }
    }
    if (VAR_6) break;
  }

  if (VAR_6) {
    if (FUNC_0(VAR_7) > 0) {
      return FUNC_1(VAR_7)[0];
    }
    return FUNC_7();
  }
  return VAR_7;
}
