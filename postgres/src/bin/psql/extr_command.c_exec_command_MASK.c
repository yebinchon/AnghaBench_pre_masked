
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ backslashResult ;
struct TYPE_2__ {scalar_t__ cur_cmd_interactive; } ;
typedef int PsqlScanState ;
typedef int PQExpBuffer ;
typedef int ConditionalStack ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int,char const*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int ,int,char const*) ;
 scalar_t__ FUNC_12 (int ,int,char const*) ;
 scalar_t__ FUNC_13 (int ,int,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int,int ,int) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ,int ) ;
 scalar_t__ FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int ,int ,int ) ;
 scalar_t__ FUNC_19 (int ,int) ;
 scalar_t__ FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (int ,int,char const*) ;
 scalar_t__ FUNC_22 (int ,int) ;
 scalar_t__ FUNC_23 (int ,int) ;
 scalar_t__ FUNC_24 (int ,int) ;
 scalar_t__ FUNC_25 (int ,int) ;
 scalar_t__ FUNC_26 (int ,int) ;
 scalar_t__ FUNC_27 (int ,int ,int ) ;
 scalar_t__ FUNC_28 (int ,int,char const*) ;
 scalar_t__ FUNC_29 (int ,int,char const*) ;
 scalar_t__ FUNC_30 (int ,int,char const*) ;
 scalar_t__ FUNC_31 (int ,int) ;
 scalar_t__ FUNC_32 (int ,int) ;
 scalar_t__ FUNC_33 (int ,int,int ,int ) ;
 scalar_t__ FUNC_34 (int ,int,char const*) ;
 scalar_t__ FUNC_35 (int ,int) ;
 scalar_t__ FUNC_36 (int ,int) ;
 scalar_t__ FUNC_37 (int ,int,int ) ;
 scalar_t__ FUNC_38 (int ,int) ;
 scalar_t__ FUNC_39 (int ,int) ;
 scalar_t__ FUNC_40 (int ,int,char const*) ;
 scalar_t__ FUNC_41 (int ,int,char const*,int) ;
 scalar_t__ FUNC_42 (int ,int) ;
 scalar_t__ FUNC_43 (int ,int) ;
 scalar_t__ FUNC_44 (int ,int) ;
 scalar_t__ FUNC_45 (int ,int) ;
 scalar_t__ FUNC_46 (int ,int,char const*) ;
 scalar_t__ FUNC_47 (int ,int,int ,int ) ;
 scalar_t__ FUNC_48 (int ,int,char const*,int ,int ) ;
 scalar_t__ FUNC_49 (int ,int) ;
 scalar_t__ FUNC_50 (int ,int) ;
 int FUNC_51 (char const*) ;
 int FUNC_52 (char*,char const*) ;
 scalar_t__ FUNC_53 (char const*,char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_54 (char const*,char*) ;
 scalar_t__ FUNC_55 (char const*,char*,int) ;

__attribute__((used)) static backslashResult
FUNC_56(const char *VAR_3,
    PsqlScanState VAR_4,
    ConditionalStack VAR_5,
    PQExpBuffer VAR_6,
    PQExpBuffer VAR_7)
{
 backslashResult VAR_8;
 bool VAR_9 = FUNC_0(VAR_5);
 if (VAR_2.cur_cmd_interactive && !VAR_9 &&
  !FUNC_51(VAR_3))
 {
  FUNC_52("\\%s command ignored; use \\endif or Ctrl-C to exit current \\if block",
        VAR_3);
 }

 if (FUNC_54(VAR_3, "a") == 0)
  VAR_8 = FUNC_4(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "C") == 0)
  VAR_8 = FUNC_2(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "c") == 0 || FUNC_54(VAR_3, "connect") == 0)
  VAR_8 = FUNC_6(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "cd") == 0)
  VAR_8 = FUNC_5(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "conninfo") == 0)
  VAR_8 = FUNC_7(VAR_4, VAR_9);
 else if (FUNC_53(VAR_3, "copy") == 0)
  VAR_8 = FUNC_8(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "copyright") == 0)
  VAR_8 = FUNC_9(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "crosstabview") == 0)
  VAR_8 = FUNC_10(VAR_4, VAR_9);
 else if (VAR_3[0] == 'd')
  VAR_8 = FUNC_11(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "e") == 0 || FUNC_54(VAR_3, "edit") == 0)
  VAR_8 = FUNC_13(VAR_4, VAR_9,
           VAR_6, VAR_7);
 else if (FUNC_54(VAR_3, "ef") == 0)
  VAR_8 = FUNC_14(VAR_4, VAR_9, VAR_6, 1);
 else if (FUNC_54(VAR_3, "ev") == 0)
  VAR_8 = FUNC_14(VAR_4, VAR_9, VAR_6, 0);
 else if (FUNC_54(VAR_3, "echo") == 0 || FUNC_54(VAR_3, "qecho") == 0 ||
    FUNC_54(VAR_3, "warn") == 0)
  VAR_8 = FUNC_12(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "elif") == 0)
  VAR_8 = FUNC_15(VAR_4, VAR_5, VAR_6);
 else if (FUNC_54(VAR_3, "else") == 0)
  VAR_8 = FUNC_16(VAR_4, VAR_5, VAR_6);
 else if (FUNC_54(VAR_3, "endif") == 0)
  VAR_8 = FUNC_18(VAR_4, VAR_5, VAR_6);
 else if (FUNC_54(VAR_3, "encoding") == 0)
  VAR_8 = FUNC_17(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "errverbose") == 0)
  VAR_8 = FUNC_19(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "f") == 0)
  VAR_8 = FUNC_20(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "g") == 0 || FUNC_54(VAR_3, "gx") == 0)
  VAR_8 = FUNC_21(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "gdesc") == 0)
  VAR_8 = FUNC_22(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "gexec") == 0)
  VAR_8 = FUNC_23(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "gset") == 0)
  VAR_8 = FUNC_24(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "h") == 0 || FUNC_54(VAR_3, "help") == 0)
  VAR_8 = FUNC_25(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "H") == 0 || FUNC_54(VAR_3, "html") == 0)
  VAR_8 = FUNC_26(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "i") == 0 || FUNC_54(VAR_3, "include") == 0 ||
    FUNC_54(VAR_3, "ir") == 0 || FUNC_54(VAR_3, "include_relative") == 0)
  VAR_8 = FUNC_28(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "if") == 0)
  VAR_8 = FUNC_27(VAR_4, VAR_5, VAR_6);
 else if (FUNC_54(VAR_3, "l") == 0 || FUNC_54(VAR_3, "list") == 0 ||
    FUNC_54(VAR_3, "l+") == 0 || FUNC_54(VAR_3, "list+") == 0)
  VAR_8 = FUNC_29(VAR_4, VAR_9, VAR_3);
 else if (FUNC_55(VAR_3, "lo_", 3) == 0)
  VAR_8 = FUNC_30(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "o") == 0 || FUNC_54(VAR_3, "out") == 0)
  VAR_8 = FUNC_31(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "p") == 0 || FUNC_54(VAR_3, "print") == 0)
  VAR_8 = FUNC_33(VAR_4, VAR_9,
         VAR_6, VAR_7);
 else if (FUNC_54(VAR_3, "password") == 0)
  VAR_8 = FUNC_32(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "prompt") == 0)
  VAR_8 = FUNC_34(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "pset") == 0)
  VAR_8 = FUNC_35(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "q") == 0 || FUNC_54(VAR_3, "quit") == 0)
  VAR_8 = FUNC_36(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "r") == 0 || FUNC_54(VAR_3, "reset") == 0)
  VAR_8 = FUNC_37(VAR_4, VAR_9, VAR_6);
 else if (FUNC_54(VAR_3, "s") == 0)
  VAR_8 = FUNC_38(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "set") == 0)
  VAR_8 = FUNC_39(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "setenv") == 0)
  VAR_8 = FUNC_40(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "sf") == 0 || FUNC_54(VAR_3, "sf+") == 0)
  VAR_8 = FUNC_41(VAR_4, VAR_9, VAR_3, 1);
 else if (FUNC_54(VAR_3, "sv") == 0 || FUNC_54(VAR_3, "sv+") == 0)
  VAR_8 = FUNC_41(VAR_4, VAR_9, VAR_3, 0);
 else if (FUNC_54(VAR_3, "t") == 0)
  VAR_8 = FUNC_44(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "T") == 0)
  VAR_8 = FUNC_3(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "timing") == 0)
  VAR_8 = FUNC_45(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "unset") == 0)
  VAR_8 = FUNC_46(VAR_4, VAR_9, VAR_3);
 else if (FUNC_54(VAR_3, "w") == 0 || FUNC_54(VAR_3, "write") == 0)
  VAR_8 = FUNC_48(VAR_4, VAR_9, VAR_3,
         VAR_6, VAR_7);
 else if (FUNC_54(VAR_3, "watch") == 0)
  VAR_8 = FUNC_47(VAR_4, VAR_9,
         VAR_6, VAR_7);
 else if (FUNC_54(VAR_3, "x") == 0)
  VAR_8 = FUNC_49(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "z") == 0)
  VAR_8 = FUNC_50(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "!") == 0)
  VAR_8 = FUNC_42(VAR_4, VAR_9);
 else if (FUNC_54(VAR_3, "?") == 0)
  VAR_8 = FUNC_43(VAR_4, VAR_9);
 else
  VAR_8 = VAR_1;






 if (VAR_8 == VAR_0)
  FUNC_1(VAR_6, VAR_7);

 return VAR_8;
}
