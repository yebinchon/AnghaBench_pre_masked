
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reference; } ;
typedef TYPE_1__ plperl_proc_desc ;
typedef int SV ;
typedef int FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char*,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static void
FUNC_12(plperl_proc_desc *VAR_15,
         FunctionCallInfo VAR_16,
         SV *VAR_17)
{
 VAR_13;
 VAR_12;
 SV *VAR_18,
      *VAR_19;
 int VAR_20;

 VAR_0;
 VAR_10;

 VAR_19 = FUNC_5("main::_TD", 0);
 if (!VAR_19)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("couldn't fetch $_TD")));

 FUNC_8(VAR_19);
 FUNC_11(VAR_19, VAR_17);

 FUNC_0(VAR_14);
 VAR_9;


 VAR_20 = FUNC_7(VAR_15->reference, VAR_6 | VAR_5);

 VAR_11;

 if (VAR_20 != 1)
 {
  VAR_9;
  VAR_4;
  VAR_7;
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("didn't get a return item from trigger function")));
 }

 if (FUNC_1(VAR_3))
 {
  (void) VAR_8;
  VAR_9;
  VAR_4;
  VAR_7;

  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("%s", FUNC_9(FUNC_10(VAR_3)))));
 }

 VAR_18 = FUNC_6(VAR_8);
 (void) VAR_18;

 VAR_9;
 VAR_4;
 VAR_7;

 return;
}
