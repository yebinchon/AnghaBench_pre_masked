
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {int t_self; } ;
struct TYPE_25__ {int relId; int dbId; } ;
struct TYPE_22__ {TYPE_4__ lockRelId; } ;
struct TYPE_24__ {TYPE_2__* rd_rel; TYPE_1__ rd_lockInfo; } ;
struct TYPE_23__ {scalar_t__ relkind; } ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef TYPE_4__ LockRelId ;
typedef int LOCKTAG ;
typedef int LOCKMODE ;
typedef TYPE_5__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int ,int ) ;
 int VAR_11 ;
 int FUNC_18 (int ,int ,int ) ;
 TYPE_5__* FUNC_19 (int ,int ) ;
 int VAR_12 ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_4__*,int ) ;
 int FUNC_23 (int ,int ,int) ;
 int FUNC_24 (int ,char*,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (TYPE_5__*,int ,int ) ;
 int FUNC_29 (TYPE_3__*,int ) ;
 int FUNC_30 (int ,int ) ;
 TYPE_3__* FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_34 (int ,int ) ;

void
FUNC_35(Oid VAR_13, bool VAR_14, bool VAR_15)
{
 Oid VAR_16;
 Relation VAR_17;
 Relation VAR_18;
 Relation VAR_19;
 HeapTuple VAR_20;
 bool VAR_21;
 LockRelId VAR_22,
    VAR_23;
 LOCKTAG VAR_24;
 LOCKMODE VAR_25;
 VAR_16 = FUNC_9(VAR_13, 0);
 VAR_25 = (VAR_14 || VAR_15) ? VAR_12 : VAR_0;
 VAR_17 = FUNC_34(VAR_16, VAR_25);
 VAR_18 = FUNC_31(VAR_13, VAR_25);





 FUNC_2(VAR_18, "DROP INDEX");
 if (VAR_14)
 {
  if (FUNC_7() != VAR_8)
   FUNC_25(VAR_3,
     (FUNC_26(VAR_2),
      FUNC_27("DROP INDEX CONCURRENTLY must be first action in transaction")));




  FUNC_32(VAR_13, VAR_5);






  FUNC_0(VAR_17);


  VAR_22 = VAR_17->rd_lockInfo.lockRelId;
  FUNC_18(VAR_24, VAR_22.dbId, VAR_22.relId);
  VAR_23 = VAR_18->rd_lockInfo.lockRelId;

  FUNC_33(VAR_17, VAR_9);
  FUNC_29(VAR_18, VAR_9);
  FUNC_10(&VAR_22, VAR_12);
  FUNC_10(&VAR_23, VAR_12);

  FUNC_12();
  FUNC_3();
  FUNC_20();
  FUNC_23(VAR_24, VAR_0, 1);


  FUNC_30(VAR_16, VAR_13);





  FUNC_3();
  FUNC_20();





  FUNC_23(VAR_24, VAR_0, 1);
  VAR_17 = FUNC_34(VAR_16, VAR_12);
  VAR_18 = FUNC_31(VAR_13, VAR_0);
 }
 else
 {

  FUNC_21(VAR_18);
 }




 if (VAR_18->rd_rel->relkind != VAR_10)
  FUNC_13(VAR_18);






 FUNC_29(VAR_18, VAR_9);

 FUNC_14(VAR_13);




 VAR_19 = FUNC_34(VAR_6, VAR_11);

 VAR_20 = FUNC_19(VAR_4, FUNC_11(VAR_13));
 if (!FUNC_8(VAR_20))
  FUNC_24(VAR_3, "cache lookup failed for index %u", VAR_13);

 VAR_21 = !FUNC_28(VAR_20, VAR_1,
          FUNC_15(VAR_19));

 FUNC_1(VAR_19, &VAR_20->t_self);

 FUNC_16(VAR_20);
 FUNC_33(VAR_19, VAR_11);





 if (VAR_21)
  FUNC_17(VAR_13, 0);




 FUNC_4(VAR_13);




 FUNC_6(VAR_13);




 FUNC_5(VAR_13, VAR_7);
 FUNC_0(VAR_17);




 FUNC_33(VAR_17, VAR_9);




 if (VAR_14)
 {
  FUNC_22(&VAR_22, VAR_12);
  FUNC_22(&VAR_23, VAR_12);
 }
}
