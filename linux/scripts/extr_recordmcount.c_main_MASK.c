
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ftrace ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

int FUNC_5(int VAR_3, char *VAR_4[])
{
 const char VAR_5[] = "/ftrace.o";
 int VAR_6 = sizeof(VAR_5) - 1;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 while ((VAR_8 = FUNC_2(VAR_3, VAR_4, "w")) >= 0) {
  switch (VAR_8) {
  case 'w':
   VAR_2 = 1;
   break;
  default:
   FUNC_1(VAR_1, "usage: recordmcount [-w] file.o...\n");
   return 0;
  }
 }

 if ((VAR_3 - VAR_0) < 1) {
  FUNC_1(VAR_1, "usage: recordmcount [-w] file.o...\n");
  return 0;
 }


 for (VAR_9 = VAR_0; VAR_9 < VAR_3; VAR_9++) {
  char *VAR_10 = VAR_4[VAR_9];
  int VAR_11;






  VAR_11 = FUNC_4(VAR_10);
  if (VAR_11 >= VAR_6 &&
      FUNC_3(VAR_10 + (VAR_11 - VAR_6), VAR_5) == 0)
   continue;

  if (FUNC_0(VAR_10)) {
   FUNC_1(VAR_1, "%s: failed\n", VAR_10);
   ++VAR_7;
  }
 }
 return !!VAR_7;
}
