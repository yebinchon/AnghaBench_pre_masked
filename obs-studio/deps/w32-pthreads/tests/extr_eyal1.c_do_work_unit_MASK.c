
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 double FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (int VAR_3, int VAR_4)
{
  int VAR_5;
  static int VAR_6 = 0;
  double VAR_7 = 0.0;

  if (VAR_1)
    VAR_5 = 0;
  else {



    FUNC_0(FUNC_3 (&VAR_0) == 0);




    VAR_5 = FUNC_2 ("%c", "0123456789abcdefghijklmnopqrstuvwxyz"[VAR_3]);

    if (!(++VAR_6 % 50))
      FUNC_2 ("\n");

    FUNC_1 (VAR_2);




    FUNC_0(FUNC_4 (&VAR_0) == 0);
  }

  VAR_4 = FUNC_5 () % 10000;
  VAR_7 = FUNC_6 (VAR_4);


  if (VAR_7 > 0.0)
    return(VAR_4);

  return (VAR_4);
}
