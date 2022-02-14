
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 for (VAR_3 = VAR_2, VAR_4 = VAR_0; *VAR_3 && *VAR_4; VAR_3++, VAR_4++) {
  if (*VAR_3 != *VAR_4)
   break;
  if (*VAR_3 == '/') {
   VAR_5 = VAR_3;
   VAR_6++;
  }
 }
 VAR_3 = VAR_5 + 1;
 if (VAR_5) {
  int VAR_7 = VAR_1 - VAR_6, VAR_8, VAR_9;
  int VAR_10 = FUNC_1(VAR_2) - (VAR_3 - VAR_2);
  char *VAR_11;

  VAR_11 = FUNC_2((3 * VAR_7) + VAR_10 + 1);
  for (VAR_8 = 0, VAR_9 = 0; VAR_8 != VAR_7; VAR_8++) {
   VAR_11[VAR_9++] = '.';
   VAR_11[VAR_9++] = '.';
   VAR_11[VAR_9++] = '/';
  }
  FUNC_0(VAR_11 + VAR_9, VAR_3);
  return VAR_11;
 }
 return ((void*)0);
}
