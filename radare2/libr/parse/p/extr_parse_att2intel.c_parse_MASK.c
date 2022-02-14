
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w3 ;
typedef int w2 ;
typedef int w1 ;
typedef int w0 ;
typedef int RParse ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char const**,char*) ;
 int FUNC_8 (char*,char*,int,char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char const*) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(RParse *VAR_0, const char *VAR_1, char *VAR_2) {
 int VAR_3, VAR_4;
 char VAR_5[32];
 char VAR_6[32];
 char VAR_7[32];
 char VAR_8[32];
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;


 VAR_9 = FUNC_11 (VAR_1);
 if (!VAR_9) {
  return 0;
 }
 FUNC_6 (VAR_9);

 VAR_10 = FUNC_9 (VAR_9, '#');
 if (VAR_10) {
  *VAR_10 = 0;
  FUNC_5 (VAR_9);
 }
 if (*VAR_9 == '.' || VAR_9[FUNC_12(VAR_9)-1] == ':') {
  FUNC_1 (VAR_9);
  FUNC_10 (VAR_2, VAR_1);
  return 1;
 }
 FUNC_4 (VAR_9, '$', 0);
 FUNC_4 (VAR_9, '%', 0);
 FUNC_4 (VAR_9, '\t', ' ');
 FUNC_4 (VAR_9, '(', '[');
 FUNC_4 (VAR_9, ')', ']');
 VAR_10 = FUNC_9 (VAR_9, '[');
 if (VAR_10) {
  *VAR_10 = 0;
  VAR_12 = (char*)FUNC_3 (VAR_9, ' ');
  if (!VAR_12) {
   VAR_12 = (char *)FUNC_3 (VAR_9, ',');
  }
  if (VAR_12) {
   VAR_4 = FUNC_0 (VAR_12+1);
   *VAR_10 = '[';
   FUNC_2 (VAR_12+1, VAR_10, FUNC_12 (VAR_10)+1);
   VAR_10 = (char*)FUNC_3 (VAR_9, ']');
   if (VAR_4 && VAR_10) {
    char *VAR_13 = FUNC_11 (VAR_10+1);
    if (VAR_4 > 0) {
     FUNC_8 (VAR_10, "+%d]%s", VAR_4, VAR_13);
    } else {
     FUNC_8 (VAR_10, "%d]%s", VAR_4, VAR_13);
    }
    FUNC_1 (VAR_13);
   }
  } else {
   *VAR_10 = '[';
  }
 }

 if (*VAR_9) {
  *VAR_5 = *VAR_6 = *VAR_7 = *VAR_8 = 0;
  VAR_10 = FUNC_9 (VAR_9, ' ');
  if (!VAR_10) {
   VAR_10 = FUNC_9 (VAR_9, '\t');
  }
  if (VAR_10) {
   *VAR_10 = '\0';
   for (++VAR_10; *VAR_10 == ' '; VAR_10++) {
    ;
   }
   FUNC_13 (VAR_5, VAR_9, sizeof(VAR_5) - 1);
   FUNC_13 (VAR_6, VAR_10, sizeof(VAR_6) - 1);

   VAR_11 = VAR_10;
   VAR_10 = FUNC_9 (VAR_10, ',');
   if (VAR_10) {
    *VAR_10 = '\0';
    for (++VAR_10; *VAR_10 == ' '; VAR_10++) {
     ;
    }
    FUNC_13 (VAR_6, VAR_11, sizeof(VAR_6)-1);
    FUNC_13 (VAR_7, VAR_10, sizeof(VAR_7)-1);
    VAR_10 = FUNC_9 (VAR_10, ',');
    if (VAR_10) {
     *VAR_10 = '\0';
     for (++VAR_10; *VAR_10 == ' '; VAR_10++) {
      ;
     }
     FUNC_13 (VAR_7, VAR_11, sizeof(VAR_7)-1);
     FUNC_13 (VAR_8, VAR_10, sizeof(VAR_8)-1);
    }
   }
  }
  {
   const char *VAR_14[] = { VAR_5, VAR_6, VAR_7, VAR_8 };
   int VAR_15 = 0;
   for (VAR_3=0; VAR_3<4; VAR_3++) {
    if (VAR_14[VAR_3][0] != '\0') {
     VAR_15++;
    }
   }
   FUNC_7 (VAR_15, VAR_14, VAR_2);
  }
 }
 FUNC_1 (VAR_9);
 return 1;
}
