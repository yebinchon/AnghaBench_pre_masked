
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ fn_strict; } ;
struct fp_info {int fname; int rettype; TYPE_7__ flinfo; int namespace; } ;
typedef int int16 ;
struct TYPE_10__ {int nargs; int isnull; TYPE_1__* args; } ;
struct TYPE_9__ {scalar_t__ isnull; } ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef scalar_t__ Datum ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__,TYPE_7__*,int ,int ,int *,int *) ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int,int ,int ) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,...) ;
 TYPE_2__* VAR_12 ;
 int FUNC_18 (scalar_t__,struct fp_info*) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_21 (int ,struct fp_info*,TYPE_2__*) ;
 int FUNC_22 (int ,struct fp_info*,TYPE_2__*) ;
 scalar_t__ FUNC_23 (int ,int ,int ) ;
 scalar_t__ FUNC_24 (scalar_t__,int ,int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ,int) ;
 int FUNC_27 (int ) ;

void
FUNC_28(StringInfo VAR_14)
{
 FUNC_8(VAR_12, VAR_5);
 Oid VAR_15;
 AclResult VAR_16;
 int16 VAR_17;
 Datum VAR_18;
 struct fp_info VAR_19;
 struct fp_info *VAR_20;
 bool VAR_21;
 bool VAR_22 = 0;
 char VAR_23[32];





 if (FUNC_7())
  FUNC_15(VAR_4,
    (FUNC_16(VAR_3),
     FUNC_17("current transaction is aborted, "
      "commands ignored until end of transaction block")));





 FUNC_11(FUNC_2());




 if (FUNC_9(VAR_6) < 3)
  (void) FUNC_27(VAR_14);

 VAR_15 = (Oid) FUNC_26(VAR_14, 4);





 VAR_20 = &VAR_19;
 FUNC_18(VAR_15, VAR_20);


 if (VAR_13 == VAR_9)
 {
  FUNC_15(VAR_8,
    (FUNC_17("fastpath function call: \"%s\" (OID %u)",
      VAR_20->fname, VAR_15)));
  VAR_22 = 1;
 }





 VAR_16 = FUNC_23(VAR_20->namespace, FUNC_3(), VAR_2);
 if (VAR_16 != VAR_0)
  FUNC_13(VAR_16, VAR_11,
        FUNC_20(VAR_20->namespace));
 FUNC_6(VAR_20->namespace, 1);

 VAR_16 = FUNC_24(VAR_15, FUNC_3(), VAR_1);
 if (VAR_16 != VAR_0)
  FUNC_13(VAR_16, VAR_10,
        FUNC_19(VAR_15));
 FUNC_5(VAR_15);
 FUNC_4(*VAR_12, &VAR_20->flinfo, 0, VAR_7, ((void*)0), ((void*)0));

 if (FUNC_9(VAR_6) >= 3)
  VAR_17 = FUNC_21(VAR_14, VAR_20, VAR_12);
 else
  VAR_17 = FUNC_22(VAR_14, VAR_20, VAR_12);


 FUNC_25(VAR_14);




 VAR_21 = 1;
 if (VAR_20->flinfo.fn_strict)
 {
  int VAR_24;

  for (VAR_24 = 0; VAR_24 < VAR_12->nargs; VAR_24++)
  {
   if (VAR_12->args[VAR_24].isnull)
   {
    VAR_21 = 0;
    break;
   }
  }
 }

 if (VAR_21)
 {

  VAR_18 = FUNC_1(VAR_12);
 }
 else
 {
  VAR_12->isnull = 1;
  VAR_18 = (Datum) 0;
 }


 FUNC_0();

 FUNC_12(VAR_18, VAR_12->isnull, VAR_20->rettype, VAR_17);


 FUNC_10();




 switch (FUNC_14(VAR_23, VAR_22))
 {
  case 1:
   FUNC_15(VAR_8,
     (FUNC_17("duration: %s ms", VAR_23)));
   break;
  case 2:
   FUNC_15(VAR_8,
     (FUNC_17("duration: %s ms  fastpath function call: \"%s\" (OID %u)",
       VAR_23, VAR_20->fname, VAR_15)));
   break;
 }
}
