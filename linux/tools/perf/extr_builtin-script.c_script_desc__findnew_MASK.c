
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_desc {int dummy; } ;


 int FUNC_0 (struct script_desc*) ;
 struct script_desc* FUNC_1 (char const*) ;
 struct script_desc* FUNC_2 (char const*) ;

__attribute__((used)) static struct script_desc *FUNC_3(const char *VAR_0)
{
 struct script_desc *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(VAR_1);

 return VAR_1;
}
