
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int posix_mode_t ;


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
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 char* FUNC_6 () ;

const char *
FUNC_7(posix_mode_t VAR_11)
{
  char *VAR_12 = FUNC_6();

  if (FUNC_0(VAR_11))
    VAR_12[ 0] = 'b';
  else if (FUNC_2(VAR_11))
    VAR_12[ 0] = 'd';
  else if (FUNC_1(VAR_11))
    VAR_12[ 0] = 'c';
  else if (FUNC_4(VAR_11))
    VAR_12[ 0] = 'l';
  else if (FUNC_3(VAR_11))
    VAR_12[ 0] = 'p';
  else if (FUNC_5(VAR_11))
    VAR_12[ 0] = 's';

  else
    VAR_12[ 0] = '-';

  VAR_12[ 1] = (VAR_11 & VAR_2) ? 'r' : '-';
  VAR_12[ 2] = (VAR_11 & VAR_7) ? 'w' : '-';

  if (VAR_11 & VAR_4)
    VAR_12[ 3] = (VAR_11 & VAR_10) ? 's' : 'S';
  else
    VAR_12[ 3] = (VAR_11 & VAR_10) ? 'x' : '-';

  VAR_12[ 4] = (VAR_11 & VAR_0) ? 'r' : '-';
  VAR_12[ 5] = (VAR_11 & VAR_5) ? 'w' : '-';

  if (VAR_11 & VAR_3)
    VAR_12[ 6] = (VAR_11 & VAR_8) ? 's' : 'S';
  else
    VAR_12[ 6] = (VAR_11 & VAR_8) ? 'x' : '-';

  VAR_12[ 7] = (VAR_11 & VAR_1) ? 'r' : '-';
  VAR_12[ 8] = (VAR_11 & VAR_6) ? 'w' : '-';
  VAR_12[ 9] = (VAR_11 & VAR_9) ? 'x' : '-';

  VAR_12[11] = '\0';

  return VAR_12;
}
