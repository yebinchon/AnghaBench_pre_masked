
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1)
{
 int VAR_2;
 char *VAR_3 = VAR_0 + VAR_1;
 char *VAR_4 = VAR_0;

 if (VAR_1 == 0)
  return 0;
 VAR_2 = 0;
 while (VAR_4 < VAR_3 && (VAR_4 = FUNC_0(VAR_4, '\n', VAR_3 - VAR_4)) != ((void*)0)) {
  VAR_2++;
  VAR_4++;
 }
 if (VAR_4 < VAR_3)
  VAR_2++;
 return VAR_2;
}
