
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static bool
FUNC_4(char **VAR_1, void **VAR_2, GucSource VAR_3)
{
 int VAR_4 = FUNC_2(*VAR_1);
 char *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;





 VAR_6 = FUNC_3(*VAR_1,
       "0123456789_"
       "abcdefghijklmnopqrstuvwxyz"
       "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
       ", \n\t");
 if (VAR_6 != VAR_4)
 {
  FUNC_0("invalid character");
  return 0;
 }

 if (*VAR_1[0] == '\0')
 {
  *VAR_2 = ((void*)0);
  return 1;
 }






 VAR_5 = FUNC_1(VAR_0, VAR_4 + 1 + 1);
 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_4; VAR_7++)
 {
  if ((*VAR_1)[VAR_7] == ',')
   VAR_5[VAR_8++] = '\0';
  else if ((*VAR_1)[VAR_7] == ' ' ||
     (*VAR_1)[VAR_7] == '\n' ||
     (*VAR_1)[VAR_7] == '\t')
   ;
  else
   VAR_5[VAR_8++] = (*VAR_1)[VAR_7];
 }


 VAR_5[VAR_8] = '\0';
 VAR_5[VAR_8 + 1] = '\0';

 *VAR_2 = VAR_5;
 return 1;
}
