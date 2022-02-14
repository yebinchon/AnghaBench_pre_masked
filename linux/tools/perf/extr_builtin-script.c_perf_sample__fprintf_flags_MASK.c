
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(u32 VAR_4, FILE *VAR_5)
{
 const char *VAR_6 = VAR_0;
 const int VAR_7 = FUNC_2(VAR_0);
 bool VAR_8 = VAR_4 & VAR_1;
 const char *VAR_9 = ((void*)0);
 char VAR_10[33];
 int VAR_11, VAR_12 = 0;

 VAR_9 = FUNC_1(VAR_4 & ~VAR_1);
 if (VAR_9)
  return FUNC_0(VAR_5, "  %-15s%4s ", VAR_9, VAR_8 ? "(x)" : "");

 if (VAR_4 & VAR_2) {
  VAR_9 = FUNC_1(VAR_4 & ~(VAR_1 | VAR_2));
  if (VAR_9)
   return FUNC_0(VAR_5, "  tr strt %-7s%4s ", VAR_9, VAR_8 ? "(x)" : "");
 }

 if (VAR_4 & VAR_3) {
  VAR_9 = FUNC_1(VAR_4 & ~(VAR_1 | VAR_3));
  if (VAR_9)
   return FUNC_0(VAR_5, "  tr end  %-7s%4s ", VAR_9, VAR_8 ? "(x)" : "");
 }

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++, VAR_4 >>= 1) {
  if (VAR_4 & 1)
   VAR_10[VAR_12++] = VAR_6[VAR_11];
 }
 for (; VAR_11 < 32; VAR_11++, VAR_4 >>= 1) {
  if (VAR_4 & 1)
   VAR_10[VAR_12++] = '?';
 }
 VAR_10[VAR_12] = 0;

 return FUNC_0(VAR_5, "  %-19s ", VAR_10);
}
