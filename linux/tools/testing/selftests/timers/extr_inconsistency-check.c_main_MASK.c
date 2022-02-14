
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct timespec*) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int *) ;
 int VAR_4 ;

int FUNC_10(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;
 int VAR_9 = VAR_1;
 int VAR_10 = VAR_2;
 int VAR_11 = 10;
 struct timespec VAR_12;


 while ((VAR_8 = FUNC_5(VAR_5, VAR_6, "t:c:")) != -1) {
  switch (VAR_8) {
  case 't':
   VAR_11 = FUNC_0(VAR_3);
   break;
  case 'c':
   VAR_9 = FUNC_0(VAR_3);
   VAR_10 = VAR_9 + 1;
   break;
  default:
   FUNC_8("Usage: %s [-t <secs>] [-c <clockid>]\n", VAR_6[0]);
   FUNC_8("	-t: Number of seconds to run\n");
   FUNC_8("	-c: clockid to use (default, all clockids)\n");
   FUNC_4(-1);
  }
 }

 FUNC_9(VAR_4, ((void*)0));

 for (VAR_7 = VAR_9; VAR_7 < VAR_10; VAR_7++) {

  if (VAR_7 == VAR_0)
   continue;

  if (!FUNC_1(VAR_7, &VAR_12)) {
   FUNC_8("Consistent %-30s ", FUNC_2(VAR_7));
   if (FUNC_3(VAR_7, VAR_11))
    return FUNC_6();
  }
 }
 return FUNC_7();
}
