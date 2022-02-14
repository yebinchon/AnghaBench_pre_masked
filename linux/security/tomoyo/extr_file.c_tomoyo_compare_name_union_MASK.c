
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {int dummy; } ;
struct tomoyo_name_union {struct tomoyo_path_info const* filename; scalar_t__ group; } ;


 struct tomoyo_path_info const* FUNC_0 (struct tomoyo_path_info const*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct tomoyo_path_info const*,struct tomoyo_path_info const*) ;

const struct tomoyo_path_info *
FUNC_2(const struct tomoyo_path_info *VAR_0,
     const struct tomoyo_name_union *VAR_1)
{
 if (VAR_1->group)
  return FUNC_0(VAR_0, VAR_1->group);
 if (FUNC_1(VAR_0, VAR_1->filename))
  return VAR_1->filename;
 return ((void*)0);
}
