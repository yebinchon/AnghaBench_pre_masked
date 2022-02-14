
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {scalar_t__ offset; int modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

int FUNC_6(int VAR_2, char **VAR_3)
{
 struct timex VAR_4;
 int VAR_5, VAR_6;

 int VAR_7[5] = {0, 250, 500, -250, -500};


 VAR_6 = FUNC_5("killall -9 ntpd");


 VAR_4.modes = VAR_1;
 VAR_4.offset = 0;
 VAR_6 = FUNC_0(&VAR_4);

 if (VAR_6 < 0) {
  FUNC_4("Maybe you're not running as root?\n");
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  FUNC_4("Using %i ppm adjustment\n", VAR_7[VAR_5]);
  VAR_6 = FUNC_1(VAR_7[VAR_5]);
  if (VAR_6)
   break;
 }


 VAR_4.modes = VAR_0;
 VAR_4.offset = 0;
 FUNC_0(&VAR_4);

 if (VAR_6) {
  FUNC_4("[FAIL]");
  return FUNC_2();
 }
 FUNC_4("[OK]");
 return FUNC_3();
}
