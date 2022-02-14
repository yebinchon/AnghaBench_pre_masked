
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {int dummy; } ;
struct tomoyo_envp {struct tomoyo_path_info const* value; struct tomoyo_path_info const* name; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct tomoyo_path_info* FUNC_3 (char*) ;
 struct tomoyo_path_info* FUNC_4 (char*) ;
 int FUNC_5 (struct tomoyo_path_info const*) ;

__attribute__((used)) static bool FUNC_6(char *VAR_0, char *VAR_1,
         struct tomoyo_envp *VAR_2)
{
 const struct tomoyo_path_info *VAR_3;
 const struct tomoyo_path_info *VAR_4;
 char *VAR_5 = VAR_0 + FUNC_1(VAR_0) - 1;

 if (*VAR_5-- != ']' || *VAR_5 != '"')
  goto out;
 *VAR_5 = '\0';
 if (!FUNC_2(VAR_0))
  goto out;
 VAR_3 = FUNC_4(VAR_0);
 if (!VAR_3)
  goto out;
 if (!FUNC_0(VAR_1, "NULL")) {
  VAR_4 = ((void*)0);
 } else {
  VAR_4 = FUNC_3(VAR_1);
  if (!VAR_4) {
   FUNC_5(VAR_3);
   goto out;
  }
 }
 VAR_2->name = VAR_3;
 VAR_2->value = VAR_4;
 return 1;
out:
 return 0;
}
