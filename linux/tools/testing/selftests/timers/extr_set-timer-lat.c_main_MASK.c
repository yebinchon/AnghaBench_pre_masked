
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int,struct sigaction*,int *) ;
 int VAR_11 ;
 int FUNC_6 (int *) ;

int FUNC_7(void)
{
 struct sigaction VAR_12;
 int VAR_13 = VAR_7;
 int VAR_14 = 0;


 FUNC_6(&VAR_12.sa_mask);
 VAR_12.sa_flags = 0;
 VAR_12.sa_handler = VAR_11;
 FUNC_5(VAR_13, &VAR_12, ((void*)0));

 FUNC_4("Setting timers for every %i seconds\n", VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {

  if ((VAR_10 == VAR_3) ||
    (VAR_10 == VAR_5) ||
    (VAR_10 == VAR_2) ||
    (VAR_10 == VAR_4) ||
    (VAR_10 == VAR_1) ||
    (VAR_10 == VAR_0))
   continue;

  VAR_14 |= FUNC_0(VAR_10, VAR_8);
  VAR_14 |= FUNC_0(VAR_10, 0);
  VAR_14 |= FUNC_1(VAR_10, VAR_8);
  VAR_14 |= FUNC_1(VAR_10, 0);
 }
 if (VAR_14)
  return FUNC_2();
 return FUNC_3();
}
