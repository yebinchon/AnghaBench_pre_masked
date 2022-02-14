
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char*,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int,char**,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int,int) ;
 char* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 () ;

int FUNC_16(int VAR_10, char *VAR_11[]) {
  int VAR_12, VAR_13, VAR_14;
  extern char *VAR_15;
  FILE *VAR_16;

  if (VAR_11[1] && !FUNC_14(VAR_11[1],"--",2)) {
    if (!FUNC_13(VAR_11[1],"--help")) {
      FUNC_11(VAR_9);
    } else if (!FUNC_13(VAR_11[1],"--version")) {
      FUNC_8(FUNC_0("adnslogres"),VAR_9);
    } else {
      FUNC_15();
    }
    if (FUNC_5(VAR_9) || FUNC_4(VAR_9)) { FUNC_10("stdout"); FUNC_3(1); }
    FUNC_3(0);
  }

  VAR_14= VAR_0;
  VAR_13= 0;
  while ((VAR_12= FUNC_9(VAR_10, VAR_11, "c:C:dp")) != -1)
    switch (VAR_12) {
    case 'c':
      VAR_14= FUNC_2(VAR_15);
      if (VAR_14 < 1 || VAR_14 > VAR_1) {
       FUNC_7(VAR_7, "%s: unfeasible concurrency %d\n", VAR_6, VAR_14);
       FUNC_3(1);
      }
      break;
    case 'C':
      VAR_4= VAR_15;
      break;
    case 'd':
      VAR_13|= VAR_2;
      break;





    default:
      FUNC_15();
    }

  VAR_10-= VAR_5;
  VAR_11+= VAR_5;

  VAR_16= ((void*)0);
  if (VAR_10 == 0)
    VAR_16= VAR_8;
  else if (VAR_10 == 1)
    VAR_16= FUNC_6(*VAR_11, "r");
  else
    FUNC_15();

  if (!VAR_16)
    FUNC_1("couldn't open input");

  FUNC_12(VAR_16, VAR_9, VAR_14, VAR_13);

  if (FUNC_4(VAR_16))
    FUNC_1("fclose input");
  if (FUNC_4(VAR_9))
    FUNC_1("fclose output");

  return 0;
}
