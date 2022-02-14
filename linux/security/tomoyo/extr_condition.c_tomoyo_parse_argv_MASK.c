
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_argv {int * value; int index; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char**) ;

__attribute__((used)) static bool FUNC_2(char *VAR_1, char *VAR_2,
         struct tomoyo_argv *VAR_3)
{
 if (FUNC_1(&VAR_3->index, &VAR_1) !=
     VAR_0 || *VAR_1++ != ']' || *VAR_1)
  return 0;
 VAR_3->value = FUNC_0(VAR_2);
 return VAR_3->value != ((void*)0);
}
