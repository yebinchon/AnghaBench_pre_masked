
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8(void)
{






 if (VAR_4)
 {





  if (FUNC_1() || FUNC_2())
   FUNC_4(VAR_1, "cannot start commands during a parallel operation");

  VAR_3 += 1;
  if (VAR_3 == VAR_2)
  {
   VAR_3 -= 1;
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("cannot have more than 2^32-2 commands in a transaction")));
  }
  VAR_4 = 0;


  FUNC_3(VAR_3);







  FUNC_0();
 }
}
