
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RParse ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char const**,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(RParse *VAR_1, const char *VAR_2, char *VAR_3) {
 int VAR_4, VAR_5 = FUNC_6 (VAR_2);
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char *VAR_11, *VAR_12, *VAR_13, *VAR_14;


 if (!(VAR_11 = FUNC_1 (VAR_5 + 1))) {
  return 0;
 }
 FUNC_2 (VAR_11, VAR_2, VAR_5 + 1);

 FUNC_3 (VAR_11);
 if (*VAR_11) {
  VAR_6[0] = '\0';
  VAR_7[0] = '\0';
  VAR_8[0] = '\0';
  VAR_9[0] = '\0';
  VAR_10[0] = '\0';
  VAR_12 = FUNC_5 (VAR_11, ' ');
  if (!VAR_12) {
   VAR_12 = FUNC_5 (VAR_11, '\t');
  }
  if (VAR_12) {
   *VAR_12 = '\0';
   for (++VAR_12; *VAR_12 == ' '; VAR_12++) {

   }
   FUNC_7 (VAR_6, VAR_11, VAR_0 - 1);
   FUNC_7 (VAR_7, VAR_12, VAR_0 - 1);

   VAR_13 = VAR_12;
   VAR_14 = FUNC_5 (VAR_12, '(');
   if (VAR_14 && FUNC_5 (VAR_12, ',') > VAR_14) {
    VAR_12 = FUNC_5 (VAR_12, ')');
    if (VAR_12) {
     VAR_12 = FUNC_5 (VAR_12, ',');
    }
   } else {
    VAR_12 = FUNC_5 (VAR_12, ',');
   }
   if (VAR_12) {
    *VAR_12 = '\0';
    for (++VAR_12; *VAR_12 == ' '; VAR_12++) {

    }
    FUNC_7 (VAR_7, VAR_13, VAR_0 - 1);
    FUNC_7 (VAR_8, VAR_12, VAR_0 - 1);
    VAR_13 = VAR_12;
    VAR_14 = FUNC_5 (VAR_12, '(');
    if (VAR_14 && FUNC_5 (VAR_12, ',') > VAR_14) {
     VAR_12 = FUNC_5 (VAR_12, ')');
     if (VAR_12) {
      VAR_12 = FUNC_5 (VAR_12, ',');
     }
    } else {
     VAR_12 = FUNC_5 (VAR_12, ',');
    }
    if (VAR_12) {
     *VAR_12 = '\0';
     for (++VAR_12; *VAR_12 == ' '; VAR_12++) {

     }
     FUNC_7 (VAR_8, VAR_13, VAR_0 - 1);
     FUNC_7 (VAR_9, VAR_12, VAR_0 - 1);
     VAR_13 = VAR_12;

     VAR_14 = FUNC_5 (VAR_12, '(');
     if (VAR_14 && FUNC_5 (VAR_12, ',') > VAR_14) {
      VAR_12 = FUNC_5 (VAR_12, ')');
      if (VAR_12) {
       VAR_12 = FUNC_5 (VAR_12, ',');
      }
     } else {
      VAR_12 = FUNC_5 (VAR_12, ',');
     }
     if (VAR_12) {
      *VAR_12 = '\0';
      for (++VAR_12; *VAR_12 == ' '; VAR_12++) {

      }
      FUNC_7 (VAR_9, VAR_13, VAR_0 - 1);
      FUNC_7 (VAR_10, VAR_12, VAR_0 - 1);
     }
    }
   }
  } else {
   FUNC_7 (VAR_6, VAR_11, VAR_0 - 1);
  }
  {
   const char *VAR_15[] = { VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 };
   int VAR_16 = 0;
   for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
    if (VAR_15[VAR_4][0] != '\0') {
     VAR_16++;
    }
   }
   FUNC_4 (VAR_16, VAR_15, VAR_3);
  }
 }
 FUNC_0 (VAR_11);
 return 1;
}
