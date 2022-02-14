
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int FUNC_0 (struct d_info*,int) ;
 struct demangle_component* FUNC_1 (struct d_info*,int ) ;
 struct demangle_component* FUNC_2 (struct d_info*,char const*,int ) ;
 char FUNC_3 (struct d_info*) ;
 char FUNC_4 (struct d_info*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static struct demangle_component *
FUNC_6 (struct d_info *VAR_0, const char *VAR_1)
{
  if (FUNC_3 (VAR_0) != '_' || FUNC_4 (VAR_0) != 'Z')
    return FUNC_2 (VAR_0, VAR_1, FUNC_5 (VAR_1));
  FUNC_0 (VAR_0, 2);
  return FUNC_1 (VAR_0, 0);
}
