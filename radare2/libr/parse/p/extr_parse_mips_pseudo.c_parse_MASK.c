
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RParse ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char*,char*,int) ;
 int FUNC_5 (char*,char,char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char const**,char*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char*,int) ;

__attribute__((used)) static int FUNC_15(RParse *VAR_1, const char *VAR_2, char *VAR_3) {
 int VAR_4, VAR_5 = FUNC_12 (VAR_2);
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char *VAR_11, *VAR_12, *VAR_13;

 if (!FUNC_9 (VAR_2, "jr ra")) {
  FUNC_10 (VAR_3, "ret");
  return 1;
 }


 if (!(VAR_11 = FUNC_2 (VAR_5 + 1))) {
  return 0;
 }
 FUNC_3 (VAR_11, VAR_2, VAR_5+1);

 FUNC_5 (VAR_11, '(', ',');
 FUNC_5 (VAR_11, ')', ' ');
 FUNC_6 (VAR_11);

 if (*VAR_11) {
  VAR_6[0]='\0';
  VAR_7[0]='\0';
  VAR_8[0]='\0';
  VAR_9[0]='\0';
  VAR_10[0]='\0';
  VAR_12 = FUNC_8 (VAR_11, ' ');
  if (!VAR_12) {
   VAR_12 = FUNC_8 (VAR_11, '\t');
  }
  if (VAR_12) {
   *VAR_12 = '\0';
   for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
    ;
   }
   FUNC_14 (VAR_6, VAR_11, VAR_0 - 1);
   FUNC_14 (VAR_7, VAR_12, VAR_0 - 1);

   VAR_13=VAR_12;
   VAR_12 = FUNC_8 (VAR_12, ',');
   if (VAR_12) {
    *VAR_12 = '\0';
    for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
     ;
    }
    FUNC_14 (VAR_7, VAR_13, VAR_0 - 1);
    FUNC_14 (VAR_8, VAR_12, VAR_0 - 1);
    VAR_13=VAR_12;
    VAR_12 = FUNC_8 (VAR_12, ',');
    if (VAR_12) {
     *VAR_12 = '\0';
     for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
      ;
     }
     FUNC_14 (VAR_8, VAR_13, VAR_0 - 1);
     FUNC_14 (VAR_9, VAR_12, VAR_0 - 1);
     VAR_13=VAR_12;

     VAR_12 = FUNC_8 (VAR_12, ',');
     if (VAR_12) {
      *VAR_12 = '\0';
      for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
       ;
      }
      FUNC_14 (VAR_9, VAR_13, VAR_0 - 1);
      FUNC_14 (VAR_10, VAR_12, VAR_0 - 1);
     }
    }
   }
  } else {
   FUNC_14 (VAR_6, VAR_11, VAR_0 - 1);
  }
  {
   const char *VAR_14[] = { VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 };
   int VAR_15 = 0;
   for (VAR_4=0; VAR_4<4; VAR_4++) {
    if (VAR_14[VAR_4][0] != '\0') {
     VAR_15++;
    }
   }
   FUNC_7 (VAR_15, VAR_14, VAR_3);
{
 char *VAR_16 = FUNC_11 (VAR_3);
 VAR_16 = FUNC_4 (VAR_16, "+ -", "- ", 0);
 VAR_16 = FUNC_4 (VAR_16, " + ]", " + 0]", 0);

 VAR_16 = FUNC_4 (VAR_16, "zero", "0", 1);
 if (!FUNC_13 (VAR_16, "0 = ", 4)) {
  *VAR_16 = 0;
 }
 if (!FUNC_9 (VAR_7, VAR_8)) {
  char VAR_17[32], VAR_18[32];
  do { int VAR_19 = snprintf (VAR_17, 32, "%s = %s +", VAR_7, VAR_7); int VAR_20 = FUNC_0 (VAR_18, 32, "%s +=", VAR_7); if (VAR_19 < 32 && VAR_20 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_21 = FUNC_0 (VAR_17, 32, "%s = %s -", VAR_7, VAR_7); int VAR_22 = FUNC_0 (VAR_18, 32, "%s -=", VAR_7); if (VAR_21 < 32 && VAR_22 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_23 = FUNC_0 (VAR_17, 32, "%s = %s &", VAR_7, VAR_7); int VAR_24 = FUNC_0 (VAR_18, 32, "%s &=", VAR_7); if (VAR_23 < 32 && VAR_24 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_25 = FUNC_0 (VAR_17, 32, "%s = %s |", VAR_7, VAR_7); int VAR_26 = FUNC_0 (VAR_18, 32, "%s |=", VAR_7); if (VAR_25 < 32 && VAR_26 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_27 = FUNC_0 (VAR_17, 32, "%s = %s ^", VAR_7, VAR_7); int VAR_28 = FUNC_0 (VAR_18, 32, "%s ^=", VAR_7); if (VAR_27 < 32 && VAR_28 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_29 = FUNC_0 (VAR_17, 32, "%s = %s >>", VAR_7, VAR_7); int VAR_30 = FUNC_0 (VAR_18, 32, "%s >>=", VAR_7); if (VAR_29 < 32 && VAR_30 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_31 = FUNC_0 (VAR_17, 32, "%s = %s <<", VAR_7, VAR_7); int VAR_32 = FUNC_0 (VAR_18, 32, "%s <<=", VAR_7); if (VAR_31 < 32 && VAR_32 < 32) { VAR_16 = FUNC_4 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
 }
 VAR_16 = FUNC_4 (VAR_16, ":", "0000", 0);
 FUNC_10 (VAR_3, VAR_16);
 FUNC_1 (VAR_16);
}
  }
 }
 FUNC_1 (VAR_11);
 return 1;
}
