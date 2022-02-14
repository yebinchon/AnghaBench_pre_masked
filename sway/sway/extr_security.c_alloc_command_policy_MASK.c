
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_policy {scalar_t__ context; int command; } ;


 int FUNC_0 (struct command_policy*) ;
 struct command_policy* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

struct command_policy *FUNC_3(const char *VAR_0) {
 struct command_policy *VAR_1 = FUNC_1(sizeof(struct command_policy));
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_1->command = FUNC_2(VAR_0);
 if (!VAR_1->command) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 VAR_1->context = 0;
 return VAR_1;
}
