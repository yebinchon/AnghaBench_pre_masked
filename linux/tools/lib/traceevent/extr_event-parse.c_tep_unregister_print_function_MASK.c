
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tep_func_handler ;
struct tep_handle {int dummy; } ;
struct tep_function_handler {scalar_t__ func; } ;


 struct tep_function_handler* FUNC_0 (struct tep_handle*,char*) ;
 int FUNC_1 (struct tep_handle*,char*) ;

int FUNC_2(struct tep_handle *VAR_0,
      tep_func_handler VAR_1, char *VAR_2)
{
 struct tep_function_handler *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3 && VAR_3->func == VAR_1) {
  FUNC_1(VAR_0, VAR_2);
  return 0;
 }
 return -1;
}
