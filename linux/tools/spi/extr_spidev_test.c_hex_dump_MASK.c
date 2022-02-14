
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, size_t VAR_1, size_t VAR_2,
       char *VAR_3)
{
 int VAR_4 = 0;
 const unsigned char *VAR_5 = VAR_0;
 const unsigned char *VAR_6 = VAR_5;
 unsigned char VAR_7;

 FUNC_0("%s | ", VAR_3);
 while (VAR_1-- > 0) {
  FUNC_0("%02X ", *VAR_5++);
  if (!(++VAR_4 % VAR_2) || (VAR_1 == 0 && VAR_4 % VAR_2)) {
   if (VAR_1 == 0) {
    while (VAR_4++ % VAR_2)
     FUNC_0("__ ");
   }
   FUNC_0(" |");
   while (VAR_6 < VAR_5) {
    VAR_7 = *VAR_6++;
    FUNC_0("%c", (VAR_7 < 32 || VAR_7 > 126) ? '.' : VAR_7);
   }
   FUNC_0("|\n");
   if (VAR_1 > 0)
    FUNC_0("%s | ", VAR_3);
  }
 }
}
