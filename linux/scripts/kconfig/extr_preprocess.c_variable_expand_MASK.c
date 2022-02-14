
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int exp_count; scalar_t__ flavor; int value; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ,int,char**) ;
 int FUNC_1 (char*,...) ;
 struct variable* FUNC_2 (char const*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, int VAR_2, char *VAR_3[])
{
 struct variable *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_2 == 0 && VAR_4->exp_count)
  FUNC_1("Recursive variable '%s' references itself (eventually)",
   VAR_1);

 if (VAR_4->exp_count > 1000)
  FUNC_1("Too deep recursive expansion");

 VAR_4->exp_count++;

 if (VAR_4->flavor == VAR_0)
  VAR_5 = FUNC_0(VAR_4->value, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_3(VAR_4->value);

 VAR_4->exp_count--;

 return VAR_5;
}
