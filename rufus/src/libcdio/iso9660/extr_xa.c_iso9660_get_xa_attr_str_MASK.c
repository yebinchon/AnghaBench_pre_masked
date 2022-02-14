
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


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
 char* FUNC_0 () ;
 int FUNC_1 (int) ;

const char *
FUNC_2 (uint16_t VAR_11)
{
  char *VAR_12 = FUNC_0();

  VAR_11 = FUNC_1 (VAR_11);

  VAR_12[ 0] = (VAR_11 & VAR_1) ? 'd' : '-';
  VAR_12[ 1] = (VAR_11 & VAR_0) ? 'a' : '-';
  VAR_12[ 2] = (VAR_11 & VAR_2) ? 'i' : '-';
  VAR_12[ 3] = (VAR_11 & VAR_4) ? '2' : '-';
  VAR_12[ 4] = (VAR_11 & VAR_3) ? '1' : '-';

  VAR_12[ 5] = (VAR_11 & VAR_10) ? 'x' : '-';
  VAR_12[ 6] = (VAR_11 & VAR_7) ? 'r' : '-';

  VAR_12[ 7] = (VAR_11 & VAR_8) ? 'x' : '-';
  VAR_12[ 8] = (VAR_11 & VAR_5) ? 'r' : '-';


  VAR_12[ 9] = (VAR_11 & VAR_9) ? 'x' : '-';
  VAR_12[10] = (VAR_11 & VAR_6) ? 'r' : '-';

  VAR_12[11] = '\0';

  return VAR_12;
}
