
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_12__ ;


struct TYPE_26__ {int has_not_null; int has_generated_stored; int num_defval; int num_check; int * check; TYPE_5__* missing; TYPE_6__* defval; } ;
typedef TYPE_2__ TupleConstr ;
struct TYPE_30__ {int adnum; int * adbin; } ;
struct TYPE_29__ {int am_present; int am_value; } ;
struct TYPE_28__ {int attnum; scalar_t__ attgenerated; int attlen; int attbyval; int attalign; scalar_t__ atthasmissing; scalar_t__ atthasdef; scalar_t__ attnotnull; } ;
struct TYPE_27__ {TYPE_14__* rd_att; TYPE_1__* rd_rel; } ;
struct TYPE_25__ {int relnatts; int relchecks; int reltype; } ;
struct TYPE_24__ {int tdtypmod; TYPE_2__* constr; int tdtypeid; } ;
struct TYPE_23__ {int attcacheoff; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_3__* Relation ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;
typedef int ConstrCheck ;
typedef TYPE_5__ AttrMissing ;
typedef TYPE_6__ AttrDefault ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,int ,int ,int ,int ) ;
 TYPE_12__* FUNC_14 (TYPE_14__*,int) ;
 int FUNC_15 (int ,int,int*,int,int ,int ,int ,int*) ;
 int VAR_14 ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,char*,int,int ) ;
 int FUNC_18 (int ,int ,TYPE_14__*,int*) ;
 int FUNC_19 (TYPE_12__*,TYPE_4__*,int ) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_6__*,int) ;
 int FUNC_22 (TYPE_3__*,int ,int ,int *,int,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_26 (int ,int ) ;

__attribute__((used)) static void
FUNC_27(Relation VAR_15)
{
 HeapTuple VAR_16;
 Relation VAR_17;
 SysScanDesc VAR_18;
 ScanKeyData VAR_19[2];
 int VAR_20;
 TupleConstr *VAR_21;
 AttrDefault *VAR_22 = ((void*)0);
 AttrMissing *VAR_23 = ((void*)0);
 int VAR_24 = 0;


 VAR_15->rd_att->tdtypeid = VAR_15->rd_rel->reltype;
 VAR_15->rd_att->tdtypmod = -1;

 VAR_21 = (TupleConstr *) FUNC_6(VAR_10,
            sizeof(TupleConstr));
 VAR_21->has_not_null = 0;
 VAR_21->has_generated_stored = 0;






 FUNC_13(&VAR_19[0],
    VAR_5,
    VAR_8, VAR_13,
    FUNC_9(FUNC_12(VAR_15)));
 FUNC_13(&VAR_19[1],
    VAR_4,
    VAR_9, VAR_12,
    FUNC_5(0));






 VAR_17 = FUNC_26(VAR_6, VAR_2);
 VAR_18 = FUNC_22(VAR_17,
             VAR_7,
             VAR_14,
             ((void*)0),
             2, VAR_19);




 VAR_20 = FUNC_10(VAR_15);

 while (FUNC_4(VAR_16 = FUNC_24(VAR_18)))
 {
  Form_pg_attribute VAR_25;
  int VAR_26;

  VAR_25 = (Form_pg_attribute) FUNC_3(VAR_16);

  VAR_26 = VAR_25->attnum;
  if (VAR_26 <= 0 || VAR_26 > FUNC_10(VAR_15))
   FUNC_17(VAR_11, "invalid attribute number %d for %s",
     VAR_25->attnum, FUNC_11(VAR_15));


  FUNC_19(FUNC_14(VAR_15->rd_att, VAR_26 - 1),
      VAR_25,
      VAR_0);


  if (VAR_25->attnotnull)
   VAR_21->has_not_null = 1;
  if (VAR_25->attgenerated == VAR_1)
   VAR_21->has_generated_stored = 1;


  if (VAR_25->atthasdef)
  {
   if (VAR_22 == ((void*)0))
    VAR_22 = (AttrDefault *)
     FUNC_7(VAR_10,
             FUNC_10(VAR_15) *
             sizeof(AttrDefault));
   VAR_22[VAR_24].adnum = VAR_26;
   VAR_22[VAR_24].adbin = ((void*)0);

   VAR_24++;
  }


  if (VAR_25->atthasmissing)
  {
   Datum VAR_27;
   bool VAR_28;


   VAR_27 = FUNC_18(VAR_16,
           VAR_3,
           VAR_17->rd_att,
           &VAR_28);
   if (!VAR_28)
   {

    MemoryContext VAR_29;
    bool VAR_30;
    int VAR_31 = 1;
    Datum VAR_32;

    if (VAR_23 == ((void*)0))
     VAR_23 = (AttrMissing *)
      FUNC_7(VAR_10,
              VAR_15->rd_rel->relnatts *
              sizeof(AttrMissing));

    VAR_32 = FUNC_15(VAR_27,
           1,
           &VAR_31,
           -1,
           VAR_25->attlen,
           VAR_25->attbyval,
           VAR_25->attalign,
           &VAR_30);
    FUNC_0(!VAR_30);
    if (VAR_25->attbyval)
    {

     VAR_23[VAR_26 - 1].am_value = VAR_32;
    }
    else
    {

     VAR_29 = FUNC_8(VAR_10);
     VAR_23[VAR_26 - 1].am_value = FUNC_16(VAR_32,
                 VAR_25->attbyval,
                 VAR_25->attlen);
     FUNC_8(VAR_29);
    }
    VAR_23[VAR_26 - 1].am_present = 1;
   }
  }
  VAR_20--;
  if (VAR_20 == 0)
   break;
 }




 FUNC_23(VAR_18);
 FUNC_25(VAR_17, VAR_2);

 if (VAR_20 != 0)
  FUNC_17(VAR_11, "catalog is missing %d attribute(s) for relid %u",
    VAR_20, FUNC_12(VAR_15));
 if (FUNC_10(VAR_15) > 0)
  FUNC_14(VAR_15->rd_att, 0)->attcacheoff = 0;




 if (VAR_21->has_not_null || VAR_24 > 0 ||
  VAR_23 || VAR_15->rd_rel->relchecks)
 {
  VAR_15->rd_att->constr = VAR_21;

  if (VAR_24 > 0)
  {
   if (VAR_24 < FUNC_10(VAR_15))
    VAR_21->defval = (AttrDefault *)
     FUNC_21(VAR_22, VAR_24 * sizeof(AttrDefault));
   else
    VAR_21->defval = VAR_22;
   VAR_21->num_defval = VAR_24;
   FUNC_1(VAR_15);
  }
  else
   VAR_21->num_defval = 0;

  VAR_21->missing = VAR_23;

  if (VAR_15->rd_rel->relchecks > 0)
  {
   VAR_21->num_check = VAR_15->rd_rel->relchecks;
   VAR_21->check = (ConstrCheck *)
    FUNC_7(VAR_10,
            VAR_21->num_check * sizeof(ConstrCheck));
   FUNC_2(VAR_15);
  }
  else
   VAR_21->num_check = 0;
 }
 else
 {
  FUNC_20(VAR_21);
  VAR_15->rd_att->constr = ((void*)0);
 }
}
