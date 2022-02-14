
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, char *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 if (!VAR_2 || (FUNC_0(VAR_2) > 19))
  return -VAR_0;

 FUNC_1(VAR_1, VAR_2, 20);
 for (VAR_3 = 0; VAR_3 < 20; VAR_3++) {
  if (VAR_4) {
   VAR_1[VAR_3] = '\0';
   continue;
  }
  if ((VAR_1[VAR_3] >= 'a') && (VAR_1[VAR_3] <= 'z'))
   continue;

  if ((VAR_1[VAR_3] >= 'A') && (VAR_1[VAR_3] <= 'Z'))
   continue;

  if (VAR_1[VAR_3] == '-')
   continue;

  if (VAR_1[VAR_3] == '_')
   continue;

  if (VAR_1[VAR_3] == '\0') {
   VAR_4 = 1;
   continue;
  }
  return -VAR_0;
 }
 VAR_1[19] = '\0';
 return 0;
}
