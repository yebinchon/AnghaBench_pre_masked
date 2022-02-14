
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint16 ;
struct TYPE_15__ {scalar_t__* values; } ;
typedef TYPE_1__ oidvector ;
typedef int int16 ;
struct TYPE_20__ {scalar_t__ oid; int amhandler; } ;
struct TYPE_19__ {int indnkeyatts; scalar_t__ indisvalid; } ;
struct TYPE_18__ {int amcanorder; } ;
struct TYPE_17__ {scalar_t__* ii_ExclusionOps; } ;
struct TYPE_16__ {int rd_att; } ;
struct TYPE_14__ {scalar_t__ atttypid; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef TYPE_3__ IndexInfo ;
typedef TYPE_4__ IndexAmRoutine ;
typedef int HeapTuple ;
typedef TYPE_5__* Form_pg_index ;
typedef TYPE_6__* Form_pg_am ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *,int *,scalar_t__,char const*,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__**,scalar_t__**,int **) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int*) ;
 TYPE_10__* FUNC_14 (int ,int) ;
 int FUNC_15 (int ,char*,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,char const*) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int ,int *) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_22 (scalar_t__,int ) ;
 int FUNC_23 (int *) ;
 TYPE_3__* FUNC_24 (int,int,scalar_t__,int ,int ,int,int,int) ;
 scalar_t__ FUNC_25 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_26 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_27 (int) ;

bool
FUNC_28(Oid VAR_12,
      const char *VAR_13,
      List *VAR_14,
      List *VAR_15)
{
 bool VAR_16;
 Oid *VAR_17;
 Oid *VAR_18;
 Oid *VAR_19;
 Oid VAR_20;
 Oid VAR_21;
 HeapTuple VAR_22;
 Form_pg_index VAR_23;
 Form_pg_am VAR_24;
 IndexAmRoutine *VAR_25;
 bool VAR_26;
 int16 *VAR_27;
 IndexInfo *VAR_28;
 int VAR_29;
 int VAR_30;
 bool VAR_31;
 bool VAR_32 = 1;
 oidvector *VAR_33;
 oidvector *VAR_34;
 Relation VAR_35;
 int VAR_36;
 Datum VAR_37;


 VAR_21 = FUNC_6(VAR_12, 0);





 VAR_16 = 0;

 VAR_29 = FUNC_23(VAR_14);
 FUNC_0(VAR_29 > 0);
 FUNC_0(VAR_29 <= VAR_9);


 VAR_22 = FUNC_12(VAR_0, FUNC_9(VAR_13));
 if (!FUNC_5(VAR_22))
  FUNC_16(VAR_7,
    (FUNC_17(VAR_6),
     FUNC_18("access method \"%s\" does not exist",
      VAR_13)));
 VAR_24 = (Form_pg_am) FUNC_3(VAR_22);
 VAR_20 = VAR_24->oid;
 VAR_25 = FUNC_4(VAR_24->amhandler);
 FUNC_11(VAR_22);

 VAR_26 = VAR_25->amcanorder;
 VAR_28 = FUNC_24(VAR_29, VAR_29,
         VAR_20, VAR_10, VAR_10, 0, 0, 0);
 VAR_17 = (Oid *) FUNC_27(VAR_29 * sizeof(Oid));
 VAR_18 = (Oid *) FUNC_27(VAR_29 * sizeof(Oid));
 VAR_19 = (Oid *) FUNC_27(VAR_29 * sizeof(Oid));
 VAR_27 = (int16 *) FUNC_27(VAR_29 * sizeof(int16));
 FUNC_1(VAR_28,
       VAR_17, VAR_18, VAR_19,
       VAR_27, VAR_14,
       VAR_15, VAR_21,
       VAR_13, VAR_20,
       VAR_26, VAR_16);



 VAR_22 = FUNC_12(VAR_8, FUNC_8(VAR_12));
 if (!FUNC_5(VAR_22))
  FUNC_15(VAR_7, "cache lookup failed for index %u", VAR_12);
 VAR_23 = (Form_pg_index) FUNC_3(VAR_22);





 if (!(FUNC_20(VAR_22, VAR_5, ((void*)0)) &&
    FUNC_20(VAR_22, VAR_4, ((void*)0)) &&
    VAR_23->indisvalid))
 {
  FUNC_11(VAR_22);
  return 0;
 }


 VAR_30 = VAR_23->indnkeyatts;
 FUNC_0(VAR_30 == VAR_29);

 VAR_37 = FUNC_13(VAR_8, VAR_22, VAR_3, &VAR_31);
 FUNC_0(!VAR_31);
 VAR_34 = (oidvector *) FUNC_2(VAR_37);

 VAR_37 = FUNC_13(VAR_8, VAR_22, VAR_2, &VAR_31);
 FUNC_0(!VAR_31);
 VAR_33 = (oidvector *) FUNC_2(VAR_37);

 VAR_32 = (FUNC_25(VAR_33->values, VAR_19,
      VAR_30 * sizeof(Oid)) == 0 &&
     FUNC_25(VAR_34->values, VAR_18,
      VAR_30 * sizeof(Oid)) == 0);

 FUNC_11(VAR_22);

 if (!VAR_32)
  return 0;


 VAR_35 = FUNC_22(VAR_12, VAR_1);
 for (VAR_36 = 0; VAR_36 < VAR_30; VAR_36++)
 {
  if (FUNC_7(FUNC_19(VAR_19[VAR_36])) &&
   FUNC_14(VAR_35->rd_att, VAR_36)->atttypid != VAR_17[VAR_36])
  {
   VAR_32 = 0;
   break;
  }
 }


 if (VAR_32 && VAR_28->ii_ExclusionOps != ((void*)0))
 {
  Oid *VAR_38,
       *VAR_39;
  uint16 *VAR_40;

  FUNC_10(VAR_35, &VAR_38, &VAR_39, &VAR_40);
  VAR_32 = FUNC_25(VAR_38, VAR_28->ii_ExclusionOps,
      VAR_30 * sizeof(Oid)) == 0;


  if (VAR_32)
  {
   for (VAR_36 = 0; VAR_36 < VAR_30 && VAR_32; VAR_36++)
   {
    Oid VAR_41,
       VAR_42;

    FUNC_26(VAR_28->ii_ExclusionOps[VAR_36], &VAR_41, &VAR_42);
    if ((FUNC_7(VAR_41) || FUNC_7(VAR_42)) &&
     FUNC_14(VAR_35->rd_att, VAR_36)->atttypid != VAR_17[VAR_36])
    {
     VAR_32 = 0;
     break;
    }
   }
  }
 }

 FUNC_21(VAR_35, VAR_11);
 return VAR_32;
}
