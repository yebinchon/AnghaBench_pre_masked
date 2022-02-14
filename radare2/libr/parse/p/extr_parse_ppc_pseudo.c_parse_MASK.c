
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RParse ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char*,char*,char*,int ) ;
 int FUNC_6 (char*,char,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char const**,char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char*,char*,int) ;

__attribute__((used)) static int FUNC_15(RParse *VAR_1, const char *VAR_2, char *VAR_3) {
 int VAR_4, VAR_5 = FUNC_13 (VAR_2);
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char VAR_11[VAR_0];
 char *VAR_12, *VAR_13, *VAR_14;

 if (!FUNC_10 (VAR_2, "jr ra")) {
  FUNC_11 (VAR_3, "return");
  return 1;
 }


 if (!(VAR_12 = FUNC_2 (VAR_5 + 1))) {
  return 0;
 }
 FUNC_4 (VAR_12, VAR_2, VAR_5 + 1);

 FUNC_6 (VAR_12, '(', ',');
 FUNC_6 (VAR_12, ')', ' ');
 FUNC_7 (VAR_12);
 if (*VAR_12) {
  VAR_6[0] = '\0';
  VAR_7[0] = '\0';
  VAR_8[0] = '\0';
  VAR_9[0] = '\0';
  VAR_10[0] = '\0';
  VAR_13 = FUNC_9 (VAR_12, ' ');
  if (!VAR_13) {
   VAR_13 = FUNC_9 (VAR_12, '\t');
  }
  if (VAR_13) {
   *VAR_13 = '\0';
   for (++VAR_13; *VAR_13 == ' '; VAR_13++) {

   }
   FUNC_14 (VAR_6, VAR_12, VAR_0 - 1);
   FUNC_14 (VAR_7, VAR_13, VAR_0 - 1);

   VAR_14 = VAR_13;
   VAR_13 = FUNC_9 (VAR_13, ',');
   if (VAR_13) {
    *VAR_13 = '\0';
    for (++VAR_13; *VAR_13 == ' '; VAR_13++) {

    }
    FUNC_14 (VAR_7, VAR_14, VAR_0 - 1);
    FUNC_14 (VAR_8, VAR_13, VAR_0 - 1);
    VAR_14 = VAR_13;
    VAR_13 = FUNC_9 (VAR_13, ',');
    if (VAR_13) {
     *VAR_13 = '\0';
     for (++VAR_13; *VAR_13 == ' '; VAR_13++) {

     }
     FUNC_14 (VAR_8, VAR_14, VAR_0 - 1);
     FUNC_14 (VAR_9, VAR_13, VAR_0 - 1);
     VAR_14 = VAR_13;

     VAR_13 = FUNC_9 (VAR_13, ',');
     if (VAR_13) {
      *VAR_13 = '\0';
      for (++VAR_13; *VAR_13 == ' '; VAR_13++) {

      }
      FUNC_14 (VAR_9, VAR_14, VAR_0 - 1);
      FUNC_14 (VAR_10, VAR_13, VAR_0 - 1);
      VAR_14 = VAR_13;

      VAR_13 = FUNC_9 (VAR_13, ',');
      if (VAR_13) {
       *VAR_13 = '\0';
       for (++VAR_13; *VAR_13 == ' '; VAR_13++) {

       }
       FUNC_14 (VAR_10, VAR_14, VAR_0 - 1);
       FUNC_14 (VAR_11, VAR_13, VAR_0 - 1);
      }
     }
    }
   }
  } else {
   FUNC_14 (VAR_6, VAR_12, VAR_0 - 1);
  }
  {
   const char *VAR_15[] = { VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 };
   int VAR_16 = 0;
   for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
    if (VAR_15[VAR_4][0] != '\0') {
     VAR_16++;
    }
   }
   FUNC_8 (VAR_16, VAR_15, VAR_3);
   {
    char *VAR_17 = FUNC_12 (VAR_3);
    VAR_17 = FUNC_5 (VAR_17, "+ -", "- ", 0);
    VAR_17 = FUNC_5 (VAR_17, " + ]", "]  ", 0);





    if (!FUNC_10 (VAR_7, VAR_8)) {
     char VAR_18[64], VAR_19[64];
     do { int VAR_20 = snprintf (VAR_18, 64, "%s = %s +", VAR_7, VAR_7); int VAR_21 = FUNC_0 (VAR_19, 64, "%s +=", VAR_7); if (VAR_20 < 64 && VAR_21 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
     do { int VAR_22 = FUNC_0 (VAR_18, 64, "%s = %s -", VAR_7, VAR_7); int VAR_23 = FUNC_0 (VAR_19, 64, "%s -=", VAR_7); if (VAR_22 < 64 && VAR_23 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
     do { int VAR_24 = FUNC_0 (VAR_18, 64, "%s = %s &", VAR_7, VAR_7); int VAR_25 = FUNC_0 (VAR_19, 64, "%s &=", VAR_7); if (VAR_24 < 64 && VAR_25 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
     do { int VAR_26 = FUNC_0 (VAR_18, 64, "%s = %s |", VAR_7, VAR_7); int VAR_27 = FUNC_0 (VAR_19, 64, "%s |=", VAR_7); if (VAR_26 < 64 && VAR_27 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
     do { int VAR_28 = FUNC_0 (VAR_18, 64, "%s = %s ^", VAR_7, VAR_7); int VAR_29 = FUNC_0 (VAR_19, 64, "%s ^=", VAR_7); if (VAR_28 < 64 && VAR_29 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
     do { int VAR_30 = FUNC_0 (VAR_18, 64, "%s = %s >>", VAR_7, VAR_7); int VAR_31 = FUNC_0 (VAR_19, 64, "%s >>=", VAR_7); if (VAR_30 < 64 && VAR_31 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
     do { int VAR_32 = FUNC_0 (VAR_18, 64, "%s = %s <<", VAR_7, VAR_7); int VAR_33 = FUNC_0 (VAR_19, 64, "%s <<=", VAR_7); if (VAR_32 < 64 && VAR_33 < 64) { VAR_17 = FUNC_5 (VAR_17, VAR_18, VAR_19, 0); } } while (0);
    }
    VAR_17 = FUNC_5 (VAR_17, ":", "0000", 0);
    FUNC_11 (VAR_3, VAR_17);
    FUNC_1 (VAR_17);
   }
  }
 }
 FUNC_1 (VAR_12);
 return 1;
}
