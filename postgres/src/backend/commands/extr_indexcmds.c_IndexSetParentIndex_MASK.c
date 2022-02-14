
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int isnull ;
struct TYPE_23__ {scalar_t__ inhparent; int inhrelid; } ;
struct TYPE_22__ {int t_self; } ;
struct TYPE_21__ {TYPE_2__* rd_index; TYPE_1__* rd_rel; } ;
struct TYPE_20__ {scalar_t__ indrelid; } ;
struct TYPE_19__ {scalar_t__ relkind; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_3__* Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_inherits ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int *,int,int ,int ,int ) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int ,scalar_t__,int ,int ) ;
 int FUNC_15 (int ,char*,int ,scalar_t__) ;
 TYPE_4__* FUNC_16 (int ,int *,int*) ;
 int FUNC_17 (int*,int,int) ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_3__*,int ,int,int *,int,int *) ;
 int FUNC_22 (int ) ;
 TYPE_4__* FUNC_23 (int ) ;
 int FUNC_24 (scalar_t__,scalar_t__) ;

void
FUNC_25(Relation VAR_17, Oid VAR_18)
{
 Relation VAR_19;
 ScanKeyData VAR_20[2];
 SysScanDesc VAR_21;
 Oid VAR_22 = FUNC_11(VAR_17);
 HeapTuple VAR_23;
 bool VAR_24;


 FUNC_0(VAR_17->rd_rel->relkind == VAR_13 ||
     VAR_17->rd_rel->relkind == VAR_14);




 VAR_19 = FUNC_20(VAR_9, VAR_16);
 FUNC_12(&VAR_20[0],
    VAR_1,
    VAR_3, VAR_8,
    FUNC_8(VAR_22));
 FUNC_12(&VAR_20[1],
    VAR_2,
    VAR_3, VAR_7,
    FUNC_6(1));
 VAR_21 = FUNC_21(VAR_19, VAR_10, 1,
         ((void*)0), 2, VAR_20);
 VAR_23 = FUNC_23(VAR_21);

 if (!FUNC_5(VAR_23))
 {
  if (VAR_18 == VAR_11)
  {




   VAR_24 = 0;
  }
  else
  {
   Datum VAR_25[VAR_12];
   bool VAR_26[VAR_12];





   VAR_25[VAR_1 - 1] = FUNC_8(VAR_22);
   VAR_25[VAR_0 - 1] =
    FUNC_8(VAR_18);
   VAR_25[VAR_2 - 1] = FUNC_6(1);
   FUNC_17(VAR_26, 0, sizeof(VAR_26));

   VAR_23 = FUNC_16(FUNC_10(VAR_19),
         VAR_25, VAR_26);
   FUNC_2(VAR_19, VAR_23);

   VAR_24 = 1;
  }
 }
 else
 {
  Form_pg_inherits VAR_27 = (Form_pg_inherits) FUNC_4(VAR_23);

  if (VAR_18 == VAR_11)
  {



   FUNC_1(VAR_19, &VAR_23->t_self);
   VAR_24 = 1;
  }
  else
  {





   if (VAR_27->inhparent != VAR_18)
   {

    FUNC_15(VAR_6, "bogus pg_inherit row: inhrelid %u inhparent %u",
      VAR_27->inhrelid, VAR_27->inhparent);
   }


   VAR_24 = 0;
  }
 }


 FUNC_22(VAR_21);
 FUNC_19(VAR_19, VAR_16);


 if (FUNC_9(VAR_18))
  FUNC_13(VAR_18, 1);


 FUNC_24(VAR_22, FUNC_9(VAR_18));

 if (VAR_24)
 {





  if (FUNC_9(VAR_18))
  {
   ObjectAddress VAR_28;
   ObjectAddress VAR_29;
   ObjectAddress VAR_30;

   FUNC_7(VAR_28, VAR_15, VAR_22);
   FUNC_7(VAR_29, VAR_15, VAR_18);
   FUNC_7(VAR_30, VAR_15,
        VAR_17->rd_index->indrelid);
   FUNC_18(&VAR_28, &VAR_29,
          VAR_4);
   FUNC_18(&VAR_28, &VAR_30,
          VAR_5);
  }
  else
  {
   FUNC_14(VAR_15, VAR_22,
           VAR_15,
           VAR_4);
   FUNC_14(VAR_15, VAR_22,
           VAR_15,
           VAR_5);
  }


  FUNC_3();
 }
}
