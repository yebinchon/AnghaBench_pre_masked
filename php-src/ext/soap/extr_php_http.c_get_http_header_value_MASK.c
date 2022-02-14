
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_2(VAR_0);



 VAR_2 = VAR_0;
 do {

  if (FUNC_3(VAR_2, VAR_1, VAR_4) == 0) {
   char *VAR_6;


   VAR_3 = VAR_2 + VAR_4;
   VAR_6 = FUNC_1(VAR_3, '\n');
   if (VAR_6 == ((void*)0)) {
    VAR_6 = VAR_0 + VAR_5;
   } else if (VAR_6 > VAR_3 && *(VAR_6-1) == '\r') {
    VAR_6--;
   }
   return FUNC_0(VAR_3, VAR_6 - VAR_3);
  }


  VAR_2 = FUNC_1(VAR_2, '\n');
  if (VAR_2) {
   VAR_2++;
  }

 } while (VAR_2);

 return ((void*)0);
}
