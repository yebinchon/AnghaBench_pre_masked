
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* WalSndSendDataCallback ) () ;
struct TYPE_4__ {int sock; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int,int ,long,int ) ;
 int VAR_14 ;
 int FUNC_7 () ;
 long FUNC_8 (int ) ;
 int FUNC_9 (int (*) ()) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_15 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_17(WalSndSendDataCallback VAR_21)
{




 VAR_17 = FUNC_1();
 VAR_20 = 0;





 for (;;)
 {

  FUNC_4(VAR_2);

  FUNC_0();


  if (VAR_0)
  {
   VAR_0 = 0;
   FUNC_2(VAR_5);
   FUNC_5();
  }


  FUNC_3();






  if (VAR_18 && VAR_19 &&
   !FUNC_16())
   break;







  if (!FUNC_16())
   VAR_21();
  else
   VAR_14 = 0;


  if (FUNC_15() != 0)
   FUNC_12();


  if (VAR_14 && !FUNC_16())
  {
   if (VAR_4->state == VAR_7)
   {
    FUNC_13(VAR_1,
      (FUNC_14("\"%s\" has now caught up with upstream server",
        VAR_15)));
    FUNC_11(VAR_8);
   }
   if (VAR_16)
    FUNC_9(VAR_21);
  }


  FUNC_7();


  FUNC_10();
  if ((VAR_14 && !VAR_19) || FUNC_16())
  {
   long VAR_22;
   int VAR_23;

   VAR_23 = VAR_10 | VAR_9 | VAR_13 |
    VAR_11;





   VAR_22 = FUNC_8(FUNC_1());

   if (FUNC_16())
    VAR_23 |= VAR_12;


   (void) FUNC_6(VAR_2, VAR_23,
          VAR_3->sock, VAR_22,
          VAR_6);
  }
 }
 return;
}
