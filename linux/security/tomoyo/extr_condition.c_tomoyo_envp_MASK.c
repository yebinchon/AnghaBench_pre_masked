
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_path_info {char const* name; } ;
struct tomoyo_envp {scalar_t__ is_not; int value; int name; } ;


 int FUNC_0 (struct tomoyo_path_info*) ;
 int FUNC_1 (struct tomoyo_path_info*,int ) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0, const char *VAR_1,
   const int VAR_2, const struct tomoyo_envp *VAR_3,
   u8 *VAR_4)
{
 int VAR_5;
 struct tomoyo_path_info VAR_6;
 struct tomoyo_path_info VAR_7;

 VAR_6.name = VAR_0;
 FUNC_0(&VAR_6);
 VAR_7.name = VAR_1;
 FUNC_0(&VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_3++, VAR_4++, VAR_5++) {
  bool VAR_8;

  if (!FUNC_1(&VAR_6, VAR_3->name))
   continue;
  *VAR_4 = 1;
  if (VAR_3->value) {
   VAR_8 = FUNC_1(&VAR_7,
            VAR_3->value);
   if (VAR_3->is_not)
    VAR_8 = !VAR_8;
  } else {
   VAR_8 = 1;
   if (!VAR_3->is_not)
    VAR_8 = !VAR_8;
  }
  if (!VAR_8)
   return 0;
 }
 return 1;
}
