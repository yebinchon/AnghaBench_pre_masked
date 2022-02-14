
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16 ;
typedef int TransactionId ;
struct TYPE_6__ {int xid; int status; } ;
typedef TYPE_1__ MultiXactMember ;
typedef int MultiXactId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_1__**,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ,...) ;
 TYPE_1__* FUNC_18 (int) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static TransactionId
FUNC_20(MultiXactId VAR_9, uint16 VAR_10,
      TransactionId VAR_11, TransactionId VAR_12,
      TransactionId VAR_13, MultiXactId VAR_14,
      uint16 *VAR_15)
{
 TransactionId VAR_16 = VAR_8;
 int VAR_17;
 MultiXactMember *VAR_18;
 int VAR_19;
 bool VAR_20;
 int VAR_21;
 MultiXactMember *VAR_22;
 bool VAR_23;
 TransactionId VAR_24;
 bool VAR_25;

 *VAR_15 = 0;


 FUNC_0(VAR_10 & VAR_7);

 if (!FUNC_8(VAR_9) ||
  FUNC_2(VAR_10))
 {

  *VAR_15 |= VAR_2;
  return VAR_8;
 }
 else if (FUNC_9(VAR_9, VAR_12))
  FUNC_15(VAR_1,
    (FUNC_16(VAR_0),
     FUNC_17("found multixact %u from before relminmxid %u",
         VAR_9, VAR_12)));
 else if (FUNC_9(VAR_9, VAR_14))
 {






  if (FUNC_7(VAR_9,
         FUNC_3(VAR_10)))
   FUNC_15(VAR_1,
     (FUNC_16(VAR_0),
      FUNC_17("multixact %u from before cutoff %u found to be still running",
          VAR_9, VAR_14)));

  if (FUNC_3(VAR_10))
  {
   *VAR_15 |= VAR_2;
   VAR_16 = VAR_8;
  }
  else
  {

   VAR_16 = FUNC_6(VAR_9, VAR_10);


   FUNC_0(FUNC_13(VAR_16));

   if (FUNC_14(VAR_16, VAR_11))
    FUNC_15(VAR_1,
      (FUNC_16(VAR_0),
       FUNC_17("found update xid %u from before relfrozenxid %u",
           VAR_16, VAR_11)));





   if (FUNC_14(VAR_16, VAR_13))
   {
    if (FUNC_10(VAR_16))
     FUNC_15(VAR_1,
       (FUNC_16(VAR_0),
        FUNC_17("cannot freeze committed update xid %u", VAR_16)));
    *VAR_15 |= VAR_2;
    VAR_16 = VAR_8;
   }
   else
   {
    *VAR_15 |= VAR_6;
   }
  }

  return VAR_16;
 }
 VAR_19 =
  FUNC_1(VAR_9, &VAR_18, 0,
         FUNC_3(VAR_10));
 if (VAR_19 <= 0)
 {

  *VAR_15 |= VAR_2;
  return VAR_8;
 }


 VAR_20 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++)
 {
  if (FUNC_14(VAR_18[VAR_17].xid, VAR_13))
  {
   VAR_20 = 1;
   break;
  }
 }





 if (!VAR_20)
 {
  *VAR_15 |= VAR_4;
  FUNC_19(VAR_18);
  return VAR_8;
 }





 VAR_21 = 0;
 VAR_22 = FUNC_18(sizeof(MultiXactMember) * VAR_19);
 VAR_23 = 0;
 VAR_24 = VAR_8;
 VAR_25 = 0;

 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++)
 {



  if (FUNC_4(VAR_18[VAR_17].status))
  {
   TransactionId VAR_26 = VAR_18[VAR_17].xid;

   FUNC_0(FUNC_13(VAR_26));
   if (FUNC_14(VAR_26, VAR_11))
    FUNC_15(VAR_1,
      (FUNC_16(VAR_0),
       FUNC_17("found update xid %u from before relfrozenxid %u",
           VAR_26, VAR_11)));
   if (FUNC_11(VAR_26) ||
    FUNC_12(VAR_26))
   {
    FUNC_0(!FUNC_13(VAR_24));
    VAR_24 = VAR_26;
   }
   else if (FUNC_10(VAR_26))
   {





    FUNC_0(!FUNC_13(VAR_24));
    VAR_25 = 1;
    VAR_24 = VAR_26;
   }
   else
   {




   }







   if (FUNC_13(VAR_24) &&
    FUNC_14(VAR_24, VAR_13))
    FUNC_15(VAR_1,
      (FUNC_16(VAR_0),
       FUNC_17("found update xid %u from before xid cutoff %u",
           VAR_24, VAR_13)));
   if (FUNC_13(VAR_24))
    VAR_22[VAR_21++] = VAR_18[VAR_17];
  }
  else
  {

   if (FUNC_11(VAR_18[VAR_17].xid) ||
    FUNC_12(VAR_18[VAR_17].xid))
   {

    FUNC_0(!FUNC_14(VAR_18[VAR_17].xid, VAR_13));
    VAR_22[VAR_21++] = VAR_18[VAR_17];
    VAR_23 = 1;
   }
  }
 }

 FUNC_19(VAR_18);

 if (VAR_21 == 0)
 {

  *VAR_15 |= VAR_2;
  VAR_16 = VAR_8;
 }
 else if (FUNC_13(VAR_24) && !VAR_23)
 {







  FUNC_0(VAR_21 == 1);
  *VAR_15 |= VAR_6;
  if (VAR_25)
   *VAR_15 |= VAR_3;
  VAR_16 = VAR_24;
 }
 else
 {




  VAR_16 = FUNC_5(VAR_21, VAR_22);
  *VAR_15 |= VAR_5;
 }

 FUNC_19(VAR_22);

 return VAR_16;
}
