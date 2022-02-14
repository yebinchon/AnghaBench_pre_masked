
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int fsec_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,int,int) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, int VAR_1, fsec_t VAR_2, int VAR_3, bool VAR_4)
{
 FUNC_1(VAR_3 >= 0);

 if (VAR_4)
  VAR_0 = FUNC_3(VAR_0, FUNC_0(VAR_1), 2);
 else
  VAR_0 = FUNC_2(VAR_0, FUNC_0(VAR_1));


 if (VAR_2 != 0)
 {
  int32 VAR_5 = FUNC_0(VAR_2);
  char *VAR_6 = &VAR_0[VAR_3 + 1];
  bool VAR_7 = 0;

  *VAR_0++ = '.';






  while (VAR_3--)
  {
   int32 VAR_8 = VAR_5;
   int32 VAR_9;

   VAR_5 /= 10;
   VAR_9 = VAR_8 - VAR_5 * 10;


   if (VAR_9)
    VAR_7 = 1;

   if (VAR_7)
    VAR_0[VAR_3] = '0' + VAR_9;
   else
    VAR_6 = &VAR_0[VAR_3];
  }






  if (VAR_5)
   return FUNC_2(VAR_0, FUNC_0(VAR_2));

  return VAR_6;
 }
 else
  return VAR_0;
}
