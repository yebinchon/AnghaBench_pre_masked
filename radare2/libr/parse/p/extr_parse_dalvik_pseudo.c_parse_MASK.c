
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w4 ;
typedef int w3 ;
typedef int w2 ;
typedef int w1 ;
typedef int w0 ;
typedef int RParse ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char*,char*,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char const**,char*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(RParse *VAR_0, const char *VAR_1, char *VAR_2) {
 int VAR_3, VAR_4 = FUNC_12 (VAR_1);
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char VAR_9[64];
 char VAR_10[64];
 char VAR_11[64];
 char VAR_12[64];
 char VAR_13[64];

 if (!FUNC_9 (VAR_1, "invalid")
 || !FUNC_9 (VAR_1, "nop")
 || !FUNC_9 (VAR_1, "DEPRECATED")) {
  VAR_2[0] = 0;
  return 1;
 }


 if (!(VAR_5 = FUNC_2 (VAR_4 + 1))) {
  return 0;
 }
 FUNC_4 (VAR_5, VAR_1, VAR_4 + 1);

 FUNC_6 (VAR_5);

 if (*VAR_5) {
  VAR_9[0]='\0';
  VAR_10[0]='\0';
  VAR_11[0]='\0';
  VAR_12[0]='\0';
  VAR_13[0]='\0';
  VAR_6 = FUNC_8 (VAR_5, ' ');
  if (!VAR_6) {
   VAR_6 = FUNC_8 (VAR_5, '\t');
  }
  if (VAR_6) {
   *VAR_6 = '\0';
   for (++VAR_6; *VAR_6 == ' '; VAR_6++) {
    ;
   }
   FUNC_13 (VAR_9, VAR_5, sizeof (VAR_9) - 1);
   VAR_9[sizeof(VAR_9)-1] = '\0';
   FUNC_13 (VAR_10, VAR_6, sizeof (VAR_10) - 1);
   VAR_10[sizeof(VAR_10)-1] = '\0';

   VAR_7=VAR_6;
   VAR_8 = FUNC_8 (VAR_6, '}');
   if (VAR_8) {
    VAR_6 = VAR_8 + 1;
   }
   VAR_6 = FUNC_8 (VAR_6, ',');
   if (VAR_6) {
    *VAR_6 = '\0';
    for (++VAR_6; *VAR_6 == ' '; VAR_6++) {
     ;
    }
    FUNC_13 (VAR_10, VAR_7, sizeof (VAR_10) - 1);
    VAR_10[sizeof(VAR_10)-1] = '\0';
    FUNC_13 (VAR_11, VAR_6, sizeof (VAR_11) - 1);
    VAR_11[sizeof(VAR_11)-1] = '\0';
    VAR_7=VAR_6;
    VAR_6 = FUNC_8 (VAR_6, ',');
    if (VAR_6) {
     *VAR_6 = '\0';
     for (++VAR_6; *VAR_6 == ' '; VAR_6++) {
      ;
     }
     FUNC_13 (VAR_11, VAR_7, sizeof (VAR_11) - 1);
     VAR_11[sizeof(VAR_11)-1] = '\0';
     FUNC_13 (VAR_12, VAR_6, sizeof (VAR_12) - 1);
     VAR_12[sizeof(VAR_12)-1] = '\0';
     VAR_7=VAR_6;

     VAR_6 = FUNC_8 (VAR_6, ',');
     if (VAR_6) {
      *VAR_6 = '\0';
      for (++VAR_6; *VAR_6 == ' '; VAR_6++) {
       ;
      }
      FUNC_13 (VAR_12, VAR_7, sizeof (VAR_12) - 1);
      VAR_12[sizeof(VAR_12)-1] = '\0';
      FUNC_13 (VAR_13, VAR_6, sizeof (VAR_13) - 1);
      VAR_13[sizeof(VAR_13)-1] = '\0';
     }
    }
   }
  }
  {
   const char *VAR_14[] = { VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 };
   int VAR_15 = 0;
   for (VAR_3=0; VAR_3<4; VAR_3++) {
    if (VAR_14[VAR_3][0] != '\0') {
     VAR_15++;
    }
   }
   FUNC_7 (VAR_15, VAR_14, VAR_2);
{
 char *VAR_16 = FUNC_11 (VAR_2);
 VAR_16 = FUNC_5 (VAR_16, "+ -", "- ", 0);




 if (!FUNC_9 (VAR_10, VAR_11)) {
  char VAR_17[32], VAR_18[32];
  do { int VAR_19 = snprintf (VAR_17, 32, "%s = %s +", VAR_10, VAR_10); int VAR_20 = FUNC_0 (VAR_18, 32, "%s +=", VAR_10); if (VAR_19 < 32 && VAR_20 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_21 = FUNC_0 (VAR_17, 32, "%s = %s -", VAR_10, VAR_10); int VAR_22 = FUNC_0 (VAR_18, 32, "%s -=", VAR_10); if (VAR_21 < 32 && VAR_22 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_23 = FUNC_0 (VAR_17, 32, "%s = %s &", VAR_10, VAR_10); int VAR_24 = FUNC_0 (VAR_18, 32, "%s &=", VAR_10); if (VAR_23 < 32 && VAR_24 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_25 = FUNC_0 (VAR_17, 32, "%s = %s |", VAR_10, VAR_10); int VAR_26 = FUNC_0 (VAR_18, 32, "%s |=", VAR_10); if (VAR_25 < 32 && VAR_26 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_27 = FUNC_0 (VAR_17, 32, "%s = %s ^", VAR_10, VAR_10); int VAR_28 = FUNC_0 (VAR_18, 32, "%s ^=", VAR_10); if (VAR_27 < 32 && VAR_28 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_29 = FUNC_0 (VAR_17, 32, "%s = %s >>", VAR_10, VAR_10); int VAR_30 = FUNC_0 (VAR_18, 32, "%s >>=", VAR_10); if (VAR_29 < 32 && VAR_30 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
  do { int VAR_31 = FUNC_0 (VAR_17, 32, "%s = %s <<", VAR_10, VAR_10); int VAR_32 = FUNC_0 (VAR_18, 32, "%s <<=", VAR_10); if (VAR_31 < 32 && VAR_32 < 32) { VAR_16 = FUNC_5 (VAR_16, VAR_17, VAR_18, 0); } } while (0);
 }
 FUNC_10 (VAR_2, VAR_16);
 FUNC_1 (VAR_16);
}
  }
 }
 FUNC_1 (VAR_5);
 return 1;
}
