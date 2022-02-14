
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;




 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int *,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, mrb_value VAR_4, mrb_value VAR_5)
{
  mrb_int VAR_6, VAR_7, VAR_8;

  FUNC_3(VAR_1, VAR_5);

  switch (FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7)) {
    case 128:
    default:
      FUNC_1(VAR_1, VAR_0, "string not matched");
    case 130:
      if (VAR_7 < 0) {
        FUNC_2(VAR_1, VAR_0, "negative length %v", VAR_4);
      }
      VAR_8 = FUNC_0(VAR_2);
      if (VAR_6 < 0) { VAR_6 += VAR_8; }
      if (VAR_6 < 0 || VAR_6 > VAR_8) { FUNC_5(VAR_1, VAR_3); }

    case 129:
      FUNC_6(VAR_2, &VAR_6, &VAR_7);

    case 131:
      FUNC_7(VAR_1, VAR_2, VAR_6, VAR_6 + VAR_7, VAR_5);
  }
}
