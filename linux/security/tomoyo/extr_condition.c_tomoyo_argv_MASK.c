
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_path_info {char const* name; } ;
struct tomoyo_argv {unsigned int const index; scalar_t__ is_not; int value; } ;


 int FUNC_0 (struct tomoyo_path_info*) ;
 int FUNC_1 (struct tomoyo_path_info*,int ) ;

__attribute__((used)) static bool FUNC_2(const unsigned int VAR_0, const char *VAR_1,
   const int VAR_2, const struct tomoyo_argv *VAR_3,
   u8 *VAR_4)
{
 int VAR_5;
 struct tomoyo_path_info VAR_6;

 VAR_6.name = VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_3++, VAR_4++, VAR_5++) {
  bool VAR_7;

  if (VAR_0 != VAR_3->index)
   continue;
  *VAR_4 = 1;
  FUNC_0(&VAR_6);
  VAR_7 = FUNC_1(&VAR_6, VAR_3->value);
  if (VAR_3->is_not)
   VAR_7 = !VAR_7;
  if (!VAR_7)
   return 0;
 }
 return 1;
}
