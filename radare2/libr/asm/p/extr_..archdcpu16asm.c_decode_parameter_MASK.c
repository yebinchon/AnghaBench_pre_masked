
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ut8 FUNC_4(char* VAR_1, int* VAR_2, ut16* VAR_3) {

 int VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0;
 if (VAR_1[0] == '[') {
  VAR_5 = 1;
  VAR_1++;
 }
 if (VAR_1[FUNC_2(VAR_1) - 1] == ']') {
  VAR_6 = 1;
  VAR_1[FUNC_2(VAR_1) - 1] = 0;
 }


 if (VAR_5 == 1) {
  VAR_4 = 1;
  if (VAR_6 != 1) {
   FUNC_0 (VAR_0, "Missing last square bracket\n");
   return 0;
  }
 } else {
  if (VAR_6 == 1) {
   FUNC_0 (VAR_0, "Missing first square bracket\n");
   return 0;
  }
 }


 if (VAR_1[0] == '0' && VAR_1[1] == 'X') {

  ut16 VAR_7 = 0;
  VAR_1 = VAR_1 + 2;
  int VAR_8 = FUNC_2(VAR_1);
  int VAR_9 = 0;
  int VAR_10 = -1;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

   int VAR_11 = -1;
   char VAR_12 = VAR_1[VAR_9];
   if (VAR_12 >= '0' && VAR_12 <= '9')
    VAR_11 = VAR_12 - '0';
   if (VAR_12 >= 'A' && VAR_12 <= 'F')
    VAR_11 = VAR_12 - 'A' + 10;

   if (VAR_12 == '+' && VAR_4 == 1) {
    VAR_10 = FUNC_1(VAR_1[VAR_9 + 1]);
    VAR_9++;
   } else {

    if (VAR_11 == -1) {
     FUNC_0 (VAR_0, "invalid literal\n");
     return 0;
    }


    VAR_7 = (VAR_7 << 4) + VAR_11;
   }
  }

  if (VAR_7 <= 0x1f && VAR_4 == 0)
   return VAR_7 + 0x20;

  *VAR_2 = 1;
  *VAR_3 = VAR_7;

  if (VAR_4 == 1) {
   if (VAR_10 != -1)
    return 0x10 + VAR_10;
   return 0x1e;
  }
  return 0x1f;
 }


 if (VAR_1[0] >= '0' && VAR_1[0] <= '9') {

  ut16 VAR_13 = 0;
  int VAR_14 = FUNC_2(VAR_1);
  int VAR_15 = 0;
  int VAR_16 = -1;
  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {

   int VAR_17 = -1;
   char VAR_18 = VAR_1[VAR_15];
   if (VAR_18 >= '0' && VAR_18 <= '9')
    VAR_17 = VAR_18 - '0';

   if (VAR_18 == '+' && VAR_4 == 1) {
    VAR_16 = FUNC_1(VAR_1[VAR_15 + 1]);
    VAR_15++;
   } else {

    if (VAR_17 == -1) {
     FUNC_0 (VAR_0, "invalid literal\n");
     return 0;
    }


    VAR_13 = (VAR_13 * 10) + VAR_17;
   }
  }
  if (VAR_13 <= 0x1f && VAR_4 == 0)
   return VAR_13 + 0x20;

  *VAR_2 = 1;
  *VAR_3 = VAR_13;

  if (VAR_4 == 1) {
   if (VAR_16 != -1)
    return 0x10 + VAR_16;
   return 0x1e;
  }
  return 0x1f;
 }


 if (VAR_1[1] == 0) {
  ut8 VAR_19 = FUNC_1 (VAR_1[0]);
  if (VAR_4 == 1)
   VAR_19 += 0x08;
  return VAR_19;
 }


 if (!FUNC_3 ("POP", VAR_1, 3)) return 0x18;
 if (!FUNC_3 ("PEEK", VAR_1, 4)) return 0x19;
 if (!FUNC_3 ("PUSH", VAR_1, 4)) return 0x1a;
 if (!FUNC_3 ("SP", VAR_1, 2)) return 0x1b;
 if (!FUNC_3 ("PC", VAR_1, 2)) return 0x1c;
 if (!FUNC_3 ("O", VAR_1, 1)) return 0x1d;


 *VAR_2 = 1;


 *VAR_3 = 0;
 return 0x1f;
}
