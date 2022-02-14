
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {int name; } ;
struct tomoyo_name_union {int dummy; } ;
struct file {int f_path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tomoyo_path_info*,struct tomoyo_name_union const*) ;
 int FUNC_2 (struct tomoyo_path_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct file *VAR_0,
          const struct tomoyo_name_union *VAR_1,
          const bool VAR_2)
{
 bool VAR_3;
 struct tomoyo_path_info VAR_4;

 if (!VAR_0)
  return 0;
 VAR_4.name = FUNC_3(&VAR_0->f_path);
 if (!VAR_4.name)
  return 0;
 FUNC_2(&VAR_4);
 VAR_3 = FUNC_1(&VAR_4, VAR_1);
 FUNC_0(VAR_4.name);
 return VAR_3 == VAR_2;
}
