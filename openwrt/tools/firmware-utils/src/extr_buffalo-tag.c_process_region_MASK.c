
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_4)
{
 int VAR_5;

 if (FUNC_3(VAR_4) != 2) {
  FUNC_1("invalid region code '%s'", VAR_4);
  return -1;
 }

 if (FUNC_2(VAR_4, "M_") == 0) {
  VAR_1 = VAR_4;
  VAR_2 |= ~0;
  VAR_0 = 32;
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
  if (FUNC_2(VAR_4, VAR_3[VAR_5]) == 0) {
   VAR_1 = VAR_4;
   VAR_2 |= 1 << VAR_5;
   VAR_0++;
   return 0;
  }

 FUNC_1("unknown region code '%s'", VAR_4);
 return -1;
}
