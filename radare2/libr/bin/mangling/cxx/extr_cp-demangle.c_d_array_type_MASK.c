
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct d_info*) ;
 int FUNC_2 (struct d_info*,int) ;
 int FUNC_3 (struct d_info*,char) ;
 struct demangle_component* FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct d_info*,int ,struct demangle_component*,int ) ;
 struct demangle_component* FUNC_6 (struct d_info*,char const*,int) ;
 char FUNC_7 (struct d_info*) ;
 char const* FUNC_8 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_9 (struct d_info *VAR_1)
{
  char VAR_2;
  struct demangle_component *VAR_3;

  if (! FUNC_3 (VAR_1, 'A'))
    return ((void*)0);

  VAR_2 = FUNC_7 (VAR_1);
  if (VAR_2 == '_')
    VAR_3 = ((void*)0);
  else if (FUNC_0 (VAR_2))
    {
      const char *VAR_4;

      VAR_4 = FUNC_8 (VAR_1);
      do
 {
   FUNC_2 (VAR_1, 1);
   VAR_2 = FUNC_7 (VAR_1);
 }
      while (FUNC_0 (VAR_2));
      VAR_3 = FUNC_6 (VAR_1, VAR_4, FUNC_8 (VAR_1) - VAR_4);
      if (VAR_3 == ((void*)0))
 return ((void*)0);
    }
  else
    {
      VAR_3 = FUNC_4 (VAR_1);
      if (VAR_3 == ((void*)0))
 return ((void*)0);
    }

  if (! FUNC_3 (VAR_1, '_'))
    return ((void*)0);

  return FUNC_5 (VAR_1, VAR_0, VAR_3,
        FUNC_1 (VAR_1));
}
