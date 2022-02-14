
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int mapped_tables ;
typedef int TransactionId ;
struct TYPE_20__ {int relminmxid; int relfrozenxid; } ;
struct TYPE_19__ {int t_self; } ;
struct TYPE_18__ {scalar_t__ objectSubId; scalar_t__ objectId; scalar_t__ classId; } ;
struct TYPE_17__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {scalar_t__ reltoastrelid; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ ObjectAddress ;
typedef int MultiXactId ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_class ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (scalar_t__,char*,int,int) ;
 int VAR_18 ;
 TYPE_4__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int FUNC_11 (scalar_t__*,int ,int) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (scalar_t__,int,int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (char*,int,char*,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__,int,int,int,int ,int ,scalar_t__*) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_19 (scalar_t__,int ) ;
 scalar_t__ FUNC_20 (scalar_t__,int ) ;

void
FUNC_21(Oid VAR_19, Oid VAR_20,
     bool VAR_21,
     bool VAR_22,
     bool VAR_23,
     bool VAR_24,
     TransactionId VAR_25,
     MultiXactId VAR_26,
     char VAR_27)
{
 ObjectAddress VAR_28;
 Oid VAR_29[4];
 int VAR_30;
 int VAR_31;


 FUNC_13(VAR_6,
         VAR_9);


 FUNC_11(VAR_29, 0, sizeof(VAR_29));





 FUNC_17(VAR_19, VAR_20,
      (VAR_19 == VAR_17),
      VAR_22, VAR_24,
      VAR_25, VAR_26, VAR_29);





 if (VAR_21)
  FUNC_0(VAR_19);
 VAR_30 = VAR_13;
 if (VAR_23)
  VAR_30 |= VAR_10;





 if (VAR_27 == VAR_16)
  VAR_30 |= VAR_12;
 else if (VAR_27 == VAR_15)
  VAR_30 |= VAR_11;


 FUNC_13(VAR_6,
         VAR_8);

 FUNC_14(VAR_19, VAR_30, 0);


 FUNC_13(VAR_6,
         VAR_7);
 if (VAR_19 == VAR_17)
 {
  Relation VAR_32;
  HeapTuple VAR_33;
  Form_pg_class VAR_34;

  VAR_32 = FUNC_19(VAR_17, VAR_18);

  VAR_33 = FUNC_9(VAR_14, FUNC_4(VAR_19));
  if (!FUNC_3(VAR_33))
   FUNC_10(VAR_2, "cache lookup failed for relation %u", VAR_19);
  VAR_34 = (Form_pg_class) FUNC_2(VAR_33);

  VAR_34->relfrozenxid = VAR_25;
  VAR_34->relminmxid = VAR_26;

  FUNC_1(VAR_32, &VAR_33->t_self, VAR_33);

  FUNC_18(VAR_32, VAR_18);
 }


 VAR_28.classId = VAR_17;
 VAR_28.objectId = VAR_20;
 VAR_28.objectSubId = 0;





 FUNC_12(&VAR_28, VAR_1, VAR_5);
 for (VAR_31 = 0; FUNC_5(VAR_29[VAR_31]); VAR_31++)
  FUNC_7(VAR_29[VAR_31]);
 if (!VAR_22)
 {
  Relation VAR_35;

  VAR_35 = FUNC_19(VAR_19, VAR_4);
  if (FUNC_5(VAR_35->rd_rel->reltoastrelid))
  {
   Oid VAR_36;
   char VAR_37[VAR_3];


   VAR_36 = FUNC_20(VAR_35->rd_rel->reltoastrelid,
            VAR_0);


   FUNC_16(VAR_37, VAR_3, "pg_toast_%u",
      VAR_19);
   FUNC_8(VAR_35->rd_rel->reltoastrelid,
           VAR_37, 1, 0);


   FUNC_16(VAR_37, VAR_3, "pg_toast_%u_index",
      VAR_19);

   FUNC_8(VAR_36,
           VAR_37, 1, 1);
  }
  FUNC_15(VAR_35, VAR_4);
 }


 if (!VAR_21)
 {
  Relation VAR_38;

  VAR_38 = FUNC_19(VAR_19, VAR_4);
  FUNC_6(VAR_38);
  FUNC_15(VAR_38, VAR_4);
 }
}
