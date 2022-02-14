
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
typedef int TableScanDesc ;
struct TYPE_3__ {int oid; int datminmxid; int datfrozenxid; } ;
typedef int Relation ;
typedef int Oid ;
typedef int MultiXactId ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_database ;
typedef TYPE_1__ FormData_pg_database ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_4 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int * FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static void
FUNC_21(TransactionId VAR_5,
      MultiXactId VAR_6,
      TransactionId VAR_7,
      MultiXactId VAR_8)
{
 TransactionId VAR_9 = FUNC_5();
 Relation VAR_10;
 TableScanDesc VAR_11;
 HeapTuple VAR_12;
 Oid VAR_13;
 Oid VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;


 VAR_13 = VAR_3;
 VAR_14 = VAR_3;
 VAR_10 = FUNC_20(VAR_1, VAR_0);

 VAR_11 = FUNC_17(VAR_10, 0, ((void*)0));

 while ((VAR_12 = FUNC_16(VAR_11, VAR_2)) != ((void*)0))
 {
  volatile FormData_pg_database *VAR_17 = (Form_pg_database) FUNC_2(VAR_12);
  TransactionId VAR_18 = VAR_17->datfrozenxid;
  TransactionId VAR_19 = VAR_17->datminmxid;

  FUNC_1(FUNC_8(VAR_18));
  FUNC_1(FUNC_3(VAR_19));
  if (FUNC_9(VAR_7, VAR_18) ||
   FUNC_4(VAR_8, VAR_19))
   VAR_15 = 1;

  if (FUNC_9(VAR_9, VAR_18))
   VAR_16 = 1;
  else if (FUNC_9(VAR_18, VAR_5))
  {
   VAR_5 = VAR_18;
   VAR_13 = VAR_17->oid;
  }

  if (FUNC_4(VAR_19, VAR_6))
  {
   VAR_6 = VAR_19;
   VAR_14 = VAR_17->oid;
  }
 }

 FUNC_19(VAR_11);

 FUNC_18(VAR_10, VAR_0);







 if (VAR_16)
 {
  FUNC_13(VAR_4,
    (FUNC_15("some databases have not been vacuumed in over 2 billion transactions"),
     FUNC_14("You might have already suffered transaction-wraparound data loss.")));
  return;
 }


 if (VAR_15)
  return;
 FUNC_0(VAR_5);




 FUNC_10(VAR_5, VAR_13);
 FUNC_11(VAR_5);
 FUNC_12(VAR_6, VAR_14);







 FUNC_7(VAR_5, VAR_13);
 FUNC_6(VAR_6, VAR_14, 0);
}
