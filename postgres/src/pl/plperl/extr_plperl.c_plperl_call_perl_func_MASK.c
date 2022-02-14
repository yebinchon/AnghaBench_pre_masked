
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int nargs; int reference; int * arg_out_func; int * arg_arraytype; scalar_t__* arg_is_rowtype; } ;
typedef TYPE_4__ plperl_proc_desc ;
struct TYPE_14__ {TYPE_2__* prodesc; } ;
struct TYPE_13__ {TYPE_3__* args; TYPE_1__* flinfo; } ;
struct TYPE_11__ {int value; scalar_t__ isnull; } ;
struct TYPE_10__ {int trftypes; int lang_oid; } ;
struct TYPE_9__ {scalar_t__ fn_oid; } ;
typedef int SV ;
typedef int Oid ;
typedef TYPE_5__* FunctionCallInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (char*) ;
 TYPE_8__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (scalar_t__,int **,int*) ;
 int FUNC_14 (int ,int ,int ) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (int ) ;
 int * FUNC_19 (int ,int ) ;
 int VAR_17 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int * FUNC_22 (int *) ;

__attribute__((used)) static SV *
FUNC_23(plperl_proc_desc *VAR_18, FunctionCallInfo VAR_19)
{
 VAR_16;
 VAR_15;
 SV *VAR_20;
 int VAR_21;
 int VAR_22;
 Oid *VAR_23 = ((void*)0);
 int VAR_24 = 0;

 VAR_0;
 VAR_11;

 FUNC_6(VAR_12);
 FUNC_2(VAR_17, VAR_18->nargs);


 if (VAR_19->flinfo->fn_oid)
  FUNC_13(VAR_19->flinfo->fn_oid, &VAR_23, &VAR_24);
 FUNC_0(VAR_24 == VAR_18->nargs);

 for (VAR_21 = 0; VAR_21 < VAR_18->nargs; VAR_21++)
 {
  if (VAR_19->args[VAR_21].isnull)
   FUNC_7(&VAR_8);
  else if (VAR_18->arg_is_rowtype[VAR_21])
  {
   SV *VAR_25 = FUNC_18(VAR_19->args[VAR_21].value);

   FUNC_7(FUNC_22(VAR_25));
  }
  else
  {
   SV *VAR_26;
   Oid VAR_27;

   if (FUNC_4(VAR_18->arg_arraytype[VAR_21]))
    VAR_26 = FUNC_19(VAR_19->args[VAR_21].value, VAR_18->arg_arraytype[VAR_21]);
   else if ((VAR_27 = FUNC_14(VAR_23[VAR_21], VAR_14->prodesc->lang_oid, VAR_14->prodesc->trftypes)))
    VAR_26 = (SV *) FUNC_1(FUNC_3(VAR_27, VAR_19->args[VAR_21].value));
   else
   {
    char *VAR_28;

    VAR_28 = FUNC_5(&(VAR_18->arg_out_func[VAR_21]),
           VAR_19->args[VAR_21].value);
    VAR_26 = FUNC_9(VAR_28);
    FUNC_17(VAR_28);
   }

   FUNC_7(FUNC_22(VAR_26));
  }
 }
 VAR_10;


 VAR_22 = FUNC_16(VAR_18->reference, VAR_6 | VAR_5);

 VAR_13;

 if (VAR_22 != 1)
 {
  VAR_10;
  VAR_4;
  VAR_7;
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("didn't get a return item from function")));
 }

 if (FUNC_8(VAR_3))
 {
  (void) VAR_9;
  VAR_10;
  VAR_4;
  VAR_7;

  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("%s", FUNC_20(FUNC_21(VAR_3)))));
 }

 VAR_20 = FUNC_15(VAR_9);

 VAR_10;
 VAR_4;
 VAR_7;

 return VAR_20;
}
