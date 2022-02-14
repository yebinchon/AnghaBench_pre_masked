
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irep; } ;
struct RProc {TYPE_1__ body; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef int int32_t ;


 int FUNC_0 (struct RProc*) ;
 scalar_t__ FUNC_1 (struct RProc*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int) ;
 struct RProc* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,char const*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RProc *VAR_2 = FUNC_6(VAR_1);
  mrb_value VAR_3 = FUNC_12(VAR_0, "#<Proc:");
  FUNC_10(VAR_0, VAR_3, FUNC_7(VAR_0, FUNC_2(VAR_1)));

  if (!FUNC_0(VAR_2)) {
    mrb_irep *VAR_4 = VAR_2->body.irep;
    const char *VAR_5;
    int32_t VAR_6;
    FUNC_9(VAR_0, VAR_3, "@");

    VAR_5 = FUNC_3(VAR_0, VAR_4, 0);
    FUNC_8(VAR_0, VAR_3, VAR_5 ? VAR_5 : "-");
    FUNC_9(VAR_0, VAR_3, ":");

    VAR_6 = FUNC_4(VAR_0, VAR_4, 0);
    if (VAR_6 != -1) {
      FUNC_11(VAR_0, VAR_3, FUNC_5(VAR_6));
    }
    else {
      FUNC_9(VAR_0, VAR_3, "-");
    }
  }

  if (FUNC_1(VAR_2)) {
    FUNC_9(VAR_0, VAR_3, " (lambda)");
  }

  FUNC_9(VAR_0, VAR_3, ">");
  return VAR_3;
}
