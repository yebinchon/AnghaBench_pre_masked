
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, size_t VAR_1, u64 VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0, VAR_5 = 1;
 int VAR_6 = 0;

 VAR_0[0] = '\0';

 for (VAR_3 = 0; VAR_3 <= 64; VAR_3++, VAR_2 >>= 1) {
  if (VAR_2 & 1) {
   VAR_4 = VAR_3;
   switch (VAR_5) {
   case 0:
    VAR_6 += FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, ",");

   case 1:
    VAR_6 += FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, "%u", VAR_3);
    VAR_5 = 2;
    break;
   case 2:
    VAR_5 = 3;
    break;
   case 3:
    VAR_5 = 4;
    break;
   default:
    break;
   }
  } else {
   switch (VAR_5) {
   case 3:
    VAR_6 += FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, ",%u", VAR_4);
    VAR_5 = 0;
    break;
   case 4:
    VAR_6 += FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, "-%u", VAR_4);
    VAR_5 = 0;
    break;
   default:
    break;
   }
   if (VAR_5 != 1)
    VAR_5 = 0;
  }
 }
}
