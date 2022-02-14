
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (char*,char**,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int *VAR_5, char ***VAR_6)
{
 char *VAR_7;
 int VAR_8;

 while ((VAR_8 = FUNC_0(*VAR_5, *VAR_6, "a:i:o:")) != -1) {
  switch (VAR_8) {
  default:
   FUNC_2("Unknown option");
   break;
  case 'a':
   VAR_1 = FUNC_1(VAR_2, &VAR_7, 0);
   if (VAR_7 == VAR_2 || *VAR_7 != 0)
    FUNC_2("loadaddress must be a decimal or hexadecimal 32-bit value");
   break;
  case 'i':
   VAR_0 = VAR_2;
   break;
  case 'o':
   VAR_4 = VAR_2;
   break;
  }
 }
 *VAR_5 -= VAR_3;
 *VAR_6 += VAR_3;
}
