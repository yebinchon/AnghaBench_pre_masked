
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3 (int VAR_0, char ***VAR_1)
{
 char **VAR_2;
 int VAR_3;
 char **VAR_4 = (char **) FUNC_0 (sizeof (char *) * (VAR_0 + 1));

 VAR_2=*VAR_1;
 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++)
   {
  size_t VAR_5 = FUNC_2 (VAR_2[VAR_3]) + 1;
  VAR_4[VAR_3] = (char *) FUNC_0 (VAR_5);
  FUNC_1 (VAR_4[VAR_3], VAR_2[VAR_3], VAR_5);
   }
 VAR_4[VAR_3] = ((void*)0);
 *VAR_1 = VAR_4;
}
