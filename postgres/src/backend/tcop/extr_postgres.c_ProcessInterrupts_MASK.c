
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 () ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_20 ;
 int FUNC_5 () ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_30 ;

void
FUNC_15(void)
{

 if (VAR_18 != 0 || VAR_2 != 0)
  return;
 VAR_19 = 0;

 if (VAR_23)
 {
  VAR_23 = 0;
  VAR_25 = 0;
  FUNC_5();

  if (VAR_0 && VAR_30 == VAR_5)
   VAR_30 = VAR_4;
  if (VAR_0)
   FUNC_6(VAR_15,
     (FUNC_7(VAR_12),
      FUNC_10("canceling authentication due to timeout")));
  else if (FUNC_2())
   FUNC_6(VAR_15,
     (FUNC_7(VAR_7),
      FUNC_10("terminating autovacuum process due to administrator command")));
  else if (FUNC_4())
   FUNC_6(VAR_15,
     (FUNC_7(VAR_7),
      FUNC_10("terminating logical replication worker due to administrator command")));
  else if (FUNC_3())
  {
   FUNC_6(VAR_3,
     (FUNC_10("logical replication launcher shutting down")));





   FUNC_14(1);
  }
  else if (VAR_26 && VAR_28)
  {
   FUNC_13(VAR_27);
   FUNC_6(VAR_15,
     (FUNC_7(VAR_13),
      FUNC_10("terminating connection due to conflict with recovery"),
      FUNC_8()));
  }
  else if (VAR_26)
  {

   FUNC_0(VAR_27 == VAR_21);
   FUNC_13(VAR_27);
   FUNC_6(VAR_15,
     (FUNC_7(VAR_9),
      FUNC_10("terminating connection due to conflict with recovery"),
      FUNC_8()));
  }
  else
   FUNC_6(VAR_15,
     (FUNC_7(VAR_7),
      FUNC_10("terminating connection due to administrator command")));
 }
 if (VAR_1)
 {
  VAR_25 = 0;
  FUNC_5();

  VAR_30 = VAR_4;
  FUNC_6(VAR_15,
    (FUNC_7(VAR_8),
     FUNC_10("connection to client lost")));
 }







 if (VAR_26 && VAR_6)
 {
  VAR_25 = 0;
  VAR_26 = 0;
  FUNC_5();
  FUNC_13(VAR_27);
  FUNC_6(VAR_15,
    (FUNC_7(VAR_13),
     FUNC_10("terminating connection due to conflict with recovery"),
     FUNC_8(),
     FUNC_9("In a moment you should be able to reconnect to the"
       " database and repeat your command.")));
 }







 if (VAR_25 && VAR_24 != 0)
 {




  VAR_19 = 1;
 }
 else if (VAR_25)
 {
  bool VAR_31;
  bool VAR_32;

  VAR_25 = 0;





  VAR_31 = FUNC_12(VAR_20, 1);
  VAR_32 = FUNC_12(VAR_29, 1);







  if (VAR_31 && VAR_32 &&
   FUNC_11(VAR_29) < FUNC_11(VAR_20))
   VAR_31 = 0;

  if (VAR_31)
  {
   FUNC_5();
   FUNC_6(VAR_14,
     (FUNC_7(VAR_11),
      FUNC_10("canceling statement due to lock timeout")));
  }
  if (VAR_32)
  {
   FUNC_5();
   FUNC_6(VAR_14,
     (FUNC_7(VAR_12),
      FUNC_10("canceling statement due to statement timeout")));
  }
  if (FUNC_2())
  {
   FUNC_5();
   FUNC_6(VAR_14,
     (FUNC_7(VAR_12),
      FUNC_10("canceling autovacuum task")));
  }
  if (VAR_26)
  {
   VAR_26 = 0;
   FUNC_5();
   FUNC_13(VAR_27);
   FUNC_6(VAR_14,
     (FUNC_7(VAR_13),
      FUNC_10("canceling statement due to conflict with recovery"),
      FUNC_8()));
  }






  if (!VAR_6)
  {
   FUNC_5();
   FUNC_6(VAR_14,
     (FUNC_7(VAR_12),
      FUNC_10("canceling statement due to user request")));
  }
 }

 if (VAR_17)
 {

  if (VAR_16 > 0)
   FUNC_6(VAR_15,
     (FUNC_7(VAR_10),
      FUNC_10("terminating connection due to idle-in-transaction timeout")));
  else
   VAR_17 = 0;

 }

 if (VAR_22)
  FUNC_1();
}
