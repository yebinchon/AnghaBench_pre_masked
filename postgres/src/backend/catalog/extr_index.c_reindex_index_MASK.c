
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_31__ {int indisvalid; int indisready; int indislive; int indcheckxmin; } ;
struct TYPE_30__ {int t_self; } ;
struct TYPE_29__ {int ii_Unique; int ii_BrokenHotChain; int * ii_ExclusionStrats; int * ii_ExclusionProcs; int * ii_ExclusionOps; } ;
struct TYPE_28__ {TYPE_1__* rd_rel; } ;
struct TYPE_27__ {scalar_t__ relkind; int relam; } ;
typedef TYPE_2__* Relation ;
typedef int PGRUsage ;
typedef int Oid ;
typedef TYPE_3__ IndexInfo ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_index ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,char) ;
 int FUNC_15 () ;
 int VAR_15 ;
 TYPE_4__* FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int VAR_16 ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,char*,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (TYPE_2__*,TYPE_2__*,TYPE_3__*,int,int) ;
 int FUNC_26 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_27 (int ,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 () ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_34 (int ,int ) ;

void
FUNC_35(Oid VAR_17, bool VAR_18, char VAR_19,
     int VAR_20)
{
 Relation VAR_21,
    VAR_22;
 Oid VAR_23;
 IndexInfo *VAR_24;
 volatile bool VAR_25 = 0;
 PGRUsage VAR_26;
 bool VAR_27 = (VAR_20 & VAR_12) != 0;

 FUNC_28(&VAR_26);





 VAR_23 = FUNC_7(VAR_17, 0);
 VAR_22 = FUNC_34(VAR_23, VAR_16);

 if (VAR_27)
 {
  FUNC_31(VAR_7,
           VAR_23);
  FUNC_32(VAR_9,
          VAR_10);
  FUNC_32(VAR_11,
          VAR_17);
 }





 VAR_21 = FUNC_27(VAR_17, VAR_0);

 if (VAR_27)
  FUNC_32(VAR_8,
          VAR_21->rd_rel->relam);





 if (VAR_21->rd_rel->relkind == VAR_14)
  FUNC_19(VAR_2, "unsupported relation kind for index \"%s\"",
    FUNC_13(VAR_21));





 if (FUNC_12(VAR_21))
  FUNC_20(VAR_2,
    (FUNC_21(VAR_1),
     FUNC_23("cannot reindex temporary tables of other sessions")));





 FUNC_3(VAR_21, "REINDEX INDEX");





 FUNC_18(VAR_21);


 VAR_24 = FUNC_0(VAR_21);


 if (VAR_18)
 {
  if (VAR_24->ii_Unique || VAR_24->ii_ExclusionOps != ((void*)0))
   VAR_25 = 1;
  VAR_24->ii_Unique = 0;
  VAR_24->ii_ExclusionOps = ((void*)0);
  VAR_24->ii_ExclusionProcs = ((void*)0);
  VAR_24->ii_ExclusionStrats = ((void*)0);
 }


 FUNC_11();
 {

  FUNC_17(VAR_23, VAR_17);


  FUNC_14(VAR_21, VAR_19);



  FUNC_25(VAR_22, VAR_21, VAR_24, 1, 1);
 }
 FUNC_10();
 {

  FUNC_15();
 }
 FUNC_9();
 if (!VAR_25)
 {
  Relation VAR_28;
  HeapTuple VAR_29;
  Form_pg_index VAR_30;
  bool VAR_31;
  bool VAR_32 = FUNC_4(VAR_22);

  VAR_28 = FUNC_34(VAR_5, VAR_15);

  VAR_29 = FUNC_16(VAR_3,
           FUNC_8(VAR_17));
  if (!FUNC_6(VAR_29))
   FUNC_19(VAR_2, "cache lookup failed for index %u", VAR_17);
  VAR_30 = (Form_pg_index) FUNC_5(VAR_29);

  VAR_31 = (!VAR_30->indisvalid ||
      !VAR_30->indisready ||
      !VAR_30->indislive);
  if (VAR_31 ||
   (VAR_30->indcheckxmin && !VAR_24->ii_BrokenHotChain) ||
   VAR_32)
  {
   if (!VAR_24->ii_BrokenHotChain && !VAR_32)
    VAR_30->indcheckxmin = 0;
   else if (VAR_31 || VAR_32)
    VAR_30->indcheckxmin = 1;
   VAR_30->indisvalid = 1;
   VAR_30->indisready = 1;
   VAR_30->indislive = 1;
   FUNC_2(VAR_28, &VAR_29->t_self, VAR_29);
   FUNC_1(VAR_22);
  }

  FUNC_33(VAR_28, VAR_15);
 }


 if (VAR_20 & VAR_13)
  FUNC_20(VAR_4,
    (FUNC_23("index \"%s\" was reindexed",
      FUNC_24(VAR_17)),
     FUNC_22("%s",
         FUNC_29(&VAR_26))));

 if (VAR_27)
  FUNC_30();


 FUNC_26(VAR_21, VAR_6);
 FUNC_33(VAR_22, VAR_6);
}
