
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int indisclustered; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {scalar_t__ relkind; scalar_t__ relisshared; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_index ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ,int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_2__*,int ,int) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_23 (int ,int ) ;

void
FUNC_24(Oid VAR_12, Oid VAR_13, int VAR_14)
{
 Relation VAR_15;
 bool VAR_16 = ((VAR_14 & VAR_2) != 0);
 bool VAR_17 = ((VAR_14 & VAR_1) != 0);


 FUNC_0();

 FUNC_19(VAR_9, VAR_12);
 if (FUNC_6(VAR_13))
  FUNC_20(VAR_6,
          VAR_7);
 else
  FUNC_20(VAR_6,
          VAR_8);







 VAR_15 = FUNC_23(VAR_12, VAR_0);


 if (!VAR_15)
 {
  FUNC_18();
  return;
 }
 if (VAR_17)
 {
  HeapTuple VAR_18;
  Form_pg_index VAR_19;


  if (!FUNC_17(VAR_12, FUNC_3()))
  {
   FUNC_22(VAR_15, VAR_0);
   FUNC_18();
   return;
  }
  if (FUNC_7(VAR_15))
  {
   FUNC_22(VAR_15, VAR_0);
   FUNC_18();
   return;
  }

  if (FUNC_6(VAR_13))
  {



   if (!FUNC_11(VAR_11, FUNC_5(VAR_13)))
   {
    FUNC_22(VAR_15, VAR_0);
    FUNC_18();
    return;
   }




   VAR_18 = FUNC_10(VAR_5, FUNC_5(VAR_13));
   if (!FUNC_4(VAR_18))
   {
    FUNC_22(VAR_15, VAR_0);
    FUNC_18();
    return;
   }
   VAR_19 = (Form_pg_index) FUNC_2(VAR_18);
   if (!VAR_19->indisclustered)
   {
    FUNC_9(VAR_18);
    FUNC_22(VAR_15, VAR_0);
    FUNC_18();
    return;
   }
   FUNC_9(VAR_18);
  }
 }







 if (FUNC_6(VAR_13) && VAR_15->rd_rel->relisshared)
  FUNC_14(VAR_4,
    (FUNC_15(VAR_3),
     FUNC_16("cannot cluster a shared catalog")));





 if (FUNC_7(VAR_15))
 {
  if (FUNC_6(VAR_13))
   FUNC_14(VAR_4,
     (FUNC_15(VAR_3),
      FUNC_16("cannot cluster temporary tables of other sessions")));
  else
   FUNC_14(VAR_4,
     (FUNC_15(VAR_3),
      FUNC_16("cannot vacuum temporary tables of other sessions")));
 }





 FUNC_1(VAR_15, FUNC_6(VAR_13) ? "CLUSTER" : "VACUUM");


 if (FUNC_6(VAR_13))
  FUNC_13(VAR_15, VAR_13, VAR_17, VAR_0);
 if (VAR_15->rd_rel->relkind == VAR_10 &&
  !FUNC_8(VAR_15))
 {
  FUNC_22(VAR_15, VAR_0);
  FUNC_18();
  return;
 }







 FUNC_12(VAR_15);


 FUNC_21(VAR_15, VAR_13, VAR_16);



 FUNC_18();
}
