
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const char* VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0;
 while (*VAR_1 != '\0' && (*VAR_1 < '0' || *VAR_1 > '9') && (*VAR_1 != '*')) {
  VAR_1++;
 }
 if (*VAR_1 == '*') {
  VAR_2++;
  VAR_1++;
 }
 while (*VAR_1 != '\0') {
  if (*VAR_1 >= '0' && *VAR_1 <= '9') {
   if (VAR_3 == 0) {
      VAR_2++;
      VAR_3 = 1;
     }
   } else if (*VAR_1 == '*') {
   FUNC_0(VAR_0, "Encoding: '*' may only be first arraySize value in list");
  } else {
   VAR_3 = 0;
  }
  VAR_1++;
 }
 return VAR_2;
}
