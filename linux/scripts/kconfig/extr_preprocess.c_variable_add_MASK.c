
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int flavor; char* value; int node; scalar_t__ exp_count; void* name; } ;
typedef enum variable_flavor { ____Placeholder_variable_flavor } variable_flavor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_3 ;
 struct variable* FUNC_5 (char const*) ;
 struct variable* FUNC_6 (int) ;
 char* FUNC_7 (char*,scalar_t__) ;
 void* FUNC_8 (char const*) ;

void FUNC_9(const char *VAR_4, const char *VAR_5,
    enum variable_flavor VAR_6)
{
 struct variable *VAR_7;
 char *VAR_8;
 bool VAR_9 = 0;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {

  if (VAR_6 == VAR_0) {
   VAR_6 = VAR_7->flavor;
   VAR_9 = 1;
  } else {
   FUNC_1(VAR_7->value);
  }
 } else {

  if (VAR_6 == VAR_0)
   VAR_6 = VAR_1;

  VAR_7 = FUNC_6(sizeof(*VAR_7));
  VAR_7->name = FUNC_8(VAR_4);
  VAR_7->exp_count = 0;
  FUNC_2(&VAR_7->node, &VAR_3);
 }

 VAR_7->flavor = VAR_6;

 if (VAR_6 == VAR_2)
  VAR_8 = FUNC_0(VAR_5);
 else
  VAR_8 = FUNC_8(VAR_5);

 if (VAR_9) {
  VAR_7->value = FUNC_7(VAR_7->value,
        FUNC_4(VAR_7->value) + FUNC_4(VAR_8) + 2);
  FUNC_3(VAR_7->value, " ");
  FUNC_3(VAR_7->value, VAR_8);
  FUNC_1(VAR_8);
 } else {
  VAR_7->value = VAR_8;
 }
}
