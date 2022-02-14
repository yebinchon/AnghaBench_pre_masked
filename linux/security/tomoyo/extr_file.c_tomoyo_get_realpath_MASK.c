
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {scalar_t__ name; } ;
struct path {int dummy; } ;


 int FUNC_0 (struct tomoyo_path_info*) ;
 scalar_t__ FUNC_1 (struct path const*) ;

__attribute__((used)) static bool FUNC_2(struct tomoyo_path_info *VAR_0, const struct path *VAR_1)
{
 VAR_0->name = FUNC_1(VAR_1);
 if (VAR_0->name) {
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
