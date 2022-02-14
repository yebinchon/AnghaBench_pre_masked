
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_4 (int VAR_11, int VAR_12)
{
  int VAR_13 = 0;
  if (VAR_5 != 3)
    {
      FUNC_0 (VAR_11, VAR_12);
      return;
    }
  FUNC_1 (VAR_2);
  if (VAR_7 & VAR_2)
    VAR_13 = 8;


  VAR_0;
  VAR_3++;
  VAR_10 |= (VAR_6 & VAR_1);
  if (VAR_6 & VAR_1)
    FUNC_3 (VAR_9, "%%xmm%d", VAR_8 + VAR_13);
  else
    FUNC_3 (VAR_9, "%%mm%d", VAR_8 + VAR_13);
  FUNC_2 (VAR_9 + VAR_4);
}
