
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {char* name; int const_len; scalar_t__ is_dir; int is_patterned; } ;


 scalar_t__ FUNC_0 (char const*,char const*,int const) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (struct tomoyo_path_info const*,struct tomoyo_path_info const*) ;

bool FUNC_3(const struct tomoyo_path_info *VAR_0,
     const struct tomoyo_path_info *VAR_1)
{
 const char *VAR_2 = VAR_0->name;
 const char *VAR_3 = VAR_1->name;
 const int VAR_4 = VAR_1->const_len;


 if (!VAR_1->is_patterned)
  return !FUNC_2(VAR_0, VAR_1);

 if (VAR_0->is_dir != VAR_1->is_dir)
  return 0;

 if (FUNC_0(VAR_2, VAR_3, VAR_4))
  return 0;
 VAR_2 += VAR_4;
 VAR_3 += VAR_4;
 return FUNC_1(VAR_2, VAR_3);
}
