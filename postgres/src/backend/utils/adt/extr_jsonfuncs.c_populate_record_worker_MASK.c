
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int text ;
struct TYPE_30__ {scalar_t__ len; int * data; } ;
struct TYPE_31__ {TYPE_4__ binary; } ;
struct TYPE_35__ {TYPE_5__ val; int type; } ;
struct TYPE_26__ {int base_typmod; int base_typid; } ;
struct TYPE_32__ {TYPE_14__ composite; } ;
struct TYPE_33__ {TYPE_6__ io; } ;
struct TYPE_34__ {scalar_t__ argtype; TYPE_7__ c; int fn_mcxt; } ;
struct TYPE_28__ {int type; int len; int str; } ;
struct TYPE_29__ {TYPE_9__* jsonb; TYPE_2__ json; } ;
struct TYPE_27__ {TYPE_8__* fn_extra; int fn_mcxt; } ;
struct TYPE_25__ {TYPE_1__* flinfo; } ;
struct TYPE_24__ {int is_json; TYPE_3__ val; int member_0; } ;
struct TYPE_23__ {int root; } ;
typedef TYPE_8__ PopulateRecordCache ;
typedef int MemoryContext ;
typedef TYPE_9__ JsonbValue ;
typedef TYPE_10__ Jsonb ;
typedef TYPE_11__ JsValue ;
typedef int * HeapTupleHeader ;
typedef TYPE_12__* FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_8__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (int ) ;
 TYPE_10__* FUNC_6 (int) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_12 (TYPE_10__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_12__*,char const*,TYPE_8__*) ;
 int FUNC_15 (TYPE_12__*,char const*,TYPE_8__*) ;
 int VAR_3 ;
 int FUNC_16 (TYPE_14__*,scalar_t__,int *,int ,int *,TYPE_11__*,int) ;

__attribute__((used)) static Datum
FUNC_17(FunctionCallInfo VAR_4, const char *VAR_5,
        bool VAR_6, bool VAR_7)
{
 int VAR_8 = VAR_7 ? 1 : 0;
 JsValue VAR_9 = {0};
 HeapTupleHeader VAR_10;
 Datum VAR_11;
 JsonbValue VAR_12;
 MemoryContext VAR_13 = VAR_4->flinfo->fn_mcxt;
 PopulateRecordCache *VAR_14 = VAR_4->flinfo->fn_extra;






 if (!VAR_14)
 {
  VAR_4->flinfo->fn_extra = VAR_14 =
   FUNC_3(VAR_13, sizeof(*VAR_14));
  VAR_14->fn_mcxt = VAR_13;

  if (VAR_7)
   FUNC_14(VAR_4, VAR_5, VAR_14);
  else
   FUNC_15(VAR_4, VAR_5, VAR_14);
 }


 if (!VAR_7)
  VAR_10 = ((void*)0);
 else if (!FUNC_4(0))
 {
  VAR_10 = FUNC_5(0);





  if (VAR_14->argtype == VAR_1)
  {
   VAR_14->c.io.composite.base_typid = FUNC_2(VAR_10);
   VAR_14->c.io.composite.base_typmod = FUNC_1(VAR_10);
  }
 }
 else
 {
  VAR_10 = ((void*)0);





  if (VAR_14->argtype == VAR_1)
  {
   FUNC_15(VAR_4, VAR_5, VAR_14);

   FUNC_0(VAR_14->argtype == VAR_1);
  }
 }


 if (FUNC_4(VAR_8))
 {
  if (VAR_10)
   FUNC_10(VAR_10);
  else
   FUNC_9();
 }

 VAR_9.is_json = VAR_6;

 if (VAR_6)
 {
  text *VAR_15 = FUNC_7(VAR_8);

  VAR_9.val.json.str = FUNC_11(VAR_15);
  VAR_9.val.json.len = FUNC_13(VAR_15);
  VAR_9.val.json.type = VAR_0;

 }
 else
 {
  Jsonb *VAR_16 = FUNC_6(VAR_8);

  VAR_9.val.jsonb = &VAR_12;


  VAR_12.type = VAR_3;
  VAR_12.val.binary.data = &VAR_16->root;
  VAR_12.val.binary.len = FUNC_12(VAR_16) - VAR_2;
 }

 VAR_11 = FUNC_16(&VAR_14->c.io.composite, VAR_14->argtype,
          ((void*)0), VAR_13, VAR_10, &VAR_9, 0);

 FUNC_8(VAR_11);
}
