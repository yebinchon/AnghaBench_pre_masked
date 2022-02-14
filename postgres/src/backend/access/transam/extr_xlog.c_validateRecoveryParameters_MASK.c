
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimeLineID ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_13(void)
{
 if (!VAR_0)
  return;




 if (VAR_12)
 {
  if ((VAR_5 == ((void*)0) || FUNC_12(VAR_5, "") == 0) &&
   (VAR_14 == ((void*)0) || FUNC_12(VAR_14, "") == 0))
   FUNC_6(VAR_13,
     (FUNC_9("specified neither primary_conninfo nor restore_command"),
      FUNC_8("The database server will regularly poll the pg_wal subdirectory to check for files placed there.")));
 }
 else
 {
  if (VAR_14 == ((void*)0) ||
   FUNC_12(VAR_14, "") == 0)
   FUNC_6(VAR_3,
     (FUNC_7(VAR_1),
      FUNC_9("must specify restore_command when standby mode is not enabled")));
 }






 if (VAR_16 == VAR_6 &&
  !VAR_2)
  VAR_16 = VAR_7;





 if (VAR_15 == VAR_8)
 {
  VAR_19 = FUNC_2(FUNC_3(VAR_22,
                  FUNC_1(VAR_21),
                  FUNC_5(VAR_4),
                  FUNC_4(-1)));
 }







 if (VAR_20 == VAR_11)
 {
  TimeLineID VAR_23 = VAR_18;


  if (VAR_23 != 1 && !FUNC_10(VAR_23))
   FUNC_6(VAR_3,
     (FUNC_7(VAR_1),
      FUNC_9("recovery target timeline %u does not exist",
       VAR_23)));
  VAR_17 = VAR_23;
 }
 else if (VAR_20 == VAR_10)
 {

  VAR_17 = FUNC_11(VAR_17);
 }
 else
 {




  FUNC_0(VAR_20 == VAR_9);
 }
}
