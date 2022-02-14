
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char) ;

void FUNC_8(char *VAR_1, char *VAR_2)
{
 HANDLE VAR_3;
 WIN32_FIND_DATA VAR_4;
 char *VAR_5;

 VAR_5 = VAR_2;

 if (*VAR_1 == '\"') {
  VAR_1++;
 }

 if (*(VAR_1 + FUNC_4(VAR_1) - 1) == '\"') {
  *(VAR_1 + FUNC_4(VAR_1) - 1) = '\0';
 }




 if (FUNC_2(*VAR_1) && *(VAR_1 + 1) == ':') {



  *(VAR_5++) = (char)FUNC_7(*VAR_1);
  FUNC_3(VAR_5++, ":\\");

  VAR_1 += 2;
 }
 else if (*VAR_1 == '\\' || *VAR_1 == '/') {



  if ((*(VAR_1 + 1) == '\\' || *(VAR_1 + 1) == '/') &&
   *(VAR_1 + 2) && *(VAR_1 + 2) != '\\' && *(VAR_1 + 2) != '/') {



   *(VAR_5++) = '\\';
   *(VAR_5++) = '\\';
   VAR_1 += 2;

   while (*VAR_1 && *VAR_1 != '\\' && *VAR_1 != '/') {
    *(VAR_5++) = *(VAR_1++);
   }
  }

  FUNC_3(VAR_5, "\\");
 }
 else {
  *VAR_5 = '\0';
 }



 while (*VAR_1 == '\\' || *VAR_1 == '/') {
  VAR_1++;
 }



 while (*VAR_1) {

  char *VAR_6 = VAR_1;



  while (*VAR_6 && *VAR_6 != '\\' && *VAR_6 != '/') {
   VAR_6++;
  }

  if ((VAR_6 - VAR_1) == 2 && !FUNC_5(VAR_1, "..", 2)) {

   if (VAR_5 != VAR_2) {
    *VAR_5++ = '\\';
   }

   FUNC_3(VAR_5, "..");
   VAR_5 += 2;
  }
  else if ((VAR_6 - VAR_1) > 1 || *VAR_1 != '.') {

   if (VAR_5 != VAR_2) {
    *(VAR_5++) = '\\';
   }

   FUNC_6(VAR_5, VAR_1, (VAR_6 - VAR_1));
   *(VAR_5 + (VAR_6 - VAR_1)) = '\0';

   VAR_3 = FUNC_1(VAR_2, &VAR_4);

   if (VAR_3 == VAR_0) {
    FUNC_3(VAR_5, VAR_1);
    break;
   }

   FUNC_0(VAR_3);

   FUNC_3(VAR_5, VAR_4.cFileName);
   VAR_5 += FUNC_4(VAR_5);
  }



  while (*VAR_6 == '\\' || *VAR_6 == '/') {
   VAR_6++;
  }

  VAR_1 = VAR_6;
 }
}
