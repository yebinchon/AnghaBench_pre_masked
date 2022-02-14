
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,struct RString*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*) ;
 struct RString* FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  unsigned char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
  const char *VAR_7;
  struct RString *VAR_8 = FUNC_10(VAR_1);
  mrb_int VAR_9;

  if (FUNC_1(VAR_1) == 0)
    return VAR_1;

  FUNC_7(VAR_0, VAR_8);
  VAR_9 = FUNC_1(VAR_1);
  VAR_5 = VAR_3 = (unsigned char*) FUNC_2(VAR_1);
  VAR_6 = VAR_4 = VAR_3 + VAR_9;
  *(VAR_4--) = 0;


  while (VAR_4 >= VAR_5) {
    if (FUNC_0(*VAR_4))
      break;
    VAR_4--;
  }
  if (VAR_4 < VAR_5) {
    VAR_4 = VAR_3 + VAR_9 - 1;
    VAR_2 = FUNC_9(VAR_0, "");
  }
  else {

    VAR_5 = VAR_4;
    while (VAR_5 > VAR_3) {
      if (!FUNC_0(*VAR_5) || (FUNC_0(*VAR_5) && *VAR_5 != '9' && *VAR_5 != 'z' && *VAR_5 != 'Z'))
        break;
      VAR_5--;
    }
    if (!FUNC_0(*VAR_5))
      VAR_5++;
    VAR_2 = FUNC_8(VAR_0, (char*) VAR_3, VAR_5 - VAR_3);
  }

  while (VAR_4 >= VAR_5) {
    if (!FUNC_0(*VAR_4)) {
      if (*VAR_4 == 0xff) {
        FUNC_6(VAR_0, VAR_2, "\x01");
        (*VAR_4) = 0;
      }
      else
        (*VAR_4)++;
      break;
    }
    VAR_7 = ((void*)0);
    if (*VAR_4 == '9') {
      if (VAR_4 == VAR_5) VAR_7 = "1";
      *VAR_4 = '0';
    }
    else if (*VAR_4 == 'z') {
      if (VAR_4 == VAR_5) VAR_7 = "a";
      *VAR_4 = 'a';
    }
    else if (*VAR_4 == 'Z') {
      if (VAR_4 == VAR_5) VAR_7 = "A";
      *VAR_4 = 'A';
    }
    else {
      (*VAR_4)++;
      break;
    }
    if (VAR_7) FUNC_5(VAR_0, VAR_2, VAR_7);
    VAR_4--;
  }
  VAR_2 = FUNC_4(VAR_0, VAR_2, (char*) VAR_5, VAR_6 - VAR_5);
  VAR_9 = FUNC_1(VAR_2);
  FUNC_11(VAR_0, VAR_1, VAR_9);
  FUNC_3(FUNC_2(VAR_1), FUNC_2(VAR_2), VAR_9);
  return VAR_1;
}
