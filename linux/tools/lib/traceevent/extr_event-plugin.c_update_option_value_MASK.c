
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_plugin_option {char const* value; int set; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct tep_plugin_option *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (!VAR_1) {

  if (VAR_0->value)

   return 0;
  VAR_0->set ^= 1;
  return 0;
 }





 if (VAR_0->value) {
  VAR_0->value = VAR_1;
  return 0;
 }



 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return -1;
 FUNC_1(VAR_2);

 if (FUNC_2(VAR_1, "1") == 0 || FUNC_2(VAR_1, "true") == 0)
  VAR_0->set = 1;
 else if (FUNC_2(VAR_1, "0") == 0 || FUNC_2(VAR_1, "false") == 0)
  VAR_0->set = 0;
 FUNC_0(VAR_2);

 return 0;
}
