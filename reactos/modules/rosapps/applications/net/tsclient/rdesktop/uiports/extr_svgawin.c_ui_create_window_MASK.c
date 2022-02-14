
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_19 ;
 int FUNC_5 () ;
 scalar_t__ VAR_20 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

int FUNC_11(void)
{
  int VAR_21;
  int VAR_22;

  VAR_21 = VAR_7;
  if (VAR_14 == 640 && VAR_11 == 480)
  {
    if (VAR_13 == 1)
      VAR_21 = VAR_5;
    else if (VAR_13 == 2)
      VAR_21 = VAR_6;
  }
  else if (VAR_14 == 800 && VAR_11 == 600)
  {
    if (VAR_13 == 1)
      VAR_21 = VAR_7;
    else if (VAR_13 == 2)
      VAR_21 = VAR_8;
  }
  else if (VAR_14 == 1024 && VAR_11 == 768)
  {
    if (VAR_13 == 1)
      VAR_21 = VAR_3;
    else if (VAR_13 == 2)
      VAR_21 = VAR_4;
  }
  else
  {
    FUNC_0("Invalid width / height");
    return 0;
  }
  FUNC_5();
  if (!FUNC_7(VAR_21))
  {
    FUNC_0("Graphics unavailable");
    return 0;
  }
  FUNC_9(1);
  FUNC_3(VAR_14 / 2, VAR_11 / 2);
  FUNC_8(VAR_21);
  if (FUNC_1())
  {
    FUNC_0("Keyboard unavailable");
    return 0;
  }
  FUNC_2(VAR_18);
  if (VAR_20)
  {
    VAR_22 = FUNC_6(VAR_10, VAR_9);
    if (VAR_22 & VAR_1)
      VAR_16 = 1;
    if (VAR_22 & VAR_2)
      VAR_17 = 1;
    if (VAR_22 & VAR_0)
      VAR_15 = 1;
    FUNC_4("accel %d\n", VAR_22);
  }
  if (!VAR_17 && !VAR_12)
    VAR_19 = FUNC_10(VAR_14 * VAR_11 * VAR_13);
  return 1;
}
