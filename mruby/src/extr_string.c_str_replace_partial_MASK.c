
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct RString*) ;
 char* FUNC_3 (struct RString*) ;
 int FUNC_4 (struct RString*,scalar_t__) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,struct RString*) ;
 struct RString* FUNC_10 (int ) ;
 int FUNC_11 (int *,struct RString*,scalar_t__) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_2, mrb_value VAR_3, mrb_int VAR_4, mrb_int VAR_5, mrb_value VAR_6)
{
  const mrb_int VAR_7 = 256;
  struct RString *VAR_8 = FUNC_10(VAR_3);
  mrb_int VAR_9 = FUNC_2(VAR_8);
  mrb_int VAR_10, VAR_11;
  char *VAR_12;

  if (VAR_5 > VAR_9) { VAR_5 = VAR_9; }

  if (VAR_4 < 0 || VAR_4 > VAR_9) {
    FUNC_12(VAR_2, FUNC_6(VAR_4));
  }

  VAR_10 = (FUNC_7(VAR_6) ? 0 : FUNC_0(VAR_6));
  VAR_11 = VAR_10 + VAR_9 - (VAR_5 - VAR_4);

  if (VAR_11 >= VAR_1 || VAR_11 < VAR_10 ) {
    FUNC_8(VAR_2, VAR_0, "string size too big");
  }

  FUNC_9(VAR_2, VAR_8);

  if (VAR_9 < VAR_11) {
    FUNC_11(VAR_2, VAR_8, VAR_11);
  }

  VAR_12 = FUNC_3(VAR_8);

  FUNC_5(VAR_12 + VAR_11 - (VAR_9 - VAR_5), VAR_12 + VAR_5, VAR_9 - VAR_5);
  if (!FUNC_7(VAR_6)) {
    FUNC_5(VAR_12 + VAR_4, FUNC_1(VAR_6), VAR_10);
  }
  FUNC_4(VAR_8, VAR_11);
  VAR_12[VAR_11] = '\0';

  if (VAR_9 - VAR_11 >= VAR_7) {
    FUNC_11(VAR_2, VAR_8, VAR_11);
  }

  return VAR_3;
}
