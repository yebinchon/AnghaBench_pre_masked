
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int valuesAtt ;
typedef int replacesAtt ;
typedef int nullsAtt ;
struct TYPE_29__ {char attgenerated; int attalign; int attbyval; int attlen; int atttypid; int atthasdef; } ;
struct TYPE_28__ {int t_self; } ;
struct TYPE_27__ {void* objectSubId; void* objectId; int classId; } ;
struct TYPE_26__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int Node ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int ExprState ;
typedef int ExprContext ;
typedef int Expr ;
typedef int EState ;
typedef int Datum ;
typedef void* AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_3__*) ;
 int * FUNC_3 () ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (int *,int *,int*) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 void* FUNC_9 (TYPE_1__*,int ,int) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,void*,void*,int) ;
 int FUNC_14 (int*,int,int) ;
 int VAR_14 ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*) ;
 void* FUNC_18 (TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_3__* FUNC_19 (int ,int,int ) ;
 TYPE_4__* FUNC_20 (int ,void*) ;
 int FUNC_21 (int*,int,int ,int ,int ,int ) ;
 int FUNC_22 (int ,char*,void*,void*) ;
 int * FUNC_23 (int *) ;
 TYPE_3__* FUNC_24 (int ,int*,int*) ;
 int FUNC_25 (TYPE_3__*) ;
 TYPE_3__* FUNC_26 (TYPE_3__*,int ,int*,int*,int*) ;
 char* FUNC_27 (int *) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_30 (TYPE_2__*,int *,void*,int ,int ,int) ;
 int FUNC_31 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_32 (int ,int ) ;

Oid
FUNC_33(Relation VAR_17, AttrNumber VAR_18,
     Node *VAR_19, bool VAR_20, bool VAR_21)
{
 char *VAR_22;
 Relation VAR_23;
 HeapTuple VAR_24;
 Datum VAR_25[4];
 static bool VAR_26[4] = {0, 0, 0, 0};
 Relation VAR_27;
 HeapTuple VAR_28;
 Form_pg_attribute VAR_29;
 char VAR_30;
 Oid VAR_31;
 ObjectAddress VAR_32,
    VAR_33;

 VAR_23 = FUNC_32(VAR_9, VAR_16);




 VAR_22 = FUNC_27(VAR_19);




 VAR_31 = FUNC_9(VAR_23, VAR_8,
         VAR_4);
 VAR_25[VAR_4 - 1] = FUNC_15(VAR_31);
 VAR_25[VAR_3 - 1] = FUNC_18(VAR_17);
 VAR_25[VAR_2 - 1] = VAR_18;
 VAR_25[VAR_1 - 1] = FUNC_0(VAR_22);

 VAR_24 = FUNC_24(VAR_23->rd_att, VAR_25, VAR_26);
 FUNC_1(VAR_23, VAR_24);

 VAR_33.classId = VAR_9;
 VAR_33.objectId = VAR_31;
 VAR_33.objectSubId = 0;

 FUNC_31(VAR_23, VAR_16);


 FUNC_28(FUNC_4(VAR_25[VAR_1 - 1]));
 FUNC_25(VAR_24);
 FUNC_28(VAR_22);





 VAR_27 = FUNC_32(VAR_10, VAR_16);
 VAR_28 = FUNC_19(VAR_0,
         FUNC_15(FUNC_18(VAR_17)),
         FUNC_12(VAR_18));
 if (!FUNC_11(VAR_28))
  FUNC_22(VAR_13, "cache lookup failed for attribute %d of relation %u",
    VAR_18, FUNC_18(VAR_17));
 VAR_29 = (Form_pg_attribute) FUNC_8(VAR_28);
 VAR_30 = VAR_29->attgenerated;
 if (!VAR_29->atthasdef)
 {
  Form_pg_attribute VAR_34;

  ExprState *VAR_35;
  Expr *VAR_36 = (Expr *) VAR_19;
  EState *VAR_37 = ((void*)0);
  ExprContext *VAR_38;
  Datum VAR_39[VAR_14];
  bool VAR_40[VAR_14];
  bool VAR_41[VAR_14];
  Datum VAR_42 = (Datum) 0;
  bool VAR_43 = 1;

  FUNC_14(VAR_39, 0, sizeof(VAR_39));
  FUNC_14(VAR_40, 0, sizeof(VAR_40));
  FUNC_14(VAR_41, 0, sizeof(VAR_41));
  VAR_39[VAR_5 - 1] = 1;
  VAR_41[VAR_5 - 1] = 1;

  if (VAR_21 && !VAR_30)
  {
   VAR_36 = FUNC_23(VAR_36);
   VAR_37 = FUNC_3();
   VAR_35 = FUNC_6(VAR_36, VAR_37);
   VAR_38 = FUNC_10(VAR_37);

   VAR_42 = FUNC_5(VAR_35, VAR_38,
           &VAR_43);

   FUNC_7(VAR_37);

   VAR_34 = FUNC_20(VAR_17->rd_att, VAR_18 - 1);

   if (VAR_43)
   {

    VAR_42 = (Datum) 0;
   }
   else
   {

    VAR_42 = FUNC_16(
            FUNC_21(&VAR_42,
                1,
                VAR_34->atttypid,
                VAR_34->attlen,
                VAR_34->attbyval,
                VAR_34->attalign));
   }

   VAR_39[VAR_6 - 1] = !VAR_43;
   VAR_41[VAR_6 - 1] = 1;
   VAR_39[VAR_7 - 1] = VAR_42;
   VAR_41[VAR_7 - 1] = 1;
   VAR_40[VAR_7 - 1] = VAR_43;
  }
  VAR_28 = FUNC_26(VAR_28, FUNC_17(VAR_27),
           VAR_39, VAR_40, VAR_41);

  FUNC_2(VAR_27, &VAR_28->t_self, VAR_28);

  if (!VAR_43)
   FUNC_28(FUNC_4(VAR_42));

 }
 FUNC_31(VAR_27, VAR_16);
 FUNC_25(VAR_28);





 VAR_32.classId = VAR_15;
 VAR_32.objectId = FUNC_18(VAR_17);
 VAR_32.objectSubId = VAR_18;

 FUNC_29(&VAR_33, &VAR_32, VAR_11);




 if (VAR_30)
 {




  FUNC_30(&VAR_32, VAR_19, FUNC_18(VAR_17),
          VAR_11,
          VAR_11, 0);
 }
 else
 {




  FUNC_30(&VAR_33, VAR_19, FUNC_18(VAR_17),
          VAR_12,
          VAR_12, 0);
 }
 FUNC_13(VAR_9,
          FUNC_18(VAR_17), VAR_18, VAR_20);

 return VAR_31;
}
