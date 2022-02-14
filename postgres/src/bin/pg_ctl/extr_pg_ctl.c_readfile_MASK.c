
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char const*,int,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static char **
FUNC_7(const char *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 char **VAR_6;
 char *VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 struct stat VAR_12;

 *VAR_3 = 0;
 VAR_4 = FUNC_4(VAR_2, VAR_0 | VAR_1, 0);
 if (VAR_4 < 0)
  return ((void*)0);
 if (FUNC_2(VAR_4, &VAR_12) < 0)
 {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 if (VAR_12.st_size == 0)
 {

  FUNC_0(VAR_4);
  VAR_6 = (char **) FUNC_5(sizeof(char *));
  *VAR_6 = ((void*)0);
  return VAR_6;
 }
 VAR_7 = FUNC_5(VAR_12.st_size + 1);

 VAR_11 = FUNC_6(VAR_4, VAR_7, VAR_12.st_size + 1);
 FUNC_0(VAR_4);
 if (VAR_11 != VAR_12.st_size)
 {

  FUNC_1(VAR_7);
  return ((void*)0);
 }






 VAR_5 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
 {
  if (VAR_7[VAR_9] == '\n')
   VAR_5++;
 }


 VAR_6 = (char **) FUNC_5((VAR_5 + 1) * sizeof(char *));
 *VAR_3 = VAR_5;


 VAR_8 = VAR_7;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
 {
  if (VAR_7[VAR_9] == '\n')
  {
   int VAR_13 = &VAR_7[VAR_9] - VAR_8;
   char *VAR_14 = FUNC_5(VAR_13 + 1);

   FUNC_3(VAR_14, VAR_8, VAR_13);

   if (VAR_13 > 0 && VAR_14[VAR_13 - 1] == '\r')
    VAR_13--;
   VAR_14[VAR_13] = '\0';
   VAR_6[VAR_10++] = VAR_14;
   VAR_8 = &VAR_7[VAR_9 + 1];
  }
 }
 VAR_6[VAR_10] = ((void*)0);

 FUNC_1(VAR_7);

 return VAR_6;
}
