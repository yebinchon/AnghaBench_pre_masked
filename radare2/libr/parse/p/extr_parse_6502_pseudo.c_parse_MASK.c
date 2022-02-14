
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w2 ;
typedef int w1 ;
typedef int w0 ;
typedef int RParse ;
typedef int ADDR_TYPE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char,char) ;
 int FUNC_5 (int,char const**,char*,int ) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(RParse *VAR_0, const char *VAR_1, char *VAR_2) {
 char VAR_3[256], VAR_4[256], VAR_5[256];
 int VAR_6, VAR_7 = FUNC_7 (VAR_1);
 char *VAR_8, *VAR_9, *VAR_10;
 ADDR_TYPE VAR_11;

 if (VAR_7 >= sizeof (VAR_3)) {
  return 0;
 }

 if (!(VAR_8 = FUNC_2 (VAR_7 + 1))) {
  return 0;
 }
 FUNC_3 (VAR_8, VAR_1, VAR_7 + 1);

 if (*VAR_8) {
  VAR_11 = FUNC_0 (VAR_8);
  FUNC_4 (VAR_8, '(', ' ');
  FUNC_4 (VAR_8, ')', ' ');
  *VAR_3 = *VAR_4 = *VAR_5 = '\0';
  VAR_9 = FUNC_6 (VAR_8, ' ');
  if (!VAR_9) {
   VAR_9 = FUNC_6 (VAR_8, '\t');
  }
  if (VAR_9) {
   *VAR_9 = '\0';
   for (++VAR_9; *VAR_9 == ' '; VAR_9++) {
    ;
   }
   FUNC_8 (VAR_3, VAR_8, sizeof(VAR_3) - 1);
   FUNC_8 (VAR_4, VAR_9, sizeof(VAR_4) - 1);
   VAR_10 = VAR_9;
   VAR_9 = FUNC_6 (VAR_9, ',');
   if (VAR_9) {
    *VAR_9 = '\0';
    for (++VAR_9; *VAR_9 == ' '; VAR_9++) {
     ;
    }
    FUNC_8 (VAR_4, VAR_10, sizeof(VAR_4) - 1);
    FUNC_8 (VAR_5, VAR_9, sizeof(VAR_5) - 1);
   }
  } else {
   FUNC_8 (VAR_3, VAR_8, sizeof(VAR_3) - 1);
  }

  const char *VAR_12[] = {VAR_3, VAR_4, VAR_5};
  int VAR_13 = 0;
  for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
   if (VAR_12[VAR_6][0]) {
    VAR_13++;
   }
  }
  FUNC_5 (VAR_13, VAR_12, VAR_2, VAR_11);
 }

 FUNC_1 (VAR_8);

 return 1;
}
