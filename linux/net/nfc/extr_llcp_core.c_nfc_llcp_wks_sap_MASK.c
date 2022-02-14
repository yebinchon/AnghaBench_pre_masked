
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,size_t) ;
 int ** VAR_1 ;

__attribute__((used)) static int FUNC_3(char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1("%s\n", VAR_2);

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_1[VAR_4] == ((void*)0))
   continue;

  if (FUNC_2(VAR_1[VAR_4], VAR_2, VAR_3) == 0)
   return VAR_4;
 }

 return -VAR_0;
}
