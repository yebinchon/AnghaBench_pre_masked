
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int reference; } ;
typedef TYPE_1__ plperl_proc_desc ;
struct TYPE_8__ {TYPE_3__* tg_trigger; } ;
typedef TYPE_2__ TriggerData ;
struct TYPE_9__ {int tgnargs; int * tgargs; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_10__ {scalar_t__ context; } ;
typedef int SV ;
typedef TYPE_4__* FunctionCallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int * FUNC_8 (char*,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;
 int VAR_14 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static SV *
FUNC_16(plperl_proc_desc *VAR_15, FunctionCallInfo VAR_16,
         SV *VAR_17)
{
 VAR_13;
 VAR_12;
 SV *VAR_18,
      *VAR_19;
 int VAR_20,
    VAR_21;
 Trigger *VAR_22 = ((TriggerData *) VAR_16->context)->tg_trigger;

 VAR_0;
 VAR_10;

 VAR_19 = FUNC_8("main::_TD", 0);
 if (!VAR_19)
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("couldn't fetch $_TD")));

 FUNC_11(VAR_19);
 FUNC_15(VAR_19, VAR_17);

 FUNC_1(VAR_14);
 FUNC_0(VAR_14, VAR_22->tgnargs);

 for (VAR_20 = 0; VAR_20 < VAR_22->tgnargs; VAR_20++)
  FUNC_2(FUNC_14(FUNC_4(VAR_22->tgargs[VAR_20])));
 VAR_9;


 VAR_21 = FUNC_10(VAR_15->reference, VAR_6 | VAR_5);

 VAR_11;

 if (VAR_21 != 1)
 {
  VAR_9;
  VAR_4;
  VAR_7;
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("didn't get a return item from trigger function")));
 }

 if (FUNC_3(VAR_3))
 {
  (void) VAR_8;
  VAR_9;
  VAR_4;
  VAR_7;

  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("%s", FUNC_12(FUNC_13(VAR_3)))));
 }

 VAR_18 = FUNC_9(VAR_8);

 VAR_9;
 VAR_4;
 VAR_7;

 return VAR_18;
}
