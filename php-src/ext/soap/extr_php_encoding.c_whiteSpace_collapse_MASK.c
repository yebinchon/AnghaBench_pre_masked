
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;


 int FUNC_0 (char*) ;

void FUNC_1(xmlChar* VAR_0)
{
 xmlChar *VAR_1;
 xmlChar VAR_2;

 VAR_1 = VAR_0;
 FUNC_0(VAR_0);
 while (*VAR_0 == ' ') {
  VAR_0++;
 }
 VAR_2 = '\0';
 while (*VAR_0 != '\0') {
  if (*VAR_0 != ' ' || VAR_2 != ' ') {
   *VAR_1 = *VAR_0;
   VAR_1++;
  }
  VAR_2 = *VAR_0;
  VAR_0++;
 }
 if (VAR_2 == ' ') {
   --VAR_1;
 }
 *VAR_1 = '\0';
}
