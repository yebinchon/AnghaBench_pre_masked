
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (struct d_info*,int) ;
 struct demangle_component* FUNC_3 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_4 (struct d_info*,char const*,int) ;
 char* FUNC_5 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_6 (struct d_info *VAR_1, struct demangle_component *VAR_2)
{
  const char *VAR_3 = FUNC_5 (VAR_1);
  const char *VAR_4 = VAR_3;
  struct demangle_component *VAR_5;

  if (*VAR_4 == '.' && (FUNC_1 (VAR_4[1]) || VAR_4[1] == '_'))
    {
      VAR_4 += 2;
      while (FUNC_1 (*VAR_4) || *VAR_4 == '_')
 ++VAR_4;
    }
  while (*VAR_4 == '.' && FUNC_0 (VAR_4[1]))
    {
      VAR_4 += 2;
      while (FUNC_0 (*VAR_4))
 ++VAR_4;
    }
  FUNC_2 (VAR_1, VAR_4 - VAR_3);
  VAR_5 = FUNC_4 (VAR_1, VAR_3, VAR_4 - VAR_3);
  return FUNC_3 (VAR_1, VAR_0, VAR_2, VAR_5);
}
