
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef scalar_t__ float4 ;
typedef int TableScanDesc ;
struct TYPE_2__ {scalar_t__ relkind; int relhasindex; scalar_t__ relpages; scalar_t__ reltuples; scalar_t__ relallvisible; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int,int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_21(Relation VAR_10,
       bool VAR_11,
       double VAR_12)
{
 Oid VAR_13 = FUNC_8(VAR_10);
 Relation VAR_14;
 HeapTuple VAR_15;
 Form_pg_class VAR_16;
 bool VAR_17;
 VAR_14 = FUNC_19(VAR_8, VAR_9);






 if (FUNC_4() ||
  FUNC_6(VAR_8))
 {

  TableScanDesc VAR_18;
  ScanKeyData VAR_19[1];

  FUNC_9(&VAR_19[0],
     VAR_0,
     VAR_1, VAR_3,
     FUNC_5(VAR_13));

  VAR_18 = FUNC_16(VAR_14, 1, VAR_19);
  VAR_15 = FUNC_14(VAR_18, VAR_4);
  VAR_15 = FUNC_12(VAR_15);
  FUNC_18(VAR_18);
 }
 else
 {

  VAR_15 = FUNC_10(VAR_7, FUNC_5(VAR_13));
 }

 if (!FUNC_3(VAR_15))
  FUNC_11(VAR_2, "could not find tuple for relation %u", VAR_13);
 VAR_16 = (Form_pg_class) FUNC_2(VAR_15);


 FUNC_0(VAR_16->relkind != VAR_6);



 VAR_17 = 0;
 if (VAR_16->relhasindex != VAR_11)
 {
  VAR_16->relhasindex = VAR_11;
  VAR_17 = 1;
 }

 if (VAR_12 >= 0)
 {
  BlockNumber VAR_20 = FUNC_7(VAR_10);
  BlockNumber VAR_21;

  if (VAR_16->relkind != VAR_5)
   FUNC_20(VAR_10, &VAR_21, ((void*)0));
  else
   VAR_21 = 0;

  if (VAR_16->relpages != (int32) VAR_20)
  {
   VAR_16->relpages = (int32) VAR_20;
   VAR_17 = 1;
  }
  if (VAR_16->reltuples != (float4) VAR_12)
  {
   VAR_16->reltuples = (float4) VAR_12;
   VAR_17 = 1;
  }
  if (VAR_16->relallvisible != (int32) VAR_21)
  {
   VAR_16->relallvisible = (int32) VAR_21;
   VAR_17 = 1;
  }
 }




 if (VAR_17)
 {
  FUNC_15(VAR_14, VAR_15);

 }
 else
 {

  FUNC_1(VAR_15);
 }

 FUNC_13(VAR_15);

 FUNC_17(VAR_14, VAR_9);
}
