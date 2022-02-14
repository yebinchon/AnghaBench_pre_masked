
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 int FUNC_3 (char*,char const*,int) ;

void FUNC_4(int VAR_1, const char *VAR_2[])
{
 char VAR_3[50], *FUNC_5(), *VAR_4;

 if (VAR_1 > 1) {
  ++VAR_2;
  --VAR_1;
  (void) FUNC_3(VAR_3,*VAR_2,49);
  VAR_3[49] = '\0';
  while (VAR_1 > 1) {
   --VAR_1;
   ++VAR_2;
   (void) FUNC_2(VAR_3,*VAR_2, 49-FUNC_1(VAR_3));
  }
  VAR_4 = VAR_3;
 }
 else {
  VAR_4 = FUNC_5("Account:");
 }
 (void) FUNC_0("ACCT %s", VAR_4);
}
