
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ) ;
 char* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,char*,int ) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3;
  char *VAR_4;
  mrb_value VAR_5;


  mrb_value VAR_6;

  VAR_3 = FUNC_5(VAR_1, "|S", &VAR_6);
  if (VAR_3 == 0) {
    VAR_4 = FUNC_1("HOME");
    if (VAR_4 == ((void*)0)) {
      return FUNC_8();
    }
    if (!FUNC_3(VAR_4)) {
      FUNC_9(VAR_1, VAR_0, "non-absolute home");
    }
  } else {
    const char *VAR_7 = FUNC_0(VAR_1, VAR_6);
    struct passwd *VAR_8 = FUNC_2(VAR_7);
    if (VAR_8 == ((void*)0)) {
      return FUNC_8();
    }
    VAR_4 = VAR_8->pw_dir;
    if (!FUNC_3(VAR_4)) {
      FUNC_10(VAR_1, VAR_0, "non-absolute home of ~%v", VAR_6);
    }
  }
  VAR_4 = FUNC_7(VAR_4, -1);
  VAR_5 = FUNC_11(VAR_1, VAR_4);
  FUNC_6(VAR_4);
  return VAR_5;
}
