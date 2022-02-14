
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct _args {char* cmdline; int argc; char** argv; int libc; char** libv; scalar_t__ check_syntax; int * rfp; scalar_t__ mrbfile; scalar_t__ verbose; int debug; } ;
struct TYPE_28__ {void* no_exec; void* dump_result; } ;
typedef TYPE_1__ mrbc_context ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_29__ {scalar_t__ exc; } ;
typedef TYPE_2__ mrb_state ;
typedef int FILE ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,struct _args*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,char*,TYPE_1__*) ;
 TYPE_2__* FUNC_16 () ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,char const*) ;
 int FUNC_19 (TYPE_2__*,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 char* FUNC_22 (char*,int) ;
 int FUNC_23 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*,TYPE_1__*,char const*) ;
 int FUNC_26 (TYPE_2__*,int,char**,struct _args*) ;
 int FUNC_27 (char*) ;
 int VAR_2 ;

int
FUNC_28(int VAR_3, char **VAR_4)
{
  mrb_state *VAR_5 = FUNC_16();
  int VAR_6 = -1;
  int VAR_7;
  struct _args VAR_8;
  mrb_value VAR_9;
  mrbc_context *VAR_10;
  mrb_value VAR_11;
  mrb_sym VAR_12;

  if (VAR_5 == ((void*)0)) {
    FUNC_4(VAR_2, "%s: Invalid mrb_state, exiting mruby\n", *VAR_4);
    return VAR_0;
  }

  VAR_6 = FUNC_26(VAR_5, VAR_3, VAR_4, &VAR_8);
  if (VAR_6 == VAR_0 || (VAR_8.cmdline == ((void*)0) && VAR_8.rfp == ((void*)0))) {
    FUNC_1(VAR_5, &VAR_8);
    return VAR_6;
  }
  else {
    int VAR_13 = FUNC_10(VAR_5);
    VAR_9 = FUNC_5(VAR_5, VAR_8.argc);
    for (VAR_7 = 0; VAR_7 < VAR_8.argc; VAR_7++) {
      char* VAR_14 = FUNC_22(VAR_8.argv[VAR_7], -1);
      if (VAR_14) {
        FUNC_6(VAR_5, VAR_9, FUNC_18(VAR_5, VAR_14));
        FUNC_21(VAR_14);
      }
    }
    FUNC_8(VAR_5, "ARGV", VAR_9);
    FUNC_11(VAR_5, FUNC_12(VAR_5, "$DEBUG"), FUNC_7(VAR_8.debug));

    VAR_10 = FUNC_24(VAR_5);
    if (VAR_8.verbose)
      VAR_10->dump_result = VAR_1;
    if (VAR_8.check_syntax)
      VAR_10->no_exec = VAR_1;


    VAR_12 = FUNC_12(VAR_5, "$0");
    if (VAR_8.rfp) {
      const char *VAR_15;
      VAR_15 = VAR_8.cmdline ? VAR_8.cmdline : "-";
      FUNC_25(VAR_5, VAR_10, VAR_15);
      FUNC_11(VAR_5, VAR_12, FUNC_18(VAR_5, VAR_15));
    }
    else {
      FUNC_25(VAR_5, VAR_10, "-e");
      FUNC_11(VAR_5, VAR_12, FUNC_19(VAR_5, "-e"));
    }


    for (VAR_7 = 0; VAR_7 < VAR_8.libc; VAR_7++) {
      FILE *VAR_16 = FUNC_3(VAR_8.libv[VAR_7], VAR_8.mrbfile ? "rb" : "r");
      if (VAR_16 == ((void*)0)) {
        FUNC_4(VAR_2, "%s: Cannot open library file: %s\n", *VAR_4, VAR_8.libv[VAR_7]);
        FUNC_23(VAR_5, VAR_10);
        FUNC_1(VAR_5, &VAR_8);
        return VAR_0;
      }
      if (VAR_8.mrbfile) {
        VAR_11 = FUNC_14(VAR_5, VAR_16, VAR_10);
      }
      else {
        VAR_11 = FUNC_13(VAR_5, VAR_16, VAR_10);
      }
      FUNC_2(VAR_16);
    }


    if (VAR_8.mrbfile) {
      VAR_11 = FUNC_14(VAR_5, VAR_8.rfp, VAR_10);
    }
    else if (VAR_8.rfp) {
      VAR_11 = FUNC_13(VAR_5, VAR_8.rfp, VAR_10);
    }
    else {
      char* VAR_17 = FUNC_22(VAR_8.cmdline, -1);
      if (!VAR_17) FUNC_0();
      VAR_11 = FUNC_15(VAR_5, VAR_17, VAR_10);
      FUNC_21(VAR_17);
    }

    FUNC_9(VAR_5, VAR_13);
    FUNC_23(VAR_5, VAR_10);
    if (VAR_5->exc) {
      if (!FUNC_20(VAR_11)) {
        FUNC_17(VAR_5);
      }
      VAR_6 = VAR_0;
    }
    else if (VAR_8.check_syntax) {
      FUNC_27("Syntax OK");
    }
  }
  FUNC_1(VAR_5, &VAR_8);

  return VAR_6;
}
