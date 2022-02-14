
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int w3 ;
typedef int w2 ;
typedef int w1 ;
typedef int w0 ;
struct TYPE_3__ {char* retleave_asm; } ;
typedef TYPE_1__ RParse ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,char**,char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10 (RParse *VAR_0, const char *VAR_1, char *VAR_2) {
 char VAR_3[256], VAR_4[256], VAR_5[256], VAR_6[256];
 int VAR_7;
 size_t VAR_8 = FUNC_8 (VAR_1);
 int VAR_9 = 32;
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 if (VAR_8 >= sizeof (VAR_3) || VAR_9 >= sizeof (VAR_3)) {
  return 0;
 }

 if (!(VAR_10 = FUNC_7 (VAR_1))) {
  return 0;
 }
 *VAR_3 = *VAR_4 = *VAR_5 = *VAR_6 = '\0';
 if (*VAR_10) {
  VAR_13 = FUNC_6 (VAR_10, '\0');
  VAR_11 = FUNC_6 (VAR_10, ' ');
  if (!VAR_11) {
   VAR_11 = FUNC_6 (VAR_10, '\t');
  }
  if (!VAR_11) {
   VAR_11 = VAR_13;
  }
  *VAR_11 = '\0';
  if (VAR_11 != VAR_13) {
   for (++VAR_11; *VAR_11 == ' '; VAR_11++) {
    ;
   }
  }
  FUNC_4 (VAR_3, VAR_10, sizeof (VAR_3));
  FUNC_4 (VAR_4, VAR_11, sizeof (VAR_4));
  VAR_12 = VAR_11;
  VAR_11 = FUNC_6 (VAR_11, ',');
  if (VAR_11) {
   *VAR_11 = '\0';
   for (++VAR_11; *VAR_11 == ' '; VAR_11++) {
    ;
   }
   FUNC_4 (VAR_4, VAR_12, sizeof (VAR_4));
   FUNC_4 (VAR_5, VAR_11, sizeof (VAR_5));
   VAR_12 = VAR_11;
   VAR_11 = FUNC_6 (VAR_11, ',');
   if (VAR_11) {
    *VAR_11 = '\0';
    for (++VAR_11; *VAR_11 == ' '; VAR_11++) {
     ;
    }
    FUNC_4 (VAR_5, VAR_12, sizeof (VAR_5));
    FUNC_4 (VAR_6, VAR_11, sizeof (VAR_6));
   }
  }
 }
 char *VAR_14[] = { VAR_3, VAR_4, VAR_5, VAR_6 };
 int VAR_15 = 0;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if (VAR_14[VAR_7][0] != '\0') {
   VAR_15++;
  }
 }


 if (FUNC_9 (VAR_3, "mul")) {
  if (VAR_15 == 2)
  {
   FUNC_4 (VAR_14[3], VAR_14[1], sizeof (VAR_6));

   switch (VAR_14[3][0]) {
   case 'q':
   case 'r':
    FUNC_4 (VAR_14[1], "rax", sizeof (VAR_4));
    FUNC_4 (VAR_14[2], "rax", sizeof (VAR_5));
    break;
   case 'd':
   case 'e':
    if (FUNC_8 (VAR_14[3]) > 2) {
     FUNC_4 (VAR_14[1], "eax", sizeof (VAR_4));
     FUNC_4 (VAR_14[2], "eax", sizeof (VAR_5));
     break;
    }
   default :
    if (VAR_14[3][1] == 'x' || VAR_14[3][1] == 'p' || VAR_14[3][1] == 'i' || VAR_14[3][0] == 'w') {

     FUNC_4 (VAR_14[1], "ax", sizeof (VAR_4));
     FUNC_4 (VAR_14[2], "ax", sizeof (VAR_5));
    } else {
     FUNC_4 (VAR_14[1], "al", sizeof (VAR_4));
     FUNC_4 (VAR_14[2], "al", sizeof (VAR_5));
    }
   }
  }
  else if (VAR_15 == 3)
  {
   FUNC_4 (VAR_14[3], VAR_14[2], sizeof (VAR_6));
   FUNC_4 (VAR_14[2], VAR_14[1], sizeof (VAR_5));
  }

  FUNC_5 (VAR_15, VAR_14, VAR_2);

 } else if ((FUNC_9 (VAR_4, "ax") || FUNC_9 (VAR_4, "ah") || FUNC_9 (VAR_4, "al")) && !VAR_0->retleave_asm) {
  if (!(VAR_0->retleave_asm = (char *) FUNC_2 (VAR_9))) {
   return 0;
  }
  FUNC_3 (VAR_0->retleave_asm, VAR_9, "return %s", VAR_5);
  FUNC_5 (VAR_15, VAR_14, VAR_2);
 } else if ((FUNC_9 (VAR_3, "leave") && VAR_0->retleave_asm) || (FUNC_9 (VAR_3, "pop") && FUNC_9 (VAR_4, "bp"))) {
  FUNC_4 (VAR_14[0], " \0", 2);
  FUNC_4 (VAR_14[1], " \0", 2);
  FUNC_5 (VAR_15, VAR_14, VAR_2);
 } else if (FUNC_9 (VAR_3, "ret") && VAR_0->retleave_asm) {
  FUNC_4 (VAR_2, VAR_0->retleave_asm, VAR_9);
  FUNC_0 (VAR_0->retleave_asm);
 } else if (VAR_0->retleave_asm) {
  FUNC_0 (VAR_0->retleave_asm);
  FUNC_5 (VAR_15, VAR_14, VAR_2);
 } else {
  FUNC_5 (VAR_15, VAR_14, VAR_2);
 }
 FUNC_1 (VAR_10);
 return 1;
}
