
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RParse ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int,char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char const**,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(RParse *VAR_1, const char *VAR_2, char *VAR_3) {
 int VAR_4, VAR_5 = FUNC_9 (VAR_2);
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char *VAR_11, *VAR_12, *VAR_13;

 if (!FUNC_7 (VAR_2, "jr ra")) {
  FUNC_8 (VAR_3, "ret");
  return 1;
 }


 if (!(VAR_11 = FUNC_1 (VAR_5 + 1))) {
  return 0;
 }
 FUNC_2 (VAR_11, VAR_2, VAR_5+1);

 FUNC_3 (VAR_11, VAR_5+1, ".l", "", 1);
 FUNC_3 (VAR_11, VAR_5+1, ".w", "", 1);
 FUNC_3 (VAR_11, VAR_5+1, ".d", "", 1);
 FUNC_3 (VAR_11, VAR_5+1, ".b", "", 1);
 FUNC_4 (VAR_11);

 if (*VAR_11) {
  VAR_6[0]='\0';
  VAR_7[0]='\0';
  VAR_8[0]='\0';
  VAR_9[0]='\0';
  VAR_10[0]='\0';
  VAR_12 = FUNC_6 (VAR_11, ' ');
  if (!VAR_12) {
   VAR_12 = FUNC_6 (VAR_11, '\t');
  }
  if (VAR_12) {
   *VAR_12 = '\0';
   for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
    ;
   }
   FUNC_10 (VAR_6, VAR_11, VAR_0 - 1);
   FUNC_10 (VAR_7, VAR_12, VAR_0 - 1);

   VAR_13=VAR_12;
   VAR_12 = FUNC_6 (VAR_12, ',');
   if (VAR_12) {
    *VAR_12 = '\0';
    for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
     ;
    }
    FUNC_10 (VAR_7, VAR_13, VAR_0 - 1);
    FUNC_10 (VAR_8, VAR_12, VAR_0 - 1);
    VAR_13=VAR_12;
    VAR_12 = FUNC_6 (VAR_12, ',');
    if (VAR_12) {
     *VAR_12 = '\0';
     for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
      ;
     }
     FUNC_10 (VAR_8, VAR_13, VAR_0 - 1);
     FUNC_10 (VAR_9, VAR_12, VAR_0 - 1);
     VAR_13=VAR_12;

     VAR_12 = FUNC_6 (VAR_12, ',');
     if (VAR_12) {
      *VAR_12 = '\0';
      for (++VAR_12; *VAR_12 == ' '; VAR_12++) {
       ;
      }
      FUNC_10 (VAR_9, VAR_13, VAR_0 - 1);
      FUNC_10 (VAR_10, VAR_12, VAR_0 - 1);
     }
    }
   }
  }
  {
   const char *VAR_14[] = { VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 };
   int VAR_15 = 0;
   for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
    if (VAR_14[VAR_4][0] != '\0') {
     VAR_15++;
    }
   }
   FUNC_5 (VAR_15, VAR_14, VAR_3);
   {
    char *VAR_16 = FUNC_11 (VAR_3, "+ =");
    if (VAR_16) {
     FUNC_2 (VAR_16, " +=", 3);
    }
   }
  }
 }
 FUNC_0 (VAR_11);
 return 1;
}
