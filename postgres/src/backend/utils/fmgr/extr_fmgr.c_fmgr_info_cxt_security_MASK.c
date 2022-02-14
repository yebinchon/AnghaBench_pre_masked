
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int func; int retset; int strict; int nargs; } ;
struct TYPE_10__ {void* fn_oid; void* fn_stats; int fn_addr; int fn_retset; int fn_strict; int fn_nargs; int * fn_expr; int fn_mcxt; int * fn_extra; } ;
struct TYPE_9__ {int prolang; scalar_t__ prosecdef; int proretset; int proisstrict; int pronargs; } ;
typedef void* Oid ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;
typedef TYPE_2__ FmgrInfo ;
typedef TYPE_3__ FmgrBuiltin ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 void* VAR_4 ;
 int FUNC_3 (void*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (void*,TYPE_2__*,int ) ;
 int FUNC_13 (void*,TYPE_2__*,int ) ;
 TYPE_3__* FUNC_14 (void*) ;
 TYPE_3__* FUNC_15 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (int ,int ,int *) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(Oid VAR_11, FmgrInfo *VAR_12, MemoryContext VAR_13,
        bool VAR_14)
{
 const FmgrBuiltin *VAR_15;
 HeapTuple VAR_16;
 Form_pg_proc VAR_17;
 Datum VAR_18;
 bool VAR_19;
 char *VAR_20;






 VAR_12->fn_oid = VAR_4;
 VAR_12->fn_extra = ((void*)0);
 VAR_12->fn_mcxt = VAR_13;
 VAR_12->fn_expr = ((void*)0);

 if ((VAR_15 = FUNC_14(VAR_11)) != ((void*)0))
 {



  VAR_12->fn_nargs = VAR_15->nargs;
  VAR_12->fn_strict = VAR_15->strict;
  VAR_12->fn_retset = VAR_15->retset;
  VAR_12->fn_stats = VAR_6;
  VAR_12->fn_addr = VAR_15->func;
  VAR_12->fn_oid = VAR_11;
  return;
 }


 VAR_16 = FUNC_5(VAR_5, FUNC_3(VAR_11));
 if (!FUNC_2(VAR_16))
  FUNC_8(VAR_3, "cache lookup failed for function %u", VAR_11);
 VAR_17 = (Form_pg_proc) FUNC_1(VAR_16);

 VAR_12->fn_nargs = VAR_17->pronargs;
 VAR_12->fn_strict = VAR_17->proisstrict;
 VAR_12->fn_retset = VAR_17->proretset;
 if (!VAR_14 &&
  (VAR_17->prosecdef ||
   !FUNC_16(VAR_16, VAR_0, ((void*)0)) ||
   FUNC_0(VAR_11)))
 {
  VAR_12->fn_addr = VAR_9;
  VAR_12->fn_stats = VAR_6;
  VAR_12->fn_oid = VAR_11;
  FUNC_4(VAR_16);
  return;
 }

 switch (VAR_17->prolang)
 {
  case 129:
   VAR_18 = FUNC_6(VAR_5, VAR_16,
            VAR_1, &VAR_19);
   if (VAR_19)
    FUNC_8(VAR_3, "null prosrc");
   VAR_20 = FUNC_7(VAR_18);
   VAR_15 = FUNC_15(VAR_20);
   if (VAR_15 == ((void*)0))
    FUNC_9(VAR_3,
      (FUNC_10(VAR_2),
       FUNC_11("internal function \"%s\" is not in internal lookup table",
        VAR_20)));
   FUNC_17(VAR_20);

   VAR_12->fn_addr = VAR_15->func;

   VAR_12->fn_stats = VAR_6;
   break;

  case 130:
   FUNC_12(VAR_11, VAR_12, VAR_16);
   VAR_12->fn_stats = VAR_8;
   break;

  case 128:
   VAR_12->fn_addr = VAR_10;
   VAR_12->fn_stats = VAR_8;
   break;

  default:
   FUNC_13(VAR_11, VAR_12, VAR_16);
   VAR_12->fn_stats = VAR_7;
   break;
 }

 VAR_12->fn_oid = VAR_11;
 FUNC_4(VAR_16);
}
