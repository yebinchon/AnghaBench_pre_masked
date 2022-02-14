
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lbuf ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

char *
FUNC_4(char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 char VAR_6[256];

 if (VAR_0) {
  VAR_4 = FUNC_2(VAR_2);
 } else {
  VAR_4 = FUNC_1(VAR_6, sizeof(VAR_6) - 1, VAR_1);
  if (VAR_4 != ((void*)0)) {
   VAR_5 = VAR_4 + FUNC_3(VAR_4) - 1;
   if (*VAR_5 == '\n')
    *VAR_5 = '\0';
  }
 }

 if (VAR_4 != ((void*)0)) {
  if (VAR_4[0] == '\0')
   return ((void*)0);
  VAR_3 = FUNC_0(VAR_4);
  VAR_4 = VAR_3;
 }
 return (VAR_4);
}
