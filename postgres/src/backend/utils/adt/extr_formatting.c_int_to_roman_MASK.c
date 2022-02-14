
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numstr ;


 int FUNC_0 (char*,char,int) ;
 scalar_t__ FUNC_1 (int) ;
 char** VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4(int VAR_3)
{
 int VAR_4 = 0,
    VAR_5 = 0;
 char *VAR_6 = ((void*)0),
      *VAR_7,
    VAR_8[12];

 VAR_7 = (char *) FUNC_1(16);
 *VAR_7 = '\0';

 if (VAR_3 > 3999 || VAR_3 < 1)
 {
  FUNC_0(VAR_7, '#', 15);
  return VAR_7;
 }
 VAR_4 = FUNC_2(VAR_8, sizeof(VAR_8), "%d", VAR_3);

 for (VAR_6 = VAR_8; *VAR_6 != '\0'; VAR_6++, --VAR_4)
 {
  VAR_5 = *VAR_6 - 49;
  if (VAR_5 < 0)
   continue;

  if (VAR_4 > 3)
  {
   while (VAR_5-- != -1)
    FUNC_3(VAR_7, "M");
  }
  else
  {
   if (VAR_4 == 3)
    FUNC_3(VAR_7, VAR_2[VAR_5]);
   else if (VAR_4 == 2)
    FUNC_3(VAR_7, VAR_1[VAR_5]);
   else if (VAR_4 == 1)
    FUNC_3(VAR_7, VAR_0[VAR_5]);
  }
 }
 return VAR_7;
}
