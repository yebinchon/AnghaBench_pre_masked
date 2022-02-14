
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 char FUNC_3 (int,char**,char*,TYPE_1__*,int*) ;
 int FUNC_4 () ;
 char* VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_11 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *,int) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 void* VAR_12 ;
 int FUNC_14 () ;

int FUNC_15(int VAR_13, char *VAR_14[])
{
 signed char VAR_15;

 while (1) {
  int VAR_16 = 0;

  VAR_15 = FUNC_3(VAR_13, VAR_14, "", VAR_10, &VAR_16);

  if (VAR_15 == -1)
   break;

  switch (VAR_15) {
  case 0:
   if (VAR_10[VAR_16].flag != 0)
    break;

   FUNC_14();
   FUNC_2(1);
   break;

  case 's':
   VAR_12 = FUNC_0(VAR_8);
   break;

  default:
   FUNC_14();
   FUNC_2(1);
  }
 }

 if (VAR_4 && VAR_5) {
  FUNC_14();
  FUNC_2(1);
 }
 if (VAR_3 && !VAR_4 && !VAR_5) {
  FUNC_14();
  FUNC_2(1);
 }

 if (VAR_3) {
  char *VAR_17 = FUNC_12(VAR_14[0]);
  int VAR_18;
  VAR_18 = FUNC_13(VAR_17) - 1;
  while (VAR_18) {
   if (VAR_17[VAR_18] == '/') {
    VAR_17[VAR_18] = '\0';
    if (FUNC_1(VAR_17) == -1) {
     FUNC_5("chdir");
     FUNC_2(1);
    }
    break;
   }
   VAR_18--;
  }
 }

 if (VAR_7) {
  FUNC_2(0);
 }

 if (((VAR_13 - VAR_9) != 1)) {
  VAR_2 = -1;
 } else {
  VAR_2 = FUNC_0(VAR_14[VAR_9++]);
 }

 if (VAR_3)
  VAR_6 = VAR_14[0];

 FUNC_7(VAR_2);

 FUNC_6("Using ");
 if (VAR_4)
  FUNC_6("fork");
 else if (VAR_5)
  FUNC_6("vfork");
 else
  FUNC_6("clone");

 if (VAR_3)
  FUNC_6(" + exec");

 FUNC_6(" on cpu %d\n", VAR_2);


 FUNC_8(FUNC_4(), FUNC_4());

 FUNC_9(VAR_0, VAR_11);

 FUNC_11(VAR_1, ((void*)0), VAR_2);

 while (1)
  FUNC_10(3600);

 return 0;
}
