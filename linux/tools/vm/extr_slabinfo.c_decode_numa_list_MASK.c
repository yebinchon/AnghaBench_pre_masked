
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static void FUNC_2(int *VAR_2, char *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_0(VAR_2, 0, VAR_0 * sizeof(int));

 if (!VAR_3)
  return;

 while (*VAR_3 == 'N') {
  VAR_3++;
  VAR_4 = FUNC_1(VAR_3, &VAR_3, 10);
  if (*VAR_3 == '=') {
   VAR_3++;
   VAR_5 = FUNC_1(VAR_3, &VAR_3, 10);
   VAR_2[VAR_4] = VAR_5;
   if (VAR_4 > VAR_1)
    VAR_1 = VAR_4;
  }
  while (*VAR_3 == ' ')
   VAR_3++;
 }
}
