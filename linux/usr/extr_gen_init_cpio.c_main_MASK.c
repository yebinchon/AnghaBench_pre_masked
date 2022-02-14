
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* type; int (* handler ) (char*) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 TYPE_1__* VAR_3 ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_6 (char const*,char*) ;
 char* FUNC_7 (int ) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char**,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

int FUNC_14 (int VAR_8, char *VAR_9[])
{
 FILE *VAR_10;
 char VAR_11[VAR_0];
 char *VAR_12, *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 const char *VAR_16;

 VAR_1 = FUNC_12(((void*)0));
 while (1) {
  int VAR_17 = FUNC_5(VAR_8, VAR_9, "t:h");
  char *VAR_18;

  if (VAR_17 == -1)
   break;
  switch (VAR_17) {
  case 't':
   VAR_1 = FUNC_10(VAR_4, &VAR_18, 10);
   if (!*VAR_4 || *VAR_18) {
    FUNC_4(VAR_6, "Invalid timestamp: %s\n",
      VAR_4);
    FUNC_13(VAR_9[0]);
    FUNC_1(1);
   }
   break;
  case 'h':
  case '?':
   FUNC_13(VAR_9[0]);
   FUNC_1(VAR_17 == 'h' ? 0 : 1);
  }
 }

 if (VAR_8 - VAR_5 != 1) {
  FUNC_13(VAR_9[0]);
  FUNC_1(1);
 }
 VAR_16 = VAR_9[VAR_5];
 if (!FUNC_6(VAR_16, "-"))
  VAR_10 = VAR_7;
 else if (!(VAR_10 = FUNC_3(VAR_16, "r"))) {
  FUNC_4(VAR_6, "ERROR: unable to open '%s': %s\n\n",
   VAR_16, FUNC_7(VAR_2));
  FUNC_13(VAR_9[0]);
  FUNC_1(1);
 }

 while (FUNC_2(VAR_11, VAR_0, VAR_10)) {
  int VAR_19;
  size_t VAR_20 = FUNC_8(VAR_11);

  VAR_15++;

  if ('#' == *VAR_11) {

   continue;
  }

  if (! (VAR_13 = FUNC_9(VAR_11, " \t"))) {
   FUNC_4(VAR_6,
    "ERROR: incorrect format, could not locate file type line %d: '%s'\n",
    VAR_15, VAR_11);
   VAR_14 = -1;
   break;
  }

  if ('\n' == *VAR_13) {

   continue;
  }

  if (VAR_20 == FUNC_8(VAR_13)) {

   continue;
  }

  if (! (VAR_12 = FUNC_9(((void*)0), "\n"))) {
   FUNC_4(VAR_6,
    "ERROR: incorrect format, newline required line %d: '%s'\n",
    VAR_15, VAR_11);
   VAR_14 = -1;
  }

  for (VAR_19 = 0; VAR_3[VAR_19].type; VAR_19++) {
   int VAR_21;
   if (! FUNC_6(VAR_11, VAR_3[VAR_19].type)) {
    if ((VAR_21 = VAR_3[VAR_19].handler(VAR_12))) {
     VAR_14 = VAR_21;
     FUNC_4(VAR_6, " line %d\n", VAR_15);
    }
    break;
   }
  }

  if (((void*)0) == VAR_3[VAR_19].type) {
   FUNC_4(VAR_6, "unknown file type line %d: '%s'\n",
    VAR_15, VAR_11);
  }
 }
 if (VAR_14 == 0)
  FUNC_0();

 FUNC_1(VAR_14);
}
