
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_28__ {scalar_t__ relfrozenxid; scalar_t__ relminmxid; char relpersistence; scalar_t__ relallvisible; scalar_t__ reltuples; scalar_t__ relpages; void* relfilenode; } ;
struct TYPE_27__ {int t_self; } ;
struct TYPE_26__ {void* relNode; } ;
struct TYPE_25__ {int rd_newRelfilenodeSubid; TYPE_1__* rd_rel; TYPE_3__ rd_node; } ;
struct TYPE_24__ {int relkind; int relisshared; int reltablespace; } ;
typedef int SMgrRelation ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ RelFileNode ;
typedef void* Oid ;
typedef scalar_t__ MultiXactId ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 void* FUNC_8 (int ,int *,char) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int ) ;





 int VAR_3 ;
 int FUNC_11 (TYPE_3__,char) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ,void*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_22 (int ,int ) ;
 int FUNC_23 (TYPE_2__*,TYPE_3__*,char,scalar_t__*,scalar_t__*) ;

void
FUNC_24(Relation VAR_6, char VAR_7)
{
 Oid VAR_8;
 Relation VAR_9;
 HeapTuple VAR_10;
 Form_pg_class VAR_11;
 MultiXactId VAR_12 = VAR_1;
 TransactionId VAR_13 = VAR_2;
 RelFileNode VAR_14;


 VAR_8 = FUNC_8(VAR_6->rd_rel->reltablespace, ((void*)0),
            VAR_7);




 VAR_9 = FUNC_22(VAR_4, VAR_5);

 VAR_10 = FUNC_17(VAR_3,
        FUNC_10(FUNC_14(VAR_6)));
 if (!FUNC_9(VAR_10))
  FUNC_18(VAR_0, "could not find tuple for relation %u",
    FUNC_14(VAR_6));
 VAR_11 = (Form_pg_class) FUNC_5(VAR_10);




 FUNC_12(VAR_6);
 VAR_14 = VAR_6->rd_node;
 VAR_14.relNode = VAR_8;

 switch (VAR_6->rd_rel->relkind)
 {
  case 132:
  case 129:
   {

    SMgrRelation VAR_15;

    VAR_15 = FUNC_11(VAR_14, VAR_7);
    FUNC_20(VAR_15);
   }
   break;

  case 130:
  case 128:
  case 131:
   FUNC_23(VAR_6, &VAR_14,
           VAR_7,
           &VAR_13, &VAR_12);
   break;

  default:

   FUNC_18(VAR_0, "relation \"%s\" does not have storage",
     FUNC_13(VAR_6));
   break;
 }
 if (FUNC_15(VAR_6))
 {

  FUNC_0(VAR_6->rd_rel->relkind == 132);


  FUNC_0(VAR_11->relfrozenxid == VAR_13);
  FUNC_0(VAR_11->relminmxid == VAR_12);
  FUNC_0(VAR_11->relpersistence == VAR_7);







  (void) FUNC_7();


  FUNC_16(FUNC_14(VAR_6),
        VAR_8,
        VAR_6->rd_rel->relisshared,
        0);


  FUNC_1(VAR_6);
 }
 else
 {

  VAR_11->relfilenode = VAR_8;


  if (VAR_6->rd_rel->relkind != 129)
  {
   VAR_11->relpages = 0;
   VAR_11->reltuples = 0;
   VAR_11->relallvisible = 0;
  }
  VAR_11->relfrozenxid = VAR_13;
  VAR_11->relminmxid = VAR_12;
  VAR_11->relpersistence = VAR_7;

  FUNC_2(VAR_9, &VAR_10->t_self, VAR_10);
 }

 FUNC_19(VAR_10);

 FUNC_21(VAR_9, VAR_5);





 FUNC_3();






 VAR_6->rd_newRelfilenodeSubid = FUNC_6();


 FUNC_4(VAR_6);
}
