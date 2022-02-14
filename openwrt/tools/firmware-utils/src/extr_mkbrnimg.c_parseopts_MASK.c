
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 (int,char**,char*) ;
 void* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 void* FUNC_1 (char*,char**,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int *VAR_6, char ***VAR_7)
{
 char *VAR_8;
 int VAR_9;

 while ((VAR_9 = FUNC_0(*VAR_6, *VAR_7, "o:m:s:p:")) != -1) {
  switch (VAR_9) {
  default:
   FUNC_2("Unknown option");
   break;
  case 'o':
   VAR_4 = VAR_2;
   break;
  case 'm':
   VAR_1 = FUNC_1(VAR_2, &VAR_8, 0);
   if (VAR_8 == VAR_2 || *VAR_8 != 0)
    FUNC_2("magic must be a decimal or hexadecimal 32-bit value");
   break;
  case 's':
   VAR_5 = VAR_2;
   break;
  case 'p':
   VAR_0 = FUNC_1(VAR_2, &VAR_8, 0);
   if (VAR_8 == VAR_2 || *VAR_8 != 0)
    FUNC_2("'crc32 poly' must be a decimal or hexadecimal 32-bit value");
   break;
  }
 }
 *VAR_6 -= VAR_3;
 *VAR_7 += VAR_3;
}
