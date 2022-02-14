
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_desc {char* args; } ;


 scalar_t__ FUNC_0 (struct script_desc*,char*) ;
 int FUNC_1 (struct script_desc*) ;
 struct script_desc* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(char *VAR_0)
{
 struct script_desc *VAR_1;
 int VAR_2 = 0;
 char *VAR_3;

 VAR_1 = FUNC_2(((void*)0));

 if (FUNC_0(VAR_1, VAR_0))
  goto out;

 if (!VAR_1->args)
  goto out;

 for (VAR_3 = VAR_1->args; *VAR_3; VAR_3++)
  if (*VAR_3 == '<')
   VAR_2++;
out:
 FUNC_1(VAR_1);

 return VAR_2;
}
