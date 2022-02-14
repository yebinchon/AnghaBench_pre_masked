
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, size_t VAR_2, u64 VAR_3)
{
 const unsigned char *VAR_4 = (unsigned char *)VAR_1;
 const unsigned char *VAR_5 = VAR_4;
 size_t VAR_6 = 32;
 unsigned char VAR_7;
 char VAR_8[32];
 int VAR_9 = 0;

 if (!VAR_0)
  return;

 FUNC_1(VAR_8, "addr=%llu", VAR_3);
 FUNC_0("length = %zu\n", VAR_2);
 FUNC_0("%s | ", VAR_8);
 while (VAR_2-- > 0) {
  FUNC_0("%02X ", *VAR_4++);
  if (!(++VAR_9 % VAR_6) || (VAR_2 == 0 && VAR_9 % VAR_6)) {
   if (VAR_2 == 0) {
    while (VAR_9++ % VAR_6)
     FUNC_0("__ ");
   }
   FUNC_0(" | ");
   while (VAR_5 < VAR_4) {
    VAR_7 = *VAR_5++;
    FUNC_0("%c", (VAR_7 < 33 || VAR_7 == 255) ? 0x2E : VAR_7);
   }
   FUNC_0("\n");
   if (VAR_2 > 0)
    FUNC_0("%s | ", VAR_8);
  }
 }
 FUNC_0("\n");
}
