
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* PCHAR ;
typedef char CHAR ;


 int FUNC_0 (char*,char*,int,int) ;

PCHAR
FUNC_1(ULONG VAR_0,
      ULONG VAR_1)
{
   static CHAR VAR_2[64];
   static PCHAR VAR_3[] =
   {
      "80486DX", "80486DX",
      "80486SX", "80486DX/2 or 80487",
      "80486SL", "Intel5X2(tm)",
      "Unknown", "Unknown",
      "80486DX/4"
   };
   if (VAR_0 == 0x6)
      return ("Pentium(tm) Pro");
   if (VAR_0 == 0x5)
      return ("Pentium(tm)");
   if (VAR_0 == 0x0F && VAR_1 == 0x0F)
      return("Special controller");
   if (VAR_0 == 0x0F && VAR_1 == 0x00)
      return("Pentium 4(tm)");
   if (VAR_0 == 0x04 && VAR_1 < 9)
      return VAR_3[VAR_1];
   FUNC_0(VAR_2, "Unknown CPU with family ID %ld and model ID %ld", VAR_0, VAR_1);
   return VAR_2;
}
