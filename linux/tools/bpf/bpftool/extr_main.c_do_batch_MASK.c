
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int contline ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,char**,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,char**,int,unsigned int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,unsigned int) ;
 int * VAR_9 ;
 int FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;
 unsigned int FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*,char*) ;

__attribute__((used)) static int FUNC_21(int VAR_10, char **VAR_11)
{
 char VAR_12[VAR_1], VAR_13[VAR_1];
 char *VAR_14[VAR_0];
 unsigned int VAR_15 = 0;
 int VAR_16;
 FILE *VAR_17;
 char *VAR_18;
 int VAR_19;
 int VAR_20;

 if (VAR_10 < 2) {
  FUNC_13("too few parameters for batch");
  return -1;
 } else if (!FUNC_5(*VAR_11, "file")) {
  FUNC_13("expected 'file', got: %s", *VAR_11);
  return -1;
 } else if (VAR_10 > 2) {
  FUNC_13("too many parameters for batch");
  return -1;
 }
 FUNC_0();

 if (!FUNC_17(*VAR_11, "-"))
  VAR_17 = VAR_9;
 else
  VAR_17 = FUNC_4(*VAR_11, "r");
 if (!VAR_17) {
  FUNC_13("Can't open file (%s): %s", *VAR_11, FUNC_18(VAR_6));
  return -1;
 }

 if (VAR_7)
  FUNC_9(VAR_8);
 while (FUNC_3(VAR_12, sizeof(VAR_12), VAR_17)) {
  VAR_18 = FUNC_16(VAR_12, '#');
  if (VAR_18)
   *VAR_18 = '\0';

  if (FUNC_19(VAR_12) == sizeof(VAR_12) - 1) {
   VAR_6 = VAR_2;
   break;
  }




  while ((VAR_18 = FUNC_20(VAR_12, "\\\n")) != ((void*)0)) {
   if (!FUNC_3(VAR_13, sizeof(VAR_13), VAR_17) ||
       FUNC_19(VAR_13) == 0) {
    FUNC_13("missing continuation line on command %d",
          VAR_15);
    VAR_19 = -1;
    goto err_close;
   }

   VAR_18 = FUNC_16(VAR_13, '#');
   if (VAR_18)
    *VAR_18 = '\0';

   if (FUNC_19(VAR_12) + FUNC_19(VAR_13) + 1 > sizeof(VAR_12)) {
    FUNC_13("command %d is too long", VAR_15);
    VAR_19 = -1;
    goto err_close;
   }
   VAR_12[FUNC_19(VAR_12) - 2] = '\0';
   FUNC_15(VAR_12, VAR_13);
  }

  VAR_16 = FUNC_12(VAR_12, VAR_14, VAR_0, VAR_15);
  if (!VAR_16)
   continue;
  if (VAR_16 < 0)
   goto err_close;

  if (VAR_7) {
   FUNC_10(VAR_8);
   FUNC_8(VAR_8, "command");
   FUNC_9(VAR_8);
   for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++)
    FUNC_11(VAR_8, VAR_14[VAR_20]);
   FUNC_6(VAR_8);
   FUNC_8(VAR_8, "output");
  }

  VAR_19 = FUNC_1(VAR_4, VAR_16, VAR_14, VAR_5);

  if (VAR_7)
   FUNC_7(VAR_8);

  if (VAR_19)
   goto err_close;

  VAR_15++;
 }

 if (VAR_6 && VAR_6 != VAR_3) {
  FUNC_13("reading batch file failed: %s", FUNC_18(VAR_6));
  VAR_19 = -1;
 } else {
  if (!VAR_7)
   FUNC_14("processed %d commands\n", VAR_15);
  VAR_19 = 0;
 }
err_close:
 if (VAR_17 != VAR_9)
  FUNC_2(VAR_17);

 if (VAR_7)
  FUNC_6(VAR_8);

 return VAR_19;
}
