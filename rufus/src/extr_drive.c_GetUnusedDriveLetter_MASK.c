
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int drives ;
typedef int DWORD ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;

char FUNC_6(void)
{
 DWORD VAR_0;
 char VAR_1 = 'Z'+1, *VAR_2, VAR_3[26*4 + 1];

 VAR_0 = FUNC_0(sizeof(VAR_3), VAR_3);
 if (VAR_0 == 0) {
  FUNC_5("GetLogicalDriveStrings failed: %s", FUNC_1());
  goto out;
 }
 if (VAR_0 > sizeof(VAR_3)) {
  FUNC_5("GetLogicalDriveStrings: Buffer too small (required %d vs. %d)", VAR_0, sizeof(VAR_3));
  goto out;
 }

 for (VAR_1 = 'C'; VAR_1 <= 'Z'; VAR_1++) {
  for (VAR_2 = VAR_3 ;*VAR_2; VAR_2 += FUNC_3(VAR_2)+1) {
   if (!FUNC_2(*VAR_2))
    continue;
   if (VAR_1 == (char)FUNC_4((int)*VAR_2))
    break;
  }
  if (!*VAR_2)
   break;
 }

out:
 return (VAR_1>'Z')?0:VAR_1;
}
