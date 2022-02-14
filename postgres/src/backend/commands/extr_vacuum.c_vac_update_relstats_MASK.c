
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef scalar_t__ float4 ;
typedef int TransactionId ;
struct TYPE_9__ {scalar_t__ relpages; scalar_t__ reltuples; scalar_t__ relallvisible; int relhasindex; int relhasrules; int relhastriggers; int relminmxid; int relfrozenxid; } ;
struct TYPE_8__ {int * trigdesc; int * rd_rules; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int MultiXactId ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_14 (int ,int ) ;

void
FUNC_15(Relation VAR_4,
     BlockNumber VAR_5, double VAR_6,
     BlockNumber VAR_7,
     bool VAR_8, TransactionId VAR_9,
     MultiXactId VAR_10,
     bool VAR_11)
{
 Oid VAR_12 = FUNC_7(VAR_4);
 Relation VAR_13;
 HeapTuple VAR_14;
 Form_pg_class VAR_15;
 bool VAR_16;

 VAR_13 = FUNC_14(VAR_2, VAR_3);


 VAR_14 = FUNC_8(VAR_1, FUNC_4(VAR_12));
 if (!FUNC_1(VAR_14))
  FUNC_11(VAR_0, "pg_class entry for relid %u vanished during vacuuming",
    VAR_12);
 VAR_15 = (Form_pg_class) FUNC_0(VAR_14);



 VAR_16 = 0;
 if (VAR_15->relpages != (int32) VAR_5)
 {
  VAR_15->relpages = (int32) VAR_5;
  VAR_16 = 1;
 }
 if (VAR_15->reltuples != (float4) VAR_6)
 {
  VAR_15->reltuples = (float4) VAR_6;
  VAR_16 = 1;
 }
 if (VAR_15->relallvisible != (int32) VAR_7)
 {
  VAR_15->relallvisible = (int32) VAR_7;
  VAR_16 = 1;
 }



 if (!VAR_11)
 {



  if (VAR_15->relhasindex && !VAR_8)
  {
   VAR_15->relhasindex = 0;
   VAR_16 = 1;
  }


  if (VAR_15->relhasrules && VAR_4->rd_rules == ((void*)0))
  {
   VAR_15->relhasrules = 0;
   VAR_16 = 1;
  }
  if (VAR_15->relhastriggers && VAR_4->trigdesc == ((void*)0))
  {
   VAR_15->relhastriggers = 0;
   VAR_16 = 1;
  }
 }
 if (FUNC_9(VAR_9) &&
  VAR_15->relfrozenxid != VAR_9 &&
  (FUNC_10(VAR_15->relfrozenxid, VAR_9) ||
   FUNC_10(FUNC_5(),
          VAR_15->relfrozenxid)))
 {
  VAR_15->relfrozenxid = VAR_9;
  VAR_16 = 1;
 }


 if (FUNC_2(VAR_10) &&
  VAR_15->relminmxid != VAR_10 &&
  (FUNC_3(VAR_15->relminmxid, VAR_10) ||
   FUNC_3(FUNC_6(), VAR_15->relminmxid)))
 {
  VAR_15->relminmxid = VAR_10;
  VAR_16 = 1;
 }


 if (VAR_16)
  FUNC_12(VAR_13, VAR_14);

 FUNC_13(VAR_13, VAR_3);
}
