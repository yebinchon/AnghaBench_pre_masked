
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
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char*,char*,int) ;
 int FUNC_5 (int,char const**,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int FUNC_11(RParse *VAR_0, const char *VAR_1, char *VAR_2) {
 char VAR_3[256], VAR_4[256], VAR_5[256], VAR_6[256];
 int VAR_7, VAR_8 = FUNC_9 (VAR_1);
 char *VAR_9, *VAR_10, *VAR_11;

 if (VAR_8 >= sizeof (VAR_3)) {
  return 0;
 }

 if (!(VAR_9 = FUNC_2 (VAR_8 + 1))) {
  return 0;
 }
 FUNC_3 (VAR_9, VAR_1, VAR_8 + 1);
 if (*VAR_9) {
  *VAR_3 = *VAR_4 = *VAR_5 = *VAR_6 = '\0';
  VAR_10 = FUNC_6 (VAR_9, ' ');
  if (!VAR_10) {
   VAR_10 = FUNC_6 (VAR_9, '\t');
  }
  if (VAR_10) {
   *VAR_10 = '\0';
   for (++VAR_10; *VAR_10 == ' '; VAR_10++) {
    ;
   }
   FUNC_10 (VAR_3, VAR_9, sizeof (VAR_3) - 1);
   FUNC_10 (VAR_4, VAR_10, sizeof (VAR_4) - 1);

   VAR_11 = VAR_10;
   if (*VAR_10 == '(') {
    VAR_10 = FUNC_6 (VAR_10+1, ')');
   }
   if (VAR_10 && *VAR_10 == '[') {
    VAR_10 = FUNC_6 (VAR_10+1, ']');
   }
   if (VAR_10 && *VAR_10 == '{') {
    VAR_10 = FUNC_6 (VAR_10+1, '}');
   }
   if (!VAR_10) {
    FUNC_0 ("Unbalanced bracket\n");
    FUNC_1(VAR_9);
    return 0;
   }
   VAR_10 = FUNC_6 (VAR_10, ',');
   if (VAR_10) {
    *VAR_10 = '\0';
    for (++VAR_10; *VAR_10 == ' '; VAR_10++) {
     ;
    }
    FUNC_10 (VAR_4, VAR_11, sizeof (VAR_4) - 1);
    FUNC_10 (VAR_5, VAR_10, sizeof (VAR_5) - 1);
    VAR_11 = VAR_10;
    VAR_10 = FUNC_6 (VAR_10, ',');
    if (VAR_10) {
     *VAR_10 = '\0';
     for (++VAR_10; *VAR_10 == ' '; VAR_10++) {
      ;
     }
     FUNC_10 (VAR_5, VAR_11, sizeof (VAR_5) - 1);
     FUNC_10 (VAR_6, VAR_10, sizeof (VAR_6) - 1);
    }
   }
  }
  {
   const char *VAR_12[] = { VAR_3, VAR_4, VAR_5, VAR_6 };
   int VAR_13 = 0;
   for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
    if (VAR_12[VAR_7][0]) {
     VAR_13++;
    }
   }
   FUNC_5 (VAR_13, VAR_12, VAR_2);
  }
 }
 {
  char *VAR_14 = FUNC_8 (VAR_2);
  VAR_14 = FUNC_4 (VAR_14, "+ -", "- ", 1);
  VAR_14 = FUNC_4 (VAR_14, "- -", "+ ", 1);
  FUNC_7 (VAR_2, VAR_14);
  FUNC_1 (VAR_14);
 }
 FUNC_1 (VAR_9);
 return 1;
}
