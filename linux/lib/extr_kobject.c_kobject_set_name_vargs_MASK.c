
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct kobject {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int ,char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char,char) ;

int FUNC_5(struct kobject *VAR_2, const char *VAR_3,
      va_list VAR_4)
{
 const char *VAR_5;

 if (VAR_2->name && !VAR_3)
  return 0;

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;







 if (FUNC_3(VAR_5, '/')) {
  char *VAR_6;

  VAR_6 = FUNC_1(VAR_5, VAR_1);
  FUNC_0(VAR_5);
  if (!VAR_6)
   return -VAR_0;
  FUNC_4(VAR_6, '/', '!');
  VAR_5 = VAR_6;
 }
 FUNC_0(VAR_2->name);
 VAR_2->name = VAR_5;

 return 0;
}
