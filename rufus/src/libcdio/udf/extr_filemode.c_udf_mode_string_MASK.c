
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;

char *
FUNC_2 (mode_t VAR_9, char *VAR_10)
{
  VAR_10[ 0] = FUNC_0 (VAR_9);
  VAR_10[ 1] = VAR_9 & VAR_2 ? 'r' : '-';
  VAR_10[ 2] = VAR_9 & VAR_5 ? 'w' : '-';
  VAR_10[ 3] = VAR_9 & VAR_8 ? 'x' : '-';
  VAR_10[ 4] = VAR_9 & VAR_0 ? 'r' : '-';
  VAR_10[ 5] = VAR_9 & VAR_3 ? 'w' : '-';
  VAR_10[ 6] = VAR_9 & VAR_6 ? 'x' : '-';
  VAR_10[ 7] = VAR_9 & VAR_1 ? 'r' : '-';
  VAR_10[ 8] = VAR_9 & VAR_4 ? 'w' : '-';
  VAR_10[ 9] = VAR_9 & VAR_7 ? 'x' : '-';
  VAR_10[10] = '\0';
  FUNC_1 (VAR_9, VAR_10);
  return VAR_10;
}
