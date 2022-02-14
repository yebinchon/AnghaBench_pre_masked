
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext ;
typedef int MMImageType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char FUNC_1 (char const) ;

MMImageType FUNC_2(const char *VAR_3)
{
 char VAR_4[4];
 const size_t VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]);
 size_t VAR_6;

 for (VAR_6 = 0; VAR_3[VAR_6] != '\0'; ++VAR_6) {
  if (VAR_6 >= VAR_5) return VAR_1;
  VAR_4[VAR_6] = FUNC_1(VAR_3[VAR_6]);
 }
 VAR_4[VAR_6] = '\0';

 if (FUNC_0(VAR_4, "png") == 0) {
  return VAR_2;
 } else if (FUNC_0(VAR_4, "bmp") == 0) {
  return VAR_0;
 } else {
  return VAR_1;
 }
}
