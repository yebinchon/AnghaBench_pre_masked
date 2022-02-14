
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut32 ;
typedef int type ;
typedef int arg ;


 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static ut32 FUNC_4(const char *VAR_0) {
 char VAR_1[128];
 char VAR_2[128];
 char *VAR_3;
 ut32 VAR_4=0, VAR_5=0;
 const char *VAR_6[] = {
  "LSL", "LSR", "ASR", "ROR",
  0, "RRX"
 };

 FUNC_3 (VAR_1, VAR_0, sizeof (VAR_1) - 1);

 if (!FUNC_1 (VAR_1, VAR_6[5])) {

  VAR_5 = 6;
 } else {
  VAR_3 = FUNC_2 (VAR_1, ' ');
  if (!VAR_3) {
   return 0;
  }
  *VAR_3 = 0;
  FUNC_3 (VAR_2, ++VAR_3, sizeof(VAR_2) - 1);

  for (VAR_4 = 0; VAR_6[VAR_4]; VAR_4++) {
   if (!FUNC_1 (VAR_1, VAR_6[VAR_4])) {
    VAR_5 = 1;
    break;
   }
  }
  if (!VAR_5) {
   return 0;
  }
  VAR_5 = VAR_4 * 2;
  if ((VAR_4 = FUNC_0 (VAR_2)) != -1) {
   VAR_4 <<= 8;

   VAR_4 |= (1 << 4);
   VAR_4 |= VAR_5 << 4;
   if (VAR_5 == 6) {
    VAR_4 |= (1 << 20);
   }
  } else {
   char *VAR_7 = FUNC_2 (VAR_2, ']');
   if (VAR_7) {
    *VAR_7 = '\0';
   }

   VAR_4 &= 0x1f;
   if (!VAR_4) {
    VAR_4 = 32;
   }
   VAR_4 = (VAR_4 * 8);
   VAR_4 |= VAR_5;
   VAR_4 = VAR_4 << 4;
  }
 }

 return VAR_4;
}
