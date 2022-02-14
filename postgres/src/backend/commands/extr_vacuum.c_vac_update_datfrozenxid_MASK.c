
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_4__ {scalar_t__ relkind; scalar_t__ relfrozenxid; scalar_t__ relminmxid; } ;
struct TYPE_3__ {scalar_t__ datfrozenxid; scalar_t__ datminmxid; } ;
typedef int SysScanDesc ;
typedef int Relation ;
typedef scalar_t__ MultiXactId ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_database ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ,int,int *,int ,int *) ;
 int FUNC_19 (int ) ;
 int * FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_24(void)
{
 HeapTuple VAR_12;
 Form_pg_database VAR_13;
 Relation VAR_14;
 SysScanDesc VAR_15;
 HeapTuple VAR_16;
 TransactionId VAR_17;
 MultiXactId VAR_18;
 TransactionId VAR_19;
 MultiXactId VAR_20;
 bool VAR_21 = 0;
 bool VAR_22 = 0;







 VAR_17 = FUNC_4(((void*)0), VAR_6);





 VAR_18 = FUNC_3();






 VAR_19 = FUNC_9();
 VAR_20 = FUNC_10();





 VAR_14 = FUNC_22(VAR_10, VAR_0);

 VAR_15 = FUNC_18(VAR_14, VAR_4, 0,
         ((void*)0), 0, ((void*)0));

 while ((VAR_16 = FUNC_20(VAR_15)) != ((void*)0))
 {
  Form_pg_class VAR_23 = (Form_pg_class) FUNC_2(VAR_16);





  if (VAR_23->relkind != VAR_8 &&
   VAR_23->relkind != VAR_7 &&
   VAR_23->relkind != VAR_9)
  {
   FUNC_0(!FUNC_13(VAR_23->relfrozenxid));
   FUNC_0(!FUNC_6(VAR_23->relminmxid));
   continue;
  }
  if (FUNC_13(VAR_23->relfrozenxid))
  {
   FUNC_0(FUNC_12(VAR_23->relfrozenxid));


   if (FUNC_14(VAR_19, VAR_23->relfrozenxid))
   {
    VAR_21 = 1;
    break;
   }


   if (FUNC_14(VAR_23->relfrozenxid, VAR_17))
    VAR_17 = VAR_23->relfrozenxid;
  }

  if (FUNC_6(VAR_23->relminmxid))
  {

   if (FUNC_7(VAR_20, VAR_23->relminmxid))
   {
    VAR_21 = 1;
    break;
   }


   if (FUNC_7(VAR_23->relminmxid, VAR_18))
    VAR_18 = VAR_23->relminmxid;
  }
 }


 FUNC_19(VAR_15);
 FUNC_21(VAR_14, VAR_0);


 if (VAR_21)
  return;

 FUNC_0(FUNC_12(VAR_17));
 FUNC_0(FUNC_6(VAR_18));


 VAR_14 = FUNC_22(VAR_2, VAR_11);


 VAR_12 = FUNC_11(VAR_1, FUNC_8(VAR_5));
 if (!FUNC_5(VAR_12))
  FUNC_15(VAR_3, "could not find tuple for database %u", VAR_5);
 VAR_13 = (Form_pg_database) FUNC_2(VAR_12);






 if (VAR_13->datfrozenxid != VAR_17 &&
  (FUNC_14(VAR_13->datfrozenxid, VAR_17) ||
   FUNC_14(VAR_19, VAR_13->datfrozenxid)))
 {
  VAR_13->datfrozenxid = VAR_17;
  VAR_22 = 1;
 }
 else
  VAR_17 = VAR_13->datfrozenxid;


 if (VAR_13->datminmxid != VAR_18 &&
  (FUNC_7(VAR_13->datminmxid, VAR_18) ||
   FUNC_7(VAR_20, VAR_13->datminmxid)))
 {
  VAR_13->datminmxid = VAR_18;
  VAR_22 = 1;
 }
 else
  VAR_18 = VAR_13->datminmxid;

 if (VAR_22)
  FUNC_17(VAR_14, VAR_12);

 FUNC_16(VAR_12);
 FUNC_21(VAR_14, VAR_11);






 if (VAR_22 || FUNC_1())
  FUNC_23(VAR_17, VAR_18,
        VAR_19, VAR_20);
}
