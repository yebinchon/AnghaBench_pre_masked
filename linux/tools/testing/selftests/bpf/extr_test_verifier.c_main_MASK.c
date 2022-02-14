
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,unsigned int,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int FUNC_8(int VAR_5, char **VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = FUNC_0(VAR_2);
 bool VAR_9 = !FUNC_5();
 int VAR_10 = 1;

 if (VAR_5 > 1 && FUNC_7(VAR_6[1], "-v") == 0) {
  VAR_10++;
  VAR_4 = 1;
  VAR_5--;
 }

 if (VAR_5 == 3) {
  unsigned int VAR_11 = FUNC_1(VAR_6[VAR_10]);
  unsigned int VAR_12 = FUNC_1(VAR_6[VAR_10 + 1]);

  if (VAR_11 < VAR_8 && VAR_12 < VAR_8) {
   VAR_7 = VAR_11;
   VAR_8 = VAR_12 + 1;
  }
 } else if (VAR_5 == 2) {
  unsigned int VAR_13 = FUNC_1(VAR_6[VAR_10]);

  if (VAR_13 < VAR_8) {
   VAR_7 = VAR_13;
   VAR_8 = VAR_13 + 1;
  }
 }

 FUNC_4();
 if (VAR_9 && VAR_3) {
  FUNC_6("Cannot run as unprivileged user with sysctl %s.\n",
         VAR_1);
  return VAR_0;
 }

 FUNC_2();
 return FUNC_3(VAR_9, VAR_7, VAR_8);
}
